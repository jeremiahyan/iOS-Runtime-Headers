/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceResizeHandleView : UIView {
    UIColor *_baseColor;
    EKDayOccurrenceView *_occurrenceView;
    float _radius;
}

@property (nonatomic, retain) UIColor *baseColor;
@property (nonatomic, readonly) EKDayOccurrenceView *occurrenceView;
@property (nonatomic) float radius;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_circleRect;
- (id)baseColor;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occurrenceView:(id)arg2;
- (id)occurrenceView;
- (float)radius;
- (void)setBaseColor:(id)arg1;
- (void)setRadius:(float)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
