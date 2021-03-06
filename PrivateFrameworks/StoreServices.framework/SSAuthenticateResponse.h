/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
    SSAccount * _authenticatedAccount;
    NSError * _error;
    NSDictionary * _responseDictionary;
    long long  _responseType;
}

@property (nonatomic) long long authenticateResponseType;
@property (nonatomic, retain) SSAccount *authenticatedAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *responseDictionary;
@property (readonly) Class superclass;

- (void)_setError:(id)arg1;
- (long long)authenticateResponseType;
- (id)authenticatedAccount;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(long long)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end
