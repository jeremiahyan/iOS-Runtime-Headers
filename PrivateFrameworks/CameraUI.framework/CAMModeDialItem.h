/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeDialItem : UIView {
    CAShapeLayer *__scalableTextLayer;
    UIFont *_font;
    BOOL _selected;
    NSString *_title;
}

@property (nonatomic, readonly) NSAttributedString *_attributedTitle;
@property (nonatomic, readonly) CAShapeLayer *_scalableTextLayer;
@property (nonatomic, retain) UIFont *font;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_attributedTitle;
- (void)_commonCAMModeDialItemInitialization;
- (struct CGPath { }*)_pathForAttributedString:(id)arg1;
- (id)_scalableTextLayer;
- (struct CGColor { }*)_textColor;
- (void)_updateScalableTextPathFromAttributedTitle;
- (id)font;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)title;

@end
