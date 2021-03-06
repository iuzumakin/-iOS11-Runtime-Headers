/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriView : UIView <AFUISiriRemoteViewHosting, SBUIPasscodeLockViewDelegate, SiriUISiriStatusViewDelegate> {
    UILabel * _assistantVersionLabel;
    SiriUIVisualEffectView * _assistantVersionVisualEffectView;
    SiriUIAudioRoutePickerButton * _audioRoutePickerButton;
    _UIBackdropView * _backdropView;
    bool  _backdropViewVisible;
    bool  _carDisplaySnippetVisible;
    UIView * _carPlayGatekeeperBackdropView;
    bool  _carPlayGatekeeperBackdropViewVisible;
    SiriUIConfiguration * _configuration;
    <AFUISiriViewDataSource> * _dataSource;
    <AFUISiriViewDelegate> * _delegate;
    UIView * _dimmingAndLockContainer;
    UIView * _dimmingView;
    bool  _disabled;
    SiriUIVisualEffectView * _eyesFreeEffectView;
    UIImageView * _eyesFreeLogoView;
    bool  _flamesViewDeferred;
    bool  _flamesViewPaused;
    UIView * _foregroundView;
    UIView * _frozenBackdropSnapshotView;
    SiriUIHelpButton * _helpButton;
    bool  _inHideUnlockViewanimation;
    bool  _inShowUnlockViewAnimation;
    bool  _keepStatusViewHidden;
    UIView<SBUIPasscodeLockView> * _lockView;
    bool  _lockViewHidden;
    long long  _mode;
    UIView * _remoteContentView;
    bool  _remoteContentViewHidden;
    SiriUIContentButton * _reportBugButton;
    long long  _siriSessionState;
    UIView<SiriUISiriStatusViewProtocol> * _siriStatusView;
    UIView * _statusViewContainer;
    bool  _statusViewHidden;
    unsigned long long  _unlockAttemptCount;
    id /* block */  _unlockCompletion;
}

@property (nonatomic) bool carDisplaySnippetVisible;
@property (nonatomic) <AFUISiriViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic) bool flamesViewDeferred;
@property (nonatomic) bool flamesViewPaused;
@property (nonatomic, readonly) UIView *foregroundView;
@property (nonatomic, retain) UIView *frozenBackdropSnapshotView;
@property (readonly) unsigned long long hash;
@property (getter=isInUITrackingMode, nonatomic) bool inUITrackingMode;
@property (nonatomic) bool keepStatusViewHidden;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIView *remoteContentView;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) bool statusViewHidden;
@property (readonly) Class superclass;

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)_animateButtonsHidden:(bool)arg1;
- (void)_animateLockViewIsAnimatingIn:(bool)arg1 completion:(id /* block */)arg2;
- (void)_audioRouteButtonTapped:(id)arg1;
- (double)_buttonInset;
- (void)_configureEyesFreeLogo;
- (void)_configureHelpButton;
- (void)_configureReportBugButtonWithHoldToTalkState:(bool)arg1;
- (void)_createAssistantVersionLabelIfNecessary;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(bool)arg2;
- (void)_destroyAssistantVersionLabelIfNecessary;
- (bool)_helpButtonIsVisible;
- (void)_helpButtonTapped:(id)arg1;
- (void)_hideLockViewWithResult:(long long)arg1;
- (void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(id /* block */)arg2;
- (bool)_isTextInputEnabled;
- (void)_layoutReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lockViewFrame;
- (id)_lockViewLegibilityProvider;
- (void)_preferencesDidChange:(id)arg1;
- (bool)_reducesMotionEffects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (bool)_shouldIndicateHoldToTalkMode;
- (bool)_showsReportBugButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_statusViewContainerFrame;
- (double)_statusViewHeight;
- (void)_updateControlsAppearance;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (bool)carDisplaySnippetVisible;
- (void)configureReportBugButtonToShowHoldToTalkState:(bool)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dimBackdropSettings;
- (bool)disabled;
- (bool)flamesViewDeferred;
- (bool)flamesViewPaused;
- (id)foregroundView;
- (id)frozenBackdropSnapshotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (bool)isCarPlayMode;
- (bool)isInUITrackingMode;
- (bool)keepStatusViewHidden;
- (void)layoutSubviews;
- (long long)mode;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)pulseHelpButton;
- (void)reloadData;
- (id)remoteContentView;
- (void)setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)setBackdropShouldRasterize:(bool)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setCarPlayGatekeeperBackdropVisible:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFlamesViewDeferred:(bool)arg1;
- (void)setFlamesViewPaused:(bool)arg1;
- (void)setFrozenBackdropSnapshotView:(id)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setInUITrackingMode:(bool)arg1;
- (void)setKeepStatusViewHidden:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setRemoteContentView:(id)arg1;
- (void)setShowAudioRoutePicker:(bool)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 completionHandler:(id /* block */)arg2 unlockCompletionHandler:(id /* block */)arg3;
- (void)siriDidActivateFromSource:(long long)arg1;
- (long long)siriSessionState;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (bool)statusViewHidden;
- (void)teardownStatusView;
- (void)updateForPercentageRevealed:(double)arg1;

@end
