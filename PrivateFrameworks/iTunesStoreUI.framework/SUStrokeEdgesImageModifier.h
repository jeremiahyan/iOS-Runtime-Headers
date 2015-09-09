/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStrokeEdgesImageModifier : SUImageModifier {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    BOOL _fitToImage;
    UIColor *_strokeColor;
    BOOL _strokeCurrentPath;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic) BOOL fitToImage;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) BOOL strokeCurrentPath;

- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (BOOL)fitToImage;
- (BOOL)isEqual:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFitToImage:(BOOL)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeCurrentPath:(BOOL)arg1;
- (id)strokeColor;
- (BOOL)strokeCurrentPath;

@end
