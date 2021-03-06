/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicNotificationRegistry : HMFObject <NSSecureCoding> {
    NSMutableDictionary * _notificationRegistry;
}

@property (nonatomic, retain) NSMutableDictionary *notificationRegistry;

+ (id)_keyForCharacteristic:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allCharacteristicIdentifiers;
- (void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2;
- (void)deregisterUsers:(id)arg1 forHome:(id)arg2;
- (void)disableNotification:(id)arg1 user:(id)arg2 unconditional:(bool)arg3 ignoreLockReq:(bool)arg4 home:(id)arg5;
- (bool)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id*)arg3;
- (bool)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)filterCharacteristics:(id)arg1 forUser:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)notificationRegistry;
- (void)setNotificationRegistry:(id)arg1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg1;

@end
