/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {
    UIColor * _backgroundColor;
    long long  _statusBarStyle;
    UIColor * _tabBarTintColor;
    UIColor * _toolBarTintColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, retain) UIColor *tabBarTintColor;
@property (nonatomic, retain) UIColor *toolBarTintColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithBackgroundColor:(id)arg1;
- (void)setTabBarTintColor:(id)arg1;
- (void)setToolBarTintColor:(id)arg1;
- (long long)statusBarStyle;
- (long long)statusBarStyleForBackgroundColor:(id)arg1;
- (void)styleTabBar:(id)arg1;
- (void)styleToolbar:(id)arg1;
- (id)tabBarTintColor;
- (id)toolBarTintColor;
- (void)unstyleTabBar:(id)arg1;
- (void)unstyleToolbar:(id)arg1;

@end
