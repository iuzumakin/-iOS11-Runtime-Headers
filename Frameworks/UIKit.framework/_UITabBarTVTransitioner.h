/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {
    <UIViewControllerContextTransitioning> * _transitionContext;
    bool  _transitionFromRight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic) bool transitionFromRight;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)finishTransition;
- (void)interruptTabBarControllerTransition;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionFromRight:(bool)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (bool)transitionFromRight;

@end