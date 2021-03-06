/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlPillView : UIView {
    UIBezierPath * _path;
    CAShapeLayer * _shapeLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _state;
    NSTimer * _stateDelayTimer;
}

@property (getter=isCompleted, nonatomic, readonly) bool isCompleted;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_setState:(unsigned long long)arg1 animated:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompleted;
- (void)setColor:(id)arg1 animated:(bool)arg2;
- (void)setColor:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2 animationDelay:(double)arg3;
- (unsigned long long)state;

@end
