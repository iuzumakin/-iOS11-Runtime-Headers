/* Generated by RuntimeBrowser.
 */

@protocol TIProactiveQuickTypeManaging <NSObject>

@required

- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (NSMutableArray *)generateAndRenderProactiveSuggestionsWithTriggers:(void *)arg1 withAdditionalPredictions:(void *)arg2 withSecureCandidateRenderer:(void *)arg3 withRenderTraits:(void *)arg4 withInput:(void *)arg5 withRecipient:(void *)arg6 withApplication:(void *)arg7 withLocale:(void *)arg8 withTextContentType:(void *)arg9 withAvailableApps:(void *)arg10 logBlock:(void *)arg11; // needs 11 arg types, found 16: NSArray *, NSArray *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, NSString *, NSString *, NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSArray *)getMeCardEmailAddresses;
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (void)reset;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;

@end
