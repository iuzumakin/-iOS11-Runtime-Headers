/* Generated by RuntimeBrowser.
 */

@protocol NCNotificationViewControllerDelegate <NSObject>

@required

- (void)notificationViewController:(void *)arg1 executeAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationViewController *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationViewController:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationViewController *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (NSDictionary *)notificationUsageTrackingStateForNotificationViewController:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })notificationViewController:(NCNotificationViewController *)arg1 convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (void)notificationViewController:(void *)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: NCNotificationViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)notificationViewController:(NCNotificationViewController *)arg1 suggestsDismissingShortLookWithSource:(id)arg2;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerIsReadyToBePresented:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowInteractionGesture:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldBlurShortLook:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationFrameForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)shouldLoadAudioAccessoryViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;

@end
