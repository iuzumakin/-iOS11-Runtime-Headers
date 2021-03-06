/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILegibilityView : _UILegibilityView <SBUILegibility> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    _UILegibilitySettings * _legibilitySettings;
    long long  _tintColor;
    UIImage * _tintImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (readonly) Class superclass;
@property (nonatomic) long long tintColor;
@property (nonatomic, retain) UIImage *tintImage;

- (void).cxx_destruct;
- (id)_tintColorForSettings:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 tintColor:(long long)arg4;
- (id)legibilitySettings;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setTintColor:(long long)arg1;
- (void)setTintImage:(id)arg1;
- (long long)tintColor;
- (id)tintImage;
- (void)updateForChangedSettings:(id)arg1;

@end
