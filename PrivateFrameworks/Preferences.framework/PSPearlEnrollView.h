/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPearlEnrollView : UIView {
    bool  _active;
    AVCaptureSession * _captureSession;
    CAShapeLayer * _circleMaskLayer;
    UIView * _circleMaskView;
    unsigned long long  _correctionSamplesCount;
    PSPearlCrossHairsView * _crossHairs;
    NSString * _debugFrameInformation;
    UILabel * _debugLabel;
    bool  _debugOverlayVisible;
    NSString * _debugStatusInformation;
    NSString * _debugTemplateInformation;
    <PSPearlEnrollViewDelegate> * _delegate;
    AVCaptureDeviceInput * _deviceInput;
    unsigned long long  _frameCount;
    NSTimer * _nudgeTimer;
    unsigned long long  _nudgesNudged;
    bool  _nudgesPaused;
    bool  _nudging;
    PSPearlPillContainerView * _pillContainer;
    double  _pitchCorrection;
    double  _pitchCorrectionSamples;
    double  _pitchMax;
    double  _pitchMin;
    PSPearlPositioningGuideView * _positioningGuide;
    AVCaptureVideoPreviewLayer * _previewLayer;
    NSDate * _startTime;
    int  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSObject<OS_dispatch_semaphore> * _stateSema;
    NSDate * _stateStart;
    bool  _stateTransitionInProgress;
    PSPearlMovieLoopView * _tutorialMovieView;
    AVPlayer * _tutorialPlayer;
}

@property (nonatomic) bool active;
@property (nonatomic) bool debugOverlayVisible;
@property (nonatomic) <PSPearlEnrollViewDelegate> *delegate;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (void)_animateToFinishedWithCompletion:(id /* block */)arg1;
- (void)_animateToFirstScanCompleteWithCompletion:(id /* block */)arg1;
- (void)_animateToFirstScanWithCompletion:(id /* block */)arg1;
- (void)_animateToNeedsPositioningWithCompletion:(id /* block */)arg1;
- (void)_animateToPartialCaptureWithCompletion:(id /* block */)arg1;
- (void)_animateToSecondScanCompleteWithCompletion:(id /* block */)arg1;
- (void)_animateToSecondScanWithCompletion:(id /* block */)arg1;
- (void)_animateToState:(int)arg1 completion:(id /* block */)arg2;
- (void)_animateToTutorialWithCompletion:(id /* block */)arg1;
- (double)_cameraViewRadius;
- (id)_enrollMaskPathWithRadius:(double)arg1;
- (id)_frontCamera;
- (double)_largeRingRadius;
- (void)_nudgeIfNecessary;
- (id)_positioningMaskPathWithSide:(double)arg1 radius:(double)arg2;
- (void)_recordDataFrameWithFaceState:(id)arg1;
- (void)_runTutorialLoopWithDuration:(double)arg1 delay:(double)arg2 loopDelay:(double)arg3;
- (void)_setState:(int)arg1 completion:(id /* block */)arg2;
- (double)_smallRingRadius;
- (void)_startNudgeTimer;
- (void)_stopNudgeTimer;
- (double)_tutorialRadius;
- (void)_updateCorrectionEstimates:(double)arg1 yaw:(double)arg2;
- (void)_updateDebugOverlay;
- (bool)active;
- (void)dealloc;
- (bool)debugOverlayVisible;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (id)maskPathWithRadius:(double)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)percentOfPillsCompleted;
- (void)setActive:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCameraBlurred:(bool)arg1;
- (void)setDebugOverlayVisible:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailed;
- (void)setNudgesPaused:(bool)arg1;
- (void)setPitch:(double)arg1 yaw:(double)arg2;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 completion:(id /* block */)arg2;
- (void)startCapture;
- (int)state;
- (void)updateWithFaceState:(id)arg1;
- (void)updateWithProgress:(id)arg1;

@end