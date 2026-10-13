#import <UIKit/UIKit.h>
#import <Security/Security.h>
NSDictionary *GDLicenseExchange(NSString*,NSDictionary*,NSString*,NSError**);
static NSDictionary *SavedToken(void) {
    NSDictionary *query=@{(__bridge id)kSecClass:(__bridge id)kSecClassGenericPassword,(__bridge id)kSecAttrService:@"gdnewios.licensing",(__bridge id)kSecAttrAccount:@"token-v1",(__bridge id)kSecReturnData:@YES};
    CFTypeRef found=NULL;OSStatus status=SecItemCopyMatching((__bridge CFDictionaryRef)query,&found);
    NSData *data=CFBridgingRelease(found);if(status!=errSecSuccess)return nil;
    id value=[NSJSONSerialization JSONObjectWithData:data options:0 error:nil];return [value isKindOfClass:NSDictionary.class]?value:nil;
}
static BOOL SaveToken(NSDictionary *token) {
    NSDictionary *query=@{(__bridge id)kSecClass:(__bridge id)kSecClassGenericPassword,(__bridge id)kSecAttrService:@"gdnewios.licensing",(__bridge id)kSecAttrAccount:@"token-v1"};
    NSData *data=[NSJSONSerialization dataWithJSONObject:token options:0 error:nil];if(!data)return NO;
    OSStatus status=SecItemUpdate((__bridge CFDictionaryRef)query,(__bridge CFDictionaryRef)@{(__bridge id)kSecValueData:data});
    if(status==errSecItemNotFound){NSMutableDictionary *add=[query mutableCopy];add[(__bridge id)kSecValueData]=data;add[(__bridge id)kSecAttrAccessible]=(__bridge id)kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;status=SecItemAdd((__bridge CFDictionaryRef)add,NULL);}
    return status==errSecSuccess;
}
@interface LicenseView : UIViewController
@property(nonatomic,strong) UITextField *entry;
@property(nonatomic,strong) UILabel *status;
@property(nonatomic,strong) UIButton *button;
@property(nonatomic,strong) NSDictionary *token;
@end
@implementation LicenseView
- (void)viewDidLoad {
    [super viewDidLoad];self.view.backgroundColor=UIColor.systemBackgroundColor;
    UILabel *title=[UILabel new];title.text=@"Teste de chave";title.font=[UIFont boldSystemFontOfSize:28];title.numberOfLines=0;
    UILabel *intro=[UILabel new];intro.text=@"GDNEWIOS\nValidação no novo servidor. Este teste não altera a ativação do AMG.";intro.numberOfLines=0;intro.textColor=UIColor.secondaryLabelColor;
    self.entry=[UITextField new];self.entry.placeholder=@"Cole a chave GD-…";self.entry.borderStyle=UITextBorderStyleRoundedRect;self.entry.autocorrectionType=UITextAutocorrectionTypeNo;self.entry.autocapitalizationType=UITextAutocapitalizationTypeAllCharacters;self.entry.font=[UIFont monospacedSystemFontOfSize:14 weight:UIFontWeightRegular];self.entry.adjustsFontSizeToFitWidth=YES;self.entry.minimumFontSize=11;
    self.button=[UIButton buttonWithType:UIButtonTypeSystem];[self.button setTitle:@"Validar chave" forState:UIControlStateNormal];self.button.titleLabel.font=[UIFont boldSystemFontOfSize:18];[self.button addTarget:self action:@selector(validateKey) forControlEvents:UIControlEventTouchUpInside];
    self.status=[UILabel new];self.status.numberOfLines=0;self.status.text=@"Aguardando uma chave de teste.";
    UIButton *reset=[UIButton buttonWithType:UIButtonTypeSystem];[reset setTitle:@"Usar outra chave" forState:UIControlStateNormal];[reset addTarget:self action:@selector(resetToken) forControlEvents:UIControlEventTouchUpInside];
    UILabel *host=[UILabel new];host.text=@"gdnewios.gdapps.online";host.textColor=UIColor.secondaryLabelColor;host.font=[UIFont systemFontOfSize:13];host.numberOfLines=0;
    UIStackView *stack=[[UIStackView alloc] initWithArrangedSubviews:@[title,intro,self.entry,self.button,self.status,reset,host]];stack.axis=UILayoutConstraintAxisVertical;stack.spacing=22;stack.translatesAutoresizingMaskIntoConstraints=NO;[self.view addSubview:stack];
    UILayoutGuide *safe=self.view.safeAreaLayoutGuide;[NSLayoutConstraint activateConstraints:@[[stack.leadingAnchor constraintEqualToAnchor:safe.leadingAnchor constant:24],[stack.trailingAnchor constraintEqualToAnchor:safe.trailingAnchor constant:-24],[stack.topAnchor constraintEqualToAnchor:safe.topAnchor constant:24],[self.entry.heightAnchor constraintEqualToConstant:48],[self.button.heightAnchor constraintEqualToConstant:48]]];
    self.token=SavedToken();if(self.token)[self validateKey];
}
- (void)resetToken {
    if(!self.button.enabled)return;
    NSDictionary *query=@{(__bridge id)kSecClass:(__bridge id)kSecClassGenericPassword,(__bridge id)kSecAttrService:@"gdnewios.licensing",(__bridge id)kSecAttrAccount:@"token-v1"};SecItemDelete((__bridge CFDictionaryRef)query);
    self.token=nil;self.entry.text=@"";self.entry.hidden=NO;self.status.text=@"Cole uma chave para validar.";[self.button setTitle:@"Validar chave" forState:UIControlStateNormal];
}
- (void)validateKey {
    NSString *key=self.token?nil:[self.entry.text stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceAndNewlineCharacterSet];
    if(!self.token && !key.length){self.status.text=@"Informe uma chave.";return;}
    [self.view endEditing:YES];self.button.enabled=NO;self.entry.enabled=NO;self.status.text=@"Consultando o servidor…";
    NSDictionary *previous=self.token;
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED,0),^{
        NSError *error=nil;NSDictionary *verified=GDLicenseExchange(key,previous,nil,&error);BOOL stored=verified?SaveToken(verified):NO;
        dispatch_async(dispatch_get_main_queue(),^{
            self.button.enabled=YES;self.entry.enabled=YES;
            if(verified && stored){
                self.token=verified;self.entry.text=@"";self.entry.hidden=YES;
                NSString *encoded=verified[@"payload"];encoded=[[encoded stringByReplacingOccurrencesOfString:@"-" withString:@"+"] stringByReplacingOccurrencesOfString:@"_" withString:@"/"];while(encoded.length%4)encoded=[encoded stringByAppendingString:@"="];
                NSData *data=[[NSData alloc] initWithBase64EncodedString:encoded options:0];NSDictionary *claims=[NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
                NSDateFormatter *format=[NSDateFormatter new];format.locale=[NSLocale localeWithLocaleIdentifier:@"pt_BR"];format.dateStyle=NSDateFormatterMediumStyle;format.timeStyle=NSDateFormatterShortStyle;
                self.status.text=[@"Chave validada.\nVálida até " stringByAppendingString:[format stringFromDate:[NSDate dateWithTimeIntervalSince1970:[claims[@"exp"] doubleValue]]]];
                [self.button setTitle:@"Consultar validade" forState:UIControlStateNormal];
            } else if(verified){self.status.text=@"O servidor validou a chave, mas não foi possível salvar a consulta neste app.";}
            else {self.status.text=error?@"Não foi possível consultar. Verifique a conexão e tente novamente.":@"Chave inválida, vencida, revogada ou vinculada a outro aparelho.";}
        });
    });
}
@end
@interface LicenseDelegate : UIResponder <UIApplicationDelegate>
@property(nonatomic,strong) UIWindow *window;
@end
@implementation LicenseDelegate
- (BOOL)application:(UIApplication*)app didFinishLaunchingWithOptions:(NSDictionary*)options {
    self.window=[[UIWindow alloc] initWithFrame:UIScreen.mainScreen.bounds];self.window.rootViewController=[LicenseView new];[self.window makeKeyAndVisible];return YES;
}
@end
int main(int argc,char **argv){@autoreleasepool{return UIApplicationMain(argc,argv,nil,NSStringFromClass(LicenseDelegate.class));}}
