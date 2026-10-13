#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <CommonCrypto/CommonDigest.h>
#import "public_key.h"

static NSData *Decode(NSString *s) {
    if(![s isKindOfClass:NSString.class]) return nil;
    s=[[s stringByReplacingOccurrencesOfString:@"-" withString:@"+"] stringByReplacingOccurrencesOfString:@"_" withString:@"/"];
    while(s.length%4) s=[s stringByAppendingString:@"="];
    return [[NSData alloc] initWithBase64EncodedString:s options:0];
}
static NSString *RandomHex(size_t count) {
    NSMutableData *bytes=[NSMutableData dataWithLength:count];
    if(SecRandomCopyBytes(kSecRandomDefault,count,bytes.mutableBytes)!=errSecSuccess) return nil;
    NSMutableString *result=[NSMutableString string];const unsigned char *p=bytes.bytes;
    for(size_t i=0;i<count;i++) [result appendFormat:@"%02x",p[i]];
    return result;
}
static NSString *DeviceIdentifier(NSError **error) {
    NSDictionary *query=@{(__bridge id)kSecClass:(__bridge id)kSecClassGenericPassword,(__bridge id)kSecAttrService:@"gdnewios.licensing",(__bridge id)kSecAttrAccount:@"device-v1",(__bridge id)kSecReturnData:@YES,(__bridge id)kSecMatchLimit:(__bridge id)kSecMatchLimitOne};
    CFTypeRef found=NULL;OSStatus status=SecItemCopyMatching((__bridge CFDictionaryRef)query,&found);
    NSData *data=CFBridgingRelease(found);
    if(status==errSecItemNotFound) {
        NSString *identifier=RandomHex(32);if(!identifier)return nil;
        data=[identifier dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *add=@{(__bridge id)kSecClass:(__bridge id)kSecClassGenericPassword,(__bridge id)kSecAttrService:@"gdnewios.licensing",(__bridge id)kSecAttrAccount:@"device-v1",(__bridge id)kSecValueData:data,(__bridge id)kSecAttrAccessible:(__bridge id)kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly};
        status=SecItemAdd((__bridge CFDictionaryRef)add,NULL);
    }
    if(status!=errSecSuccess){if(error)*error=[NSError errorWithDomain:@"GDNEWIOS.Keychain" code:status userInfo:@{NSLocalizedDescriptionKey:@"Não foi possível acessar o identificador desta instalação."}];return nil;}
    unsigned char hash[CC_SHA256_DIGEST_LENGTH];CC_SHA256(data.bytes,(CC_LONG)data.length,hash);
    NSMutableString *result=[NSMutableString string];for(int i=0;i<CC_SHA256_DIGEST_LENGTH;i++)[result appendFormat:@"%02x",hash[i]];
    return result;
}
static BOOL ClaimsValid(NSDictionary *token,NSString *device,NSString *challenge,NSError **error) {
    NSString *payload=token[@"payload"];NSData *signature=Decode(token[@"signature"]);NSData *json=Decode(payload);
    if(!signature || !json)return NO;
    NSData *publicKey=[NSData dataWithBytes:GDLicensePublicKey length:sizeof(GDLicensePublicKey)];
    NSDictionary *attributes=@{(__bridge id)kSecAttrKeyType:(__bridge id)kSecAttrKeyTypeRSA,(__bridge id)kSecAttrKeyClass:(__bridge id)kSecAttrKeyClassPublic,(__bridge id)kSecAttrKeySizeInBits:@2048};
    SecKeyRef key=SecKeyCreateWithData((__bridge CFDataRef)publicKey,(__bridge CFDictionaryRef)attributes,NULL);
    if(!key)return NO;
    BOOL valid=SecKeyVerifySignature(key,kSecKeyAlgorithmRSASignatureMessagePKCS1v15SHA256,(__bridge CFDataRef)[payload dataUsingEncoding:NSUTF8StringEncoding],(__bridge CFDataRef)signature,NULL);
    CFRelease(key);if(!valid)return NO;
    id claims=[NSJSONSerialization JSONObjectWithData:json options:0 error:error];
    if(![claims isKindOfClass:NSDictionary.class])return NO;
    for(NSString *field in @[@"iss",@"product",@"device",@"challenge",@"license"])
        if(![claims[field] isKindOfClass:NSString.class])return NO;
    for(NSString *field in @[@"iat",@"exp",@"refresh"])
        if(![claims[field] isKindOfClass:NSNumber.class])return NO;
    NSTimeInterval now=NSDate.date.timeIntervalSince1970;
    return [claims[@"iss"] isEqualToString:@"gdnewios.gdapps.online"] && [claims[@"product"] isEqualToString:@"gdnewios.amg"] && [claims[@"device"] isEqualToString:device] && [claims[@"challenge"] isEqualToString:challenge] && [claims[@"exp"] doubleValue]>now && [claims[@"refresh"] doubleValue]>now && [claims[@"refresh"] doubleValue]<=[claims[@"exp"] doubleValue] && fabs([claims[@"iat"] doubleValue]-now)<300;
}
// Execute off the main thread. A failure never grants access.
NSDictionary *GDLicenseExchange(NSString *activationKey,NSDictionary *previousToken,NSString *deviceOverride,NSError **error) {
    NSString *device=deviceOverride?:DeviceIdentifier(error),*challenge=RandomHex(16);
    if(!device || !challenge)return nil;
    NSMutableDictionary *body=[@{@"product":@"gdnewios.amg",@"device":device,@"challenge":challenge} mutableCopy];
    NSString *path=activationKey?@"activate":@"check";
    if(activationKey)body[@"key"]=activationKey;else if(previousToken)body[@"token"]=previousToken;else return nil;
    NSMutableURLRequest *request=[NSMutableURLRequest requestWithURL:[NSURL URLWithString:[@"https://gdnewios.gdapps.online/v1/" stringByAppendingString:path]]];
    request.HTTPMethod=@"POST";request.timeoutInterval=20;[request setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    request.HTTPBody=[NSJSONSerialization dataWithJSONObject:body options:0 error:error];if(!request.HTTPBody)return nil;
    NSURLSessionConfiguration *configuration=NSURLSessionConfiguration.ephemeralSessionConfiguration;
    configuration.HTTPShouldSetCookies=NO;configuration.URLCache=nil;
    NSURLSession *session=[NSURLSession sessionWithConfiguration:configuration];
    dispatch_semaphore_t done=dispatch_semaphore_create(0);__block NSData *responseData;__block NSError *failure;__block NSInteger status=0;
    [[session dataTaskWithRequest:request completionHandler:^(NSData *data,NSURLResponse *response,NSError *networkError){responseData=data;failure=networkError;if([response isKindOfClass:NSHTTPURLResponse.class])status=[(NSHTTPURLResponse*)response statusCode];dispatch_semaphore_signal(done);}] resume];
    if(dispatch_semaphore_wait(done,dispatch_time(DISPATCH_TIME_NOW,25*NSEC_PER_SEC))!=0){[session invalidateAndCancel];return nil;}
    [session finishTasksAndInvalidate];if(failure){if(error)*error=failure;return nil;}
    if(status!=200 || responseData.length>8192)return nil;
    id token=[NSJSONSerialization JSONObjectWithData:responseData options:0 error:error];
    if(![token isKindOfClass:NSDictionary.class] || !ClaimsValid(token,device,challenge,error))return nil;
    return token;
}
#ifdef GD_LICENSE_CLI
int main(void) {
    @autoreleasepool {
        NSData *input=[[NSFileHandle fileHandleWithStandardInput] readDataToEndOfFile];
        NSDictionary *request=[NSJSONSerialization JSONObjectWithData:input options:0 error:nil];
        NSError *error=nil;NSDictionary *token=GDLicenseExchange(request[@"key"],request[@"token"],request[@"device"],&error);
        if(!token){printf("{\"verified\":false,\"errorCode\":%ld}\n",(long)error.code);return 1;}
        NSData *output=[NSJSONSerialization dataWithJSONObject:@{@"verified":@YES,@"token":token} options:0 error:nil];
        fwrite(output.bytes,1,output.length,stdout);return 0;
    }
}
#endif
