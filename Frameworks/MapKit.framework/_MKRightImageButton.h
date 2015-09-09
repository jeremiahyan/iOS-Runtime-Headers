/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKRightImageButton : UIControl {
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleLabel;
- (id)viewForBaselineLayout;

@end
