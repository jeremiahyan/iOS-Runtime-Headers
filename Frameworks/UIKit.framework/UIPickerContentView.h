/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerContentView : UIView {
    UIImageView *_checkView;
    struct { 
        unsigned int checked : 1; 
        unsigned int highlighted : 1; 
    } _pickerContentViewFlags;
    UILabel *_titleLabel;
}

@property (getter=isChecked, nonatomic) BOOL checked;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (float)_checkmarkOffset;

- (BOOL)_isSelectable;
- (id)checkedColor;
- (void)dealloc;
- (BOOL)isChecked;
- (BOOL)isHighlighted;
- (float)labelWidthForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)titleLabel;

@end
