/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView> {
    CALayer *_backgroundLayer;
    NSArray *_backgroundShapeLayers;
    UIView *_contentView;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_foregroundRingShapeLayers;
    NSArray *_foregroundShapeLayers;
    double _lastAnimationWillFinish;
    CALayer *_maskForegroundLayer;
    CALayer *_maskLayer;
    UIColor *_primaryColor;
    int _priorState;
    BOOL _rotatingRing;
    NSString *_rotationAnimationKey;
    UIColor *_secondaryColor;
    int _state;
    NSMutableArray *_transitionCompletionHandlers;
    unsigned int _transitionIndex;
    BOOL _transitioning;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

- (void)_continueHoldingStateForPathAtIndex:(unsigned int)arg1 withTransitionIndex:(unsigned int)arg2;
- (void)_endRotationAnimation;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)_finishTransitionForIndex:(unsigned int)arg1;
- (void)_hideNonRingShapeLayersWithTransitionIndex:(unsigned int)arg1 withGap:(BOOL)arg2 animated:(BOOL)arg3;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_setProgress:(float)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned int)arg3;
- (void)_showFingerprintWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned int)arg1;
- (void)_startRotationAnimation;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updateRotationAnimationsIfNecessary;
- (struct CGSize { float x1; float x2; })boundsSizeToMatchPointScale:(float)arg1;
- (id)contentView;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pathStateForLayer:(id)arg1;
- (float)pointScaleToMatchBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setContentViewAlpha:(float)arg1 withDuration:(double)arg2;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)setProgress:(float)arg1 withDuration:(double)arg2;
- (void)setSecondaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (int)state;

@end
