/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKOverlayView : UIView {
    BOOL _deferWasMovedToSuperviewUntilMoveToWindow;
    BOOL _isObserving;
    AKMainEventHandler *_mainEventHandler;
    UIScrollView *_observedScrollView;
    AKPageController *_pageController;
    BOOL _scrollViewIsInLiveMagnify;
}

@property BOOL deferWasMovedToSuperviewUntilMoveToWindow;
@property BOOL isObserving;
@property AKMainEventHandler *mainEventHandler;
@property (retain) UIScrollView *observedScrollView;
@property AKPageController *pageController;
@property BOOL scrollViewIsInLiveMagnify;

- (void).cxx_destruct;
- (void)_postScrollViewNotification;
- (void)_scrollViewDidEndAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_setupObservation;
- (void)_teardownObservation;
- (void)_updateLayersUsingScrollView;
- (void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg1;
- (void)_wasMovedToNewSuperview;
- (void)_willEndLiveMagnify:(id)arg1;
- (void)_willRemoveFromOldSuperview;
- (void)_willStartLiveMagnify:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (BOOL)deferWasMovedToSuperviewUntilMoveToWindow;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithPageController:(id)arg1;
- (BOOL)isObserving;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)mainEventHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedScrollView;
- (id)pageController;
- (BOOL)scrollViewIsInLiveMagnify;
- (void)setDeferWasMovedToSuperviewUntilMoveToWindow:(BOOL)arg1;
- (void)setIsObserving:(BOOL)arg1;
- (void)setMainEventHandler:(id)arg1;
- (void)setObservedScrollView:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setScrollViewIsInLiveMagnify:(BOOL)arg1;
- (void)superTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)superTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLayers;
- (void)willMoveToSuperview:(id)arg1;

@end
