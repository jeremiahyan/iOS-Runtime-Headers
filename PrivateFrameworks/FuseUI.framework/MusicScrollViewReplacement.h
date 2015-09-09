/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicScrollViewReplacement : UIView <NSCoding, _UIScrollToTopView> {
    struct CGSize { 
        float width; 
        float height; 
    } _accumulatedOffset;
    float _accuracy;
    struct CGSize { 
        float width; 
        float height; 
    } _adjustedDecelerationFactor;
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedDecelerationTarget;
    id _animation;
    NSArray *_automaticContentConstraints;
    NSISVariable *_contentHeightVariable;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    double _contentOffsetAnimationDuration;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    NSISVariable *_contentWidthVariable;
    struct CGSize { 
        float width; 
        float height; 
    } _decelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    id _delegate;
    MusicScrollViewReplacement *_draggingChildScrollView;
    int _fastScrollCount;
    double _fastScrollEndTime;
    float _fastScrollMultiplier;
    float _fastScrollStartMultiplier;
    UIImageView *_horizontalScrollIndicator;
    double _horizontalVelocity;
    int _keyboardDismissMode;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    UISwipeGestureRecognizer *_lowFidelitySwipeGestureRecognizers;
    float _maximumZoomScale;
    float _minimumZoomScale;
    struct CGPoint { 
        float x; 
        float y; 
    } _pageDecelerationTarget;
    float _pagingFriction;
    float _pagingSpringPull;
    id _pan;
    struct CGPoint { 
        float x; 
        float y; 
    } _parentAdjustment;
    id _pinch;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    struct CGPoint { 
        float x; 
        float y; 
    } _rotationCenterPoint;
    float _savedKeyboardAdjustmentDelta;
    id _scrollHeartbeat;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _scrollIndicatorInset;
    id _scrollNotificationViews;
    id _scrollTestParameters;
    struct { 
        unsigned int tracking : 1; 
        unsigned int dragging : 1; 
        unsigned int verticalBounceEnabled : 1; 
        unsigned int horizontalBounceEnabled : 1; 
        unsigned int verticalBouncing : 1; 
        unsigned int horizontalBouncing : 1; 
        unsigned int bouncesZoom : 1; 
        unsigned int zoomBouncing : 1; 
        unsigned int alwaysBounceHorizontal : 1; 
        unsigned int alwaysBounceVertical : 1; 
        unsigned int preventScrollingContainer : 1; 
        unsigned int canCancelContentTouches : 1; 
        unsigned int delaysContentTouches : 1; 
        unsigned int programmaticScrollDisabled : 1; 
        unsigned int scrollDisabled : 1; 
        unsigned int zoomDisabled : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int showsHorizontalScrollIndicator : 1; 
        unsigned int showsVerticalScrollIndicator : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int inZoom : 1; 
        unsigned int hideIndicatorsInZoom : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int pagingEnabled : 1; 
        unsigned int pagingLeft : 1; 
        unsigned int pagingRight : 1; 
        unsigned int pagingUp : 1; 
        unsigned int pagingDown : 1; 
        unsigned int lastHorizontalDirection : 1; 
        unsigned int lastVerticalDirection : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int singleFingerPan : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int automaticContentOffsetAdjustmentDisabled : 1; 
        unsigned int skipStartOffsetAdjustment : 1; 
        unsigned int delegateScrollViewDidScroll : 1; 
        unsigned int delegateScrollViewDidZoom : 1; 
        unsigned int delegateContentSizeForZoomScale : 1; 
        unsigned int preserveCenterDuringRotation : 1; 
        unsigned int delaysTrackingWhileDecelerating : 1; 
        unsigned int pinnedZoomMin : 1; 
        unsigned int pinnedXMin : 1; 
        unsigned int pinnedYMin : 1; 
        unsigned int pinnedXMax : 1; 
        unsigned int pinnedYMax : 1; 
        unsigned int skipLinkChecks : 1; 
        unsigned int staysCenteredDuringPinch : 1; 
        unsigned int wasDelayingPinchForSystemGestures : 1; 
        unsigned int systemGesturesRecognitionPossible : 1; 
        unsigned int disableContentOffsetRounding : 1; 
        unsigned int alwaysDisableContentOffsetRounding : 1; 
        unsigned int adjustedDecelerationTargetX : 1; 
        unsigned int adjustedDecelerationTargetY : 1; 
        unsigned int hasScrolled : 1; 
        unsigned int wantsConstrainedContentSize : 1; 
        unsigned int constrainedContentSizeNeedsUpdate : 1; 
        unsigned int updateInsetBottom : 1; 
        unsigned int beingDraggedByChildScrollView : 1; 
        unsigned int adjustsTargetsOnContentOffsetChanges : 1; 
        unsigned int forwardsTouchesUpResponderChain : 1; 
        unsigned int firstResponderKeyboardAvoidanceDisabled : 1; 
        unsigned int interruptingDeceleration : 1; 
    } _scrollViewFlags;
    id *_shadows;
    double _startOffsetX;
    double _startOffsetY;
    _UIStaticScrollBar *_staticScrollBar;
    id _swipe;
    id _touchDelayGestureRecognizer;
    int _touchLevel;
    BOOL _useContentDimensionVariablesForConstraintLowering;
    UIImageView *_verticalScrollIndicator;
    double _verticalVelocity;
    struct CADoublePoint { 
        double x; 
        double y; 
    } _zoomAnchorPoint;
    id _zoomAnimation;
    unsigned int _zoomAnimationCount;
    UIView *_zoomView;
}

