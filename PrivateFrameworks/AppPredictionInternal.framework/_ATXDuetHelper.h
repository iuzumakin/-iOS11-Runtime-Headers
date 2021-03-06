/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDuetHelper : NSObject

+ (id)datePredicateWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)sharedInstance;

- (id)_queryDuetStreams:(id)arg1 withPredicate:(id)arg2;
- (id)getAppLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getIntentEventForPredicate:(id)arg1 forSource:(long long)arg2;
- (id)getIntentEventForUUID:(id)arg1 forSource:(long long)arg2;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;
- (id)getScreenTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getSurfExtensionLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end
