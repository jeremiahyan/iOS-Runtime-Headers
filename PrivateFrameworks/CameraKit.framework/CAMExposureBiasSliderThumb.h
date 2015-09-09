/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExposureBiasSliderThumb : UIView {
    float _normalizedExposureValue;
}

@property (nonatomic, readonly) float maxRadius;
@property (nonatomic) float normalizedExposureValue;

- (float)_interpolatedValueWithMin:(float)arg1 mid:(float)arg2 max:(float)arg3;
- (float)_sunRadius;
- (float)_sunRayLength;
- (float)_sunRaySpacing;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)maxRadius;
- (float)normalizedExposureValue;
- (void)setNormalizedExposureValue:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