@property (setter=_setAutomaticContentConstraints:, nonatomic, copy) NSArray *_automaticContentConstraints;
@property (nonatomic, readonly, retain) NSISVariable *_contentHeightVariable;
@property (nonatomic, readonly, retain) NSISVariable *_contentWidthVariable;
@property (nonatomic, readonly) _UIStaticScrollBar *_staticScrollBar;
@property (setter=_setUseContentDimensionVariablesForConstraintLowering:, nonatomic) BOOL _useContentDimensionVariablesForConstraintLowering;
@property (setter=_setWantsConstrainedContentSize:, nonatomic) BOOL _wantsConstrainedContentSize;
@property (getter=_adjustsTargetsOnContentOffsetChanges, setter=_setAdjustsTargetsOnContentOffsetChanges:, nonatomic) BOOL adjustsTargetsOnContentOffsetChanges;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (nonatomic) BOOL alwaysBounceVertical;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL bouncesZoom;
@property (nonatomic) BOOL canCancelContentTouches;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property (nonatomic) struct CGPoint { float x1; float x2; } contentOffset;
@property (nonatomic) struct CGSize { float x1; float x2; } contentSize;
@property (getter=isDecelerating, nonatomic, readonly) BOOL decelerating;
@property (nonatomic) float decelerationRate;
@property (nonatomic) BOOL delaysContentTouches;
@property (nonatomic) <UIScrollViewDelegate> *delegate;
@property (getter=isDirectionalLockEnabled, nonatomic) BOOL directionalLockEnabled;
@property (getter=isDragging, nonatomic, readonly) BOOL dragging;
@property (getter=_isFirstResponderKeyboardAvoidanceEnabled, setter=_setFirstResponderKeyboardAvoidanceEnabled:, nonatomic) BOOL firstResponderKeyboardAvoidanceEnabled;
@property (getter=_forwardsTouchesUpResponderChain, setter=_setForwardsTouchesUpResponderChain:, nonatomic) BOOL forwardsTouchesUpResponderChain;
@property (nonatomic) int indicatorStyle;
@property (getter=_isAnimatingScroll, nonatomic, readonly) BOOL isAnimatingScroll;
@property (getter=_isAnimatingZoom, nonatomic, readonly) BOOL isAnimatingZoom;
@property (getter=_isHorizontalBouncing, nonatomic, readonly) BOOL isHorizontalBouncing;
@property (getter=_isVerticalBouncing, nonatomic, readonly) BOOL isVerticalBouncing;
@property (nonatomic) int keyboardDismissMode;
@property (nonatomic) float maximumZoomScale;
@property (nonatomic) float minimumZoomScale;
@property (getter=isPagingEnabled, nonatomic) BOOL pagingEnabled;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (getter=isProgrammaticScrollEnabled, nonatomic) BOOL programmaticScrollEnabled;
@property (getter=isScrollEnabled, nonatomic) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollIndicatorInsets;
@property (nonatomic, retain) id scrollTestParameters;
@property (getter=_isScrollingToTop, nonatomic, readonly) BOOL scrollingToTop;
@property (nonatomic) BOOL scrollsToTop;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (getter=isTracking, nonatomic, readonly) BOOL tracking;
@property (getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:, nonatomic) struct CADoublePoint { double x1; double x2; } zoomAnchorPoint;
@property (getter=isZoomBouncing, nonatomic, readonly) BOOL zoomBouncing;
@property (nonatomic) float zoomScale;
@property (getter=isZooming, nonatomic, readonly) BOOL zooming;

