/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationTuningView : UIView {
    RadioStation *_station;
    UITapGestureRecognizer *_tapGestureRecognizer;
    RUStationTuningSlider *_tuningSlider;
    float _tuningSliderMaskDrawnWidth;
    UIImageView *_tuningSliderMaskView;
    UILabel *_tuningType1Label;
    UILabel *_tuningType2Label;
    UILabel *_tuningType3Label;
}

@property (nonatomic, retain) RadioStation *station;

+ (id)_tuningTypeLabelFont;
+ (float)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_maskImageForSliderTrack;
- (void)_tapRecognizedAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStation:(id)arg1;
- (id)station;

@end
