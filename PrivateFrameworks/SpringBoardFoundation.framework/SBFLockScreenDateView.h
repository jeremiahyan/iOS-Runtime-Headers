/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFLockScreenDateView : UIView {
    UIColor *_customSubtitleColor;
    NSString *_customSubtitleText;
    NSDate *_date;
    float _dateAlpha;
    float _dateAlphaPercentage;
    UILabel *_dateLabel;
    float _dateStrength;
    _UILegibilityLabel *_legibilityDateLabel;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilityLabel *_legibilityTimeLabel;
    UIColor *_textColor;
    float _timeAlpha;
    UILabel *_timeLabel;
    float _timeStrength;
    BOOL _useLegibilityLabels;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) float dateAlphaPercentage;
@property (getter=isDateHidden, nonatomic) BOOL dateHidden;
@property (nonatomic) float dateStrength;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) float timeStrength;

+ (float)defaultHeight;

- (void)_addLabels;
- (id)_dateColor;
- (id)_dateFont;
- (id)_dateText;
- (float)_effectiveDateAlpha;
- (void)_layoutDateLabel;
- (void)_layoutTimeLabel;
- (void)_setDateAlpha:(float)arg1;
- (id)_timeFont;
- (void)_updateLabelAlpha;
- (void)_updateLabels;
- (void)_updateLegibilityLabelsWithUpdatedDateString:(BOOL)arg1;
- (void)_useLegibilityLabels:(BOOL)arg1;
- (id)date;
- (float)dateAlphaPercentage;
- (float)dateBaselineOffsetFromOrigin;
- (float)dateStrength;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDateHidden;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setContentAlpha:(float)arg1 withDateVisible:(BOOL)arg2;
- (void)setCustomSubtitleText:(id)arg1 withColor:(id)arg2;
- (void)setDate:(id)arg1;
- (void)setDateAlphaPercentage:(float)arg1;
- (void)setDateHidden:(BOOL)arg1;
- (void)setDateStrength:(float)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeStrength:(float)arg1;
- (id)textColor;
- (float)timeBaselineOffsetFromOrigin;
- (float)timeStrength;
- (void)updateFormat;

@end
