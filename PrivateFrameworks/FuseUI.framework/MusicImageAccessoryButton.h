/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicImageAccessoryButton : UIButton {
    BOOL _shouldBaselineAlignTrailingAccessoryImage;
    float _tallestFontDescender;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _trailingAccessoryOffset;
}

@property (nonatomic) BOOL shouldBaselineAlignTrailingAccessoryImage;
@property (nonatomic) struct UIOffset { float x1; float x2; } trailingAccessoryOffset;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)music_configureControlWithTextDescriptor:(id)arg1;
- (void)setShouldBaselineAlignTrailingAccessoryImage:(BOOL)arg1;
- (void)setTrailingAccessoryOffset:(struct UIOffset { float x1; float x2; })arg1;
- (BOOL)shouldBaselineAlignTrailingAccessoryImage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIOffset { float x1; float x2; })trailingAccessoryOffset;

@end
