/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUStackedAlbumTransition : PUNavigationTransition <PUCollectionViewLayoutTransitioningDelegate, PUTransitionViewAnimatorDelegate> {
    id  __disableToken;
    PUStackedAlbumTransitionLayout * __interactiveTransitionLayout;
    PUPhotoPinchGestureRecognizer * __photoPinchGestureRecognizer;
    PUStackedAlbumLayout * __transitionLayout;
    PUTransitionViewAnimator * __transitionViewAnimator;
    UIView * _animatorView;
    <PUStackedAlbumTransitionDelegate> * _delegate;
    bool  _didAnimateRoundedCorners;
    bool  _forFolder;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionCenter;
    bool  _isExpanding;
    bool  _isForStandInAlbum;
    PHCollection * _ph_photoCollection;
    <PLAssetContainer> * _photoCollection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _popTransitionInitialVisibleBounds;
    NSSet * _popTransitionInitialVisibleStackedAssetIndexPaths;
}

@property (setter=_setDisableToken:, nonatomic, retain) id _disableToken;
@property (setter=_setInteractiveTransitionLayout:, nonatomic, retain) PUStackedAlbumTransitionLayout *_interactiveTransitionLayout;
@property (setter=_setPhotoPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (setter=_setTransitionLayout:, nonatomic) PUStackedAlbumLayout *_transitionLayout;
@property (setter=_setTransitionViewAnimator:, nonatomic, retain) PUTransitionViewAnimator *_transitionViewAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUStackedAlbumTransitionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isForFolder, nonatomic) bool forFolder;
@property (nonatomic, readonly) UIViewController<PUStackedAlbumControllerTransition> *fromViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } interactionCenter;
@property (setter=_setExpanding:, nonatomic) bool isExpanding;
@property (setter=setForStandInAlbum:, nonatomic) bool isForStandInAlbum;
@property (setter=ph_setPhotoCollection:, nonatomic, retain) PHCollection *ph_photoCollection;
@property (nonatomic, retain) <PLAssetContainer> *photoCollection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController<PUStackedAlbumControllerTransition> *toViewController;

- (void).cxx_destruct;
- (id)_disableToken;
- (id)_interactiveTransitionLayout;
- (id)_newInteractiveTransitionViewAnimatorForLayout:(id)arg1 collectionView:(id)arg2;
- (id)_newTransitionLayoutWithStackedAlbumLayout:(id)arg1 otherLayout:(id)arg2 forPush:(bool)arg3;
- (id)_photoPinchGestureRecognizer;
- (id)_popTransitionInitialVisibleStackedAssetIndexPaths:(id)arg1;
- (void)_setDisableToken:(id)arg1;
- (void)_setExpanding:(bool)arg1;
- (void)_setInteractiveTransitionLayout:(id)arg1;
- (void)_setPhotoPinchGestureRecognizer:(id)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setTransitionViewAnimator:(id)arg1;
- (id)_transitionLayout;
- (id)_transitionViewAnimator;
- (void)animatePopTransition;
- (void)animatePushTransition;
- (void)collectionViewLayout:(id)arg1 willSupplyLayoutAttributes:(id)arg2;
- (bool)collectionViewLayoutShouldProvideCustomAnimations:(id)arg1;
- (void)completeInteractiveOperation:(long long)arg1 finished:(bool)arg2;
- (id)delegate;
- (id)init;
- (struct CGPoint { double x1; double x2; })interactionCenter;
- (bool)isExpanding;
- (bool)isForFolder;
- (bool)isForStandInAlbum;
- (id)ph_photoCollection;
- (void)ph_setPhotoCollection:(id)arg1;
- (id)photoCollection;
- (void)setDelegate:(id)arg1;
- (void)setForFolder:(bool)arg1;
- (void)setForStandInAlbum:(bool)arg1;
- (void)setInteractionCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhotoCollection:(id)arg1;
- (void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 isExpanding:(bool)arg2;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2;
- (void)transitionViewAnimatorDidUpdate:(id)arg1;
- (void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1;

@end