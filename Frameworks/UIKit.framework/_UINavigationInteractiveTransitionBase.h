/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {
    BOOL __completesTransitionOnEnd;
    int __interactionState;
    UIViewController *__parent;
    BOOL __stoppedTransitionWasCancelled;
    BOOL __transitionWasStopped;
    BOOL __useAugmentedShouldPopDecisionProcedure;
    float _accelerations;
    _UINavigationParallaxTransition *_animationController;
    float _averageAcceleration;
    float _averageVelocity;
    <_UINavigationInteractiveTransitionBaseDelegate> *_delegate;
    CADisplayLink *_displayLink;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIView *_gestureRecognizerView;
    BOOL _inSpringAnimation;
    float _previousAcceleration;
    float _previousDisplacement;
    double _previousTimeStamp;
    float _previousVelocity;
    unsigned int _sampleCount;
    BOOL _shouldReverseTranslation;
    double _skipTimeStamp;
    BOOL _springAnimationIsPending;
    float _timestamps;
    float _totalDistance;
    float _velocities;
}

@property (setter=_setCompletesTransitionOnEnd:, nonatomic) BOOL _completesTransitionOnEnd;
@property (setter=_setInteractionState:, nonatomic) int _interactionState;
@property (setter=_setParent:, nonatomic) UIViewController *_parent;
@property (setter=_setStoppedTransitionWasCancelled:, nonatomic) BOOL _stoppedTransitionWasCancelled;
@property (setter=_setTransitionWasStopped:, nonatomic) BOOL _transitionWasStopped;
@property (setter=_setUseAugmentedShouldPopDecisionProcedure:, nonatomic) BOOL _useAugmentedShouldPopDecisionProcedure;
@property (nonatomic, retain) _UINavigationParallaxTransition *animationController;
@property (nonatomic) float averageAcceleration;
@property (nonatomic) float averageVelocity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UINavigationInteractiveTransitionBaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inSpringAnimation;
@property (getter=_navigationGesture, nonatomic, readonly) UIGestureRecognizer *navigationGesture;
@property (nonatomic) float previousAcceleration;
@property (nonatomic) float previousDisplacement;
@property (nonatomic) double previousTimeStamp;
@property (nonatomic) float previousVelocity;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) BOOL shouldReverseTranslation;
@property (nonatomic) double skipTimeStamp;
@property (nonatomic) BOOL springAnimationIsPending;
@property (readonly) Class superclass;
@property (nonatomic) float totalDistance;

- (void).cxx_destruct;
- (void)_completeStoppedInteractiveTransition;
- (BOOL)_completesTransitionOnEnd;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (int)_interactionState;
- (id)_navigationGesture;
- (id)_parent;
- (void)_resetInteractionController;
- (void)_setCompletesTransitionOnEnd:(BOOL)arg1;
- (void)_setInteractionState:(int)arg1;
- (void)_setParent:(id)arg1;
- (void)_setStoppedTransitionWasCancelled:(BOOL)arg1;
- (void)_setTransitionWasStopped:(BOOL)arg1;
- (void)_setUseAugmentedShouldPopDecisionProcedure:(BOOL)arg1;
- (void)_stopInteractiveTransition;
- (BOOL)_stoppedTransitionWasCancelled;
- (BOOL)_transitionWasStopped;
- (float)_translationCoefficient;
- (void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3;
- (BOOL)_useAugmentedShouldPopDecisionProcedure;
- (id)animationController;
- (float)averageAcceleration;
- (float)averageVelocity;
- (void)cancelInteractiveTransition;
- (void)dealloc;
- (id)delegate;
- (void)finishInteractiveTransition;
- (id)gestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizerView;
- (void)handleNavigationTransition:(id)arg1;
- (BOOL)inSpringAnimation;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (BOOL)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float*)arg3;
- (float)previousAcceleration;
- (float)previousDisplacement;
- (double)previousTimeStamp;
- (float)previousVelocity;
- (unsigned int)sampleCount;
- (void)setAnimationController:(id)arg1;
- (void)setAverageAcceleration:(float)arg1;
- (void)setAverageVelocity:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setInSpringAnimation:(BOOL)arg1;
- (void)setNotInteractiveTransition;
- (void)setPreviousAcceleration:(float)arg1;
- (void)setPreviousDisplacement:(float)arg1;
- (void)setPreviousTimeStamp:(double)arg1;
- (void)setPreviousVelocity:(float)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setShouldReverseTranslation:(BOOL)arg1;
- (void)setSkipTimeStamp:(double)arg1;
- (void)setSpringAnimationIsPending:(BOOL)arg1;
- (void)setTotalDistance:(float)arg1;
- (BOOL)shouldReverseTranslation;
- (double)skipTimeStamp;
- (BOOL)springAnimationIsPending;
- (void)startInteractiveTransition;
- (void)startInteractiveTransition:(id)arg1;
- (float)totalDistance;

@end
