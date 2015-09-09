/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface LineGraphView : UIView {
    UIImage *_lineImage;
    BOOL _showingTintedLine;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2;
- (void)setGraphImageSet:(id)arg1;
- (void)setSelectedLineImage:(id)arg1;
- (void)setShowingSelectedLine:(BOOL)arg1;

@end
