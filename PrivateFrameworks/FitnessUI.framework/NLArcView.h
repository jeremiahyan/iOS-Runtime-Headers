/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcView : UIView {
    NLArcMaskLayer *_arcMaskLayer;
    NLArcLayer *_baseRing;
    CALayer *_coloredDotIndicatorLayer;
    CAGradientLayer *_gradientLayer;
    CALayer *_iconLayer;
    float _indicatorPercentage;
    float _radius;
    BOOL _shouldDrawIndicator;
    BOOL _shouldShowIcon;
    CALayer *_whiteDotIndicatorLayer;
}

@property (nonatomic) float arcStart;
@property (nonatomic) float indicatorPercentage;
@property (nonatomic) float lineWidth;
@property (nonatomic) float radius;
@property (nonatomic) BOOL shouldDrawIndicator;
@property (nonatomic) BOOL shouldShowIcon;

- (void).cxx_destruct;
- (id)_coloredDotIndicatorLayer;
- (void)_positionIndicator;
- (void)_showIndicatorIfNecessary;
- (id)_whiteDotIndicatorLayer;
- (void)animateToCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 lineWidth:(float)arg3 duration:(float)arg4;
- (float)arcStart;
- (float)indicatorPercentage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)lineWidth;
- (float)percentageFull;
- (float)radius;
- (void)setArcStart:(float)arg1;
- (void)setBaseColor:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIndicatorPercentage:(float)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setPercentageFull:(float)arg1;
- (void)setPercentageFull:(float)arg1 animated:(BOOL)arg2;
- (void)setPercentageFull:(float)arg1 animatedWithDuration:(float)arg2;
- (void)setPercentageFull:(float)arg1 animatedWithDuration:(float)arg2 completion:(id /* block */)arg3;
- (void)setPercentageUnfull:(float)arg1 animatedWithDuration:(float)arg2;
- (void)setRadius:(float)arg1;
- (void)setRadius:(float)arg1 animated:(BOOL)arg2;
- (void)setShouldDrawIndicator:(BOOL)arg1;
- (void)setShouldShowIcon:(BOOL)arg1;
- (BOOL)shouldDrawIndicator;
- (BOOL)shouldShowIcon;

@end
