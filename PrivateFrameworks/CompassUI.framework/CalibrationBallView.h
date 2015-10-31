/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@interface CalibrationBallView : UIView {
    float _ballRadius;
    UIView *_ballView;
    float _currentAngle;
    float _trackRadius;
}

@property (nonatomic) float ballRadius;
@property (setter=setAngle:, nonatomic) float currentAngle;
@property (nonatomic) float trackRadius;

- (void).cxx_destruct;
- (float)ballRadius;
- (id)ballView;
- (float)currentAngle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ballRadius:(float)arg2;
- (void)layoutSubviews;
- (void)setAngle:(float)arg1;
- (void)setBallRadius:(float)arg1;
- (void)setTrackRadius:(float)arg1;
- (float)trackRadius;

@end