+ (id)_implicitAnimationCulprits;
+ (SEL)_panGestureAction;
+ (SEL)_pinchGestureAction;
+ (void)_scrollWithNSTimer:(BOOL)arg1;

- (unsigned int)_abuttedEdgesForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)_abuttedPagingEdges;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (void)_addScrollNotificationView:(id)arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)arg1 withOffset:(float)arg2;
- (void)_adjustContentOffsetIfNecessary;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2;
- (void)_adjustShadowsIfNecessary;
- (void)_adjustShadowsIfNecessaryForOffset:(float)arg1;
- (void)_adjustStartOffsetForGrabbedBouncingScrollView;
- (float)_adjustedHorizontalOffsetPinnedToScrollableBounds:(float)arg1;
- (float)_adjustedVerticalOffsetPinnedToScrollableBounds:(float)arg1;
- (BOOL)_adjustsTargetsOnContentOffsetChanges;
- (struct CGPoint { float x1; float x2; })_animatedOriginalOffset;
- (struct CGPoint { float x1; float x2; })_animatedTargetOffset;
- (void)_applyConstrainedContentSizeIfNecessary;
- (void)_attemptToDragParent:(id)arg1 forNewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)_automaticContentConstraints;
- (id)_backgroundShadowForSlideAnimation;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (BOOL)_canCancelContentTouches:(id)arg1;
- (BOOL)_canScrollX;
- (BOOL)_canScrollY;
- (void)_centerContentIfNecessary;
- (void)_clearContentOffsetAnimation;
- (void)_clearContentOffsetAnimation:(id)arg1;
- (void)_clearParentAdjustment;
- (id)_contentHeightVariable;
- (double)_contentOffsetAnimationDuration;
- (struct CGPoint { float x1; float x2; })_contentOffsetForLowFidelityScrollInDirection:(struct CGPoint { float x1; float x2; })arg1 duration:(double*)arg2;
- (BOOL)_contentOffsetRoundingEnabled;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentScrollInset;
- (id)_contentWidthVariable;
- (void)_createGestureRecognizersForCurrentTouchLevel;
- (unsigned int)_currentlyAbuttedContentEdges;
- (float)_defaultPagingFriction;
- (void)_delegateScrollViewAnimationEnded;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
- (void)_endPanNormal:(BOOL)arg1;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_evaluateWantsConstrainedContentSize;
- (void)_flashScrollIndicatorsPersistingPreviousFlashes:(BOOL)arg1;
- (void)_forceDelegateScrollViewDidZoom:(BOOL)arg1;
- (BOOL)_forwardsToParentScroller;
- (BOOL)_forwardsTouchesUpResponderChain;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8;
- (id)_getDelegateZoomView;
- (BOOL)_getPagingDecelerationOffset:(struct CADoublePoint { double x1; double x2; }*)arg1 forTimeInterval:(double)arg2;
- (void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7;
- (void)_handleLowFidelitySwipe:(id)arg1;
- (void)_handleSwipe:(id)arg1;
- (void)_hideScrollIndicators;
- (double)_horizontalVelocity;
- (BOOL)_ignoreLinkedOnChecks;
- (void)_incrementForScrollTest;
- (BOOL)_isAnimatingScroll;
- (BOOL)_isAnimatingZoom;
- (BOOL)_isAutomaticContentOffsetAdjustmentEnabled;
- (BOOL)_isAutoscrolling;
- (BOOL)_isBouncing;
- (BOOL)_isFirstResponderKeyboardAvoidanceEnabled;
- (BOOL)_isHorizontalBouncing;
- (BOOL)_isInterruptingDeceleration;
- (BOOL)_isRectFullyVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isScrollingToTop;
- (BOOL)_isVerticalBouncing;
- (void)_layoutStaticScrollBar;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_lowFidelityScrollInDirection:(struct CGPoint { float x1; float x2; })arg1;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_moveContentSubview:(id)arg1 toBack:(BOOL)arg2;
- (void)_notifyDidScroll;
- (struct CGSize { float x1; float x2; })_nsis_contentSize;
- (struct UIOffset { float x1; float x2; })_offsetForCenterOfPossibleZoomView:(id)arg1 withIncomingBoundsSize:(struct CGSize { float x1; float x2; })arg2;
- (float)_offsetForRubberBandOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4;
- (struct CGPoint { float x1; float x2; })_originalOffsetForAnimatedSetContentOffset;
- (BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_pageDecelerationTarget;
- (BOOL)_pagingDown;
- (float)_pagingFriction;
- (BOOL)_pagingLeft;
- (BOOL)_pagingRight;
- (BOOL)_pagingUp;
- (id)_panGestureRecognizer;
- (id)_parentScrollView;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4;
- (void)_pinContentOffsetToClosestPageBoundary;
- (void)_popTrackingRunLoopMode;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(float)arg1 verticalVelocity:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForPageContainingView:(id)arg1;
- (void)_reenableImplicitAnimationsAfterScrollTest;
- (void)_registerAsScrollToTopViewIfPossible;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)_removeScrollNotificationView:(id)arg1;
- (BOOL)_resetScrollingForGestureEvent:(id)arg1;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })_rubberBandContentOffsetForOffset:(struct CADoublePoint { double x1; double x2; })arg1 outsideX:(BOOL*)arg2 outsideY:(BOOL*)arg3;
- (float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(BOOL*)arg5;
- (void)_rubberBandToOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_runLoopModePopped:(id)arg1;
- (float)_scrollHysteresis;
- (id)_scrollTestExtraResults;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewDidEndZooming;
- (id)_scrollViewTouchDelayGesture;
- (void)_scrollViewWillBeginDragging;
- (void)_scrollViewWillBeginZooming;
- (BOOL)_scrollViewWillEndDraggingWithDeceleration:(BOOL)arg1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_setAbsoluteContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_setAdjustsTargetsOnContentOffsetChanges:(BOOL)arg1;
- (void)_setAlwaysBounceVertical:(BOOL)arg1;
- (void)_setAutomaticContentConstraints:(id)arg1;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)arg1;
- (void)_setAutoscrolling:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(BOOL)arg4;
- (void)_setContentOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setContentOffsetPinned:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)_setContentOffsetRoundingEnabled:(BOOL)arg1;
- (void)_setContentScrollInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setFirstResponderKeyboardAvoidanceEnabled:(BOOL)arg1;
- (void)_setForwardsTouchesUpResponderChain:(BOOL)arg1;
- (void)_setIgnoreLinkedOnChecks:(BOOL)arg1;
- (void)_setPagingFriction:(float)arg1;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)_setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)_setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)_setTransfersScrollToContainer:(BOOL)arg1;
- (void)_setUseContentDimensionVariablesForConstraintLowering:(BOOL)arg1;
- (void)_setUsesStaticScrollBar:(BOOL)arg1;
- (void)_setWantsConstrainedContentSize:(BOOL)arg1;
- (void)_setZoomAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (float)_shadowHeightOffset;
- (BOOL)_shouldScrollOnGestureRecognizerFailed;
- (BOOL)_shouldTrackImmediatelyWhileDecelerating;
- (BOOL)_showsBackgroundShadow;
- (void)_skipNextStartOffsetAdjustment;
- (void)_smoothScrollDisplayLink:(id)arg1;
- (void)_smoothScrollIntoBounds;
- (void)_smoothScrollTimer:(id)arg1;
- (void)_smoothScrollWithUpdateTime:(double)arg1;
- (BOOL)_startBeingDraggedByChild:(id)arg1;
- (void)_startDraggingParent:(id)arg1;
- (void)_startTimer:(BOOL)arg1;
- (id)_staticScrollBar;
- (void)_staticScrollBar:(id)arg1 didScrollInDirection:(struct CGPoint { float x1; float x2; })arg2;
- (void)_staticScrollBarScrollAnimationEnded;
- (BOOL)_staysCenteredDuringPinch;
- (BOOL)_stopBeingDraggedByChild:(id)arg1;
- (void)_stopDraggingParent:(id)arg1;
- (void)_stopScrollDecelerationNotify:(BOOL)arg1;
- (void)_stopScrollingAndZoomingAnimations;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)arg1 tramplingDragFlags:(BOOL)arg2;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2;
- (void)_stopScrollingNotify:(BOOL)arg1 pin:(BOOL)arg2 tramplingDragFlags:(BOOL)arg3;
- (BOOL)_supportsContentDimensionVariables;
- (void)_suppressImplicitAnimationsForScrollTest;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (double)_touchDelayForScrollDetection;
- (struct CGPoint { float x1; float x2; })_touchPositionForTouches:(id)arg1;
- (BOOL)_transfersScrollToContainer;
- (void)_updateContentFitDisableScrolling;
- (void)_updateForChangedScrollRelatedInsets;
- (void)_updatePagingGesture;
- (void)_updatePanGesture;
- (void)_updatePanGestureConfiguration;
- (void)_updatePinchGesture;
- (void)_updatePinchGestureForState:(int)arg1;
- (void)_updateScrollAnimationForChangedTargetOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateScrollGestureRecognizersEnabled;
- (void)_updateUsesStaticScrollBar;
- (void)_updateZoomGestureRecognizersEnabled;
- (BOOL)_useContentDimensionVariablesForConstraintLowering;
- (BOOL)_usesLowFidelityPanning;
- (double)_verticalVelocity;
- (BOOL)_viewIsInsideNavigationController;
- (BOOL)_wantsConstrainedContentSize;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_willMoveToWindow:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })_zoomAnchorPoint;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (float)_zoomRubberBandScaleForScale:(float)arg1;
- (float)_zoomScaleForRubberBandScale:(float)arg1;
- (float)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3;
- (void)_zoomToCenter:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (BOOL)allowsMultipleFingers;
- (BOOL)alwaysBounceHorizontal;
- (BOOL)alwaysBounceVertical;
- (void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3;
- (struct CGPoint { float x1; float x2; })autoscrollContentOffset;
- (BOOL)bounces;
- (BOOL)bouncesHorizontally;
- (BOOL)bouncesVertically;
- (BOOL)bouncesZoom;
- (BOOL)canCancelContentTouches;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (float)decelerationRate;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)delayed:(id)arg1;
- (BOOL)delaysContentTouches;
- (id)delegate;
- (id)description;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flashScrollIndicators;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (float)horizontalScrollDecelerationFactor;
- (int)indicatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDecelerating;
- (BOOL)isDirectionalLockEnabled;
- (BOOL)isDragging;
- (BOOL)isPagingEnabled;
- (BOOL)isProgrammaticScrollEnabled;
- (BOOL)isScrollEnabled;
- (BOOL)isTracking;
- (BOOL)isZoomBouncing;
- (BOOL)isZoomEnabled;
- (BOOL)isZooming;
- (float)keyboardBottomInsetAdjustmentDelta;
- (int)keyboardDismissMode;
- (void)layoutSubviews;
- (float)maximumZoomScale;
- (float)minimumZoomScale;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)panGestureRecognizer;
- (id)pinchGestureRecognizer;
- (BOOL)preservesCenterDuringRotation;
- (void)removeFromSuperview;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)scrollTestParameters;
- (BOOL)scrollsToTop;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (void)setAlwaysBounceHorizontal:(BOOL)arg1;
- (void)setAlwaysBounceVertical:(BOOL)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounces:(BOOL)arg1;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (void)setBouncesVertically:(BOOL)arg1;
- (void)setBouncesZoom:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCanCancelContentTouches:(BOOL)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDecelerationRate:(float)arg1;
- (void)setDelaysContentTouches:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHorizontalScrollDecelerationFactor:(float)arg1;
- (void)setIndicatorStyle:(int)arg1;
- (void)setKeyboardDismissMode:(int)arg1;
- (void)setMaximumZoomScale:(float)arg1;
- (void)setMinimumZoomScale:(float)arg1;
- (void)setPagingEnabled:(BOOL)arg1;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (void)setProgrammaticScrollEnabled:(BOOL)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setScrollTestParameters:(id)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (void)setUpdateInsetBottomDuringKeyboardDismiss:(BOOL)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setVerticalScrollDecelerationFactor:(float)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (void)setZoomScale:(float)arg1;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint { double x1; double x2; })arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (BOOL)showsHorizontalScrollIndicator;
- (BOOL)showsVerticalScrollIndicator;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (BOOL)updateInsetBottomDuringKeyboardDismiss;
- (float)verticalScrollDecelerationFactor;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (float)zoomScale;
- (void)zoomToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;

@end
