# GDNEWIOS licensing

New licensing service, independent of the original AMG service. This is not yet wired into the AMG executable.

RSA-2048/SHA-256 signs exact base64url payload bytes. The iOS client pins the generated public key and verifies issuer, product, device, request challenge and validity times. A request challenge prevents accepting a response from another request. Each key binds atomically to one installation identifier. Server-side expiration and revocation are checked on every exchange. Keys are stored as HMAC-SHA-256 digests; private signing keys and administrative credentials remain in the server data directory.

`POST /admin/issue` creates a key with a validity of 1–3650 days, requiring an authenticated administrator session and CSRF token. `POST /admin/revoke` revokes a license by ID. `POST /v1/activate` accepts a key, product, device hash and random challenge. `POST /v1/check` exchanges an existing signed token for a fresh response. No original AMG endpoint is emulated.

The website displays new keys once. Do not commit the data directory, issued keys or credentials. The client API is blocking and must run off the UI thread. Compile with `public_key.h` generated from the production public key in PKCS#1 DER format. `GD_LICENSE_CLI` builds an isolated test executable; it does not unlock or modify AMG.

Run `python3 test_server.py` on a system with OpenSSL. Runtime keys belong in a directory owned by UID 10001 and mode 0700. Production requires HTTPS and proxy rate limiting. The app binding and the original license flow still need to be integrated and tested before any AMG package is delivered.

Verified in this workspace: 9 server tests, 5 offline signature tests on the iPhone, 5 live HTTPS client tests (activation, refresh, invalid key, other device, revocation), and activation/refresh using a private installation identity in the test client's own Keychain group. All temporary test licenses were revoked.

The independent app `GD Chaves Teste` was installed on the iPhone for manual UI testing. It has its own bundle ID and does not modify AMG. Server deployment lives at `/opt/gdnewios-licensing`; the domain has a dedicated HTTPS certificate, proxy request limits and existing scheduled certificate renewal. AMG continues to use its original activation service: the integration point has not yet been recovered from the obfuscated binary. Do not describe these tests as proof that AMG accepts the new keys.

Administrative access now uses a username and a scrypt password hash in `data/admin-credentials.json`. The password is never embedded in the source or frontend. Sessions last eight hours and use a Secure, HttpOnly, SameSite=Strict cookie, with CSRF tokens for administrative writes. `/admin/login`, `/admin/session` and `/admin/logout` handle authentication. Previous bearer-token authentication is disabled. Eight administrative HTTP tests passed, plus live HTTPS login, issue/revoke and logout checks. The earlier local token-access note is obsolete.

License management now supports a required owner name when issuing a key, authenticated listing at `/admin/licenses`, owner edits at `/admin/owner`, and revocation. The dashboard searches by name or license ID and shows pending, active, expired and revoked status plus expiration and whether a device is bound. Existing rows are migrated with an empty owner and displayed as “Sem nome”. No raw activation keys, device identifiers or key digests are returned by the list. The production migration preserved all five existing licenses; an explicitly marked automatic-test license was issued, renamed and revoked during verification. The administrative suite now has ten passing HTTP tests; the nine licensing tests still pass.
