/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface> {
    NSXPCConnection * _connection;
    long long  _controlsStyle;
    <PGPictureInPictureProxyDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation : 1; 
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error : 1; 
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1; 
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded : 1; 
    }  _delegateRespondsTo;
    PGHostedWindow * _hostedWindow;
    bool  _isHostedWindowSizeChangeDuringPinchGesture;
    bool  _isPictureInPictureActive;
    bool  _isPictureInPicturePossible;
    bool  _isPictureInPictureSuspended;
    bool  _isStartingStoppingOrCancellingPictureInPicture;
    NSArray * _loadedTimeRanges;
    PGSetterThrottler * _loadedTimeRangesSetterThrottler;
    bool  _pictureInPictureShouldStartWhenEnteringBackground;
    bool  _pictureInPictureWasStartedWhenEnteringBackground;
    double  _playbackProgress;
    PGSetterThrottler * _playbackProgressSetterThrottler;
    double  _playbackRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    NSObject<OS_dispatch_queue> * _queue;
    UIViewController * _rootViewController;
    UIViewController<PGPictureInPictureViewController> * _viewController;
}

@property (nonatomic, readonly) long long controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) bool pictureInPicturePossible;
@property (nonatomic) bool pictureInPictureShouldStartWhenEnteringBackground;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) bool pictureInPictureSuspended;
@property (nonatomic, readonly) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController<PGPictureInPictureViewController> *viewController;

+ (void)_updatePictureInPictureActive:(bool)arg1;
+ (bool)isPictureInPictureActive;
+ (bool)isPictureInPictureSupported;
+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;

- (void).cxx_destruct;
- (void)_startPictureInPictureAnimated:(bool)arg1 enteringBackground:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_stopPictureInPictureAnimated:(bool)arg1 activateApplicationIfNeededAndRestoreUserInterface:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameForTransitionAnimationAssumeApplicationActive:(bool)arg1;
- (oneway void)actionButtonTapped;
- (long long)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (id)init;
- (id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (id)loadedTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (oneway void)pictureInPictureCancelRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureResumed;
- (bool)pictureInPictureShouldStartWhenEnteringBackground;
- (oneway void)pictureInPictureStartRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureSuspended;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (double)playbackProgress;
- (double)playbackRate;
- (void)preferredContentSizeDidChangeForViewController;
- (void)rotateContentContainer:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPictureInPictureShouldStartWhenEnteringBackground:(bool)arg1;
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(bool)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)updatePictureInPicturePossible:(bool)arg1;
- (id)viewController;

@end