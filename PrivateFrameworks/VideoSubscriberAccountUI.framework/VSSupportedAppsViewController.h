/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSSupportedAppsViewController : UIViewController {
    NSArray * _apps;
    VSAuditToken * _auditToken;
    <VSSupportedAppsViewControllerDelegate> * _delegate;
    VSOptional * _identityProviderID;
    NSOperationQueue * _privateQueue;
}

@property (nonatomic, copy) NSArray *apps;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (nonatomic) <VSSupportedAppsViewControllerDelegate> *delegate;
@property (nonatomic, retain) VSOptional *identityProviderID;
@property (nonatomic, retain) NSOperationQueue *privateQueue;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_doneButtonPresed:(id)arg1;
- (void)_finishLoadingApps:(id)arg1;
- (void)_presentError:(id)arg1;
- (id)apps;
- (id)auditToken;
- (void)beginLoadingApps;
- (id)delegate;
- (id)identityProviderID;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)privateQueue;
- (void)setApps:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProviderID:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)viewDidLoad;

@end
