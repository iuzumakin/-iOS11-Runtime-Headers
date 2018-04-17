/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppSubscription : NSObject {
    NSString * _bundleIdentifier;
    long long  _dataCode;
    long long  _lastAckTime;
    unsigned long long  _lastAnchor;
    long long  _launchTimeHysteresis;
    unsigned long long  _updateFrequency;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long dataCode;
@property (nonatomic, readonly) long long lastAckTime;
@property (nonatomic, readonly) unsigned long long lastAnchor;
@property (nonatomic, readonly) long long launchTimeHysteresis;
@property (nonatomic, readonly) unsigned long long updateFrequency;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (long long)dataCode;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 dataCode:(long long)arg2;
- (long long)lastAckTime;
- (unsigned long long)lastAnchor;
- (long long)launchTimeHysteresis;
- (void)setLastAckTime:(long long)arg1;
- (void)setLastAnchor:(unsigned long long)arg1;
- (void)setLaunchTimeHysteresis:(long long)arg1;
- (void)setUpdateFrequency:(unsigned long long)arg1;
- (unsigned long long)updateFrequency;

@end