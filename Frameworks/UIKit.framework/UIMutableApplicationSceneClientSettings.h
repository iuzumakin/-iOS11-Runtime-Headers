/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {
    bool  _statusBarForegroundTransparent;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) double controlCenterAmbiguousActivationMargin;
@property (nonatomic) long long controlCenterRevealMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultPNGExpirationTime;
@property (nonatomic, copy) NSString *defaultPNGName;
@property (nonatomic) bool defaultStatusBarHidden;
@property (nonatomic) long long defaultStatusBarStyle;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceOrientationEventsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeIndicatorAutoHidden;
@property (nonatomic) bool idleModeVisualEffectsEnabled;
@property (nonatomic) bool idleTimerDisabled;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) bool interfaceOrientationChangesDisabled;
@property (nonatomic) long long notificationCenterRevealMode;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } primaryWindowOverlayInsets;
@property (nonatomic) unsigned long long proximityDetectionModes;
@property (getter=isReachabilitySupported, nonatomic) bool reachabilitySupported;
@property (nonatomic, retain) FBSDisplayMode *requestedDisplayMode;
@property (nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic) unsigned int statusBarContextID;
@property (getter=isStatusBarForegroundTransparent, nonatomic) bool statusBarForegroundTransparent;
@property (nonatomic) bool statusBarHidden;
@property (nonatomic) long long statusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) bool wantsExclusiveForeground;
@property (nonatomic) long long whitePointAdaptivityStyle;

- (long long)backgroundStyle;
- (long long)compatibilityMode;
- (double)controlCenterAmbiguousActivationMargin;
- (long long)controlCenterRevealMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (bool)deviceOrientationEventsEnabled;
- (bool)homeIndicatorAutoHidden;
- (bool)idleModeVisualEffectsEnabled;
- (bool)idleTimerDisabled;
- (long long)interfaceOrientation;
- (bool)interfaceOrientationChangesDisabled;
- (bool)isReachabilitySupported;
- (bool)isStatusBarForegroundTransparent;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)notificationCenterRevealMode;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })primaryWindowOverlayInsets;
- (unsigned long long)proximityDetectionModes;
- (id)requestedDisplayMode;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCompatibilityMode:(long long)arg1;
- (void)setControlCenterAmbiguousActivationMargin:(double)arg1;
- (void)setControlCenterRevealMode:(long long)arg1;
- (void)setDefaultPNGExpirationTime:(double)arg1;
- (void)setDefaultPNGName:(id)arg1;
- (void)setDefaultStatusBarHidden:(bool)arg1;
- (void)setDefaultStatusBarStyle:(long long)arg1;
- (void)setDeviceOrientationEventsEnabled:(bool)arg1;
- (void)setHomeIndicatorAutoHidden:(bool)arg1;
- (void)setIdleModeVisualEffectsEnabled:(bool)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientationChangesDisabled:(bool)arg1;
- (void)setNotificationCenterRevealMode:(long long)arg1;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setPrimaryWindowOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProximityDetectionModes:(unsigned long long)arg1;
- (void)setReachabilitySupported:(bool)arg1;
- (void)setRequestedDisplayMode:(id)arg1;
- (void)setScreenEdgesDeferringSystemGestures:(unsigned long long)arg1;
- (void)setStatusBarContextID:(unsigned int)arg1;
- (void)setStatusBarForegroundTransparent:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setWantsExclusiveForeground:(bool)arg1;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (unsigned int)statusBarContextID;
- (bool)statusBarHidden;
- (long long)statusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)wantsExclusiveForeground;
- (long long)whitePointAdaptivityStyle;

@end