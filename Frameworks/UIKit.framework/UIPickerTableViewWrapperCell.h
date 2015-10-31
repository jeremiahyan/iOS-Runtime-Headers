/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    struct CGSize { 
        float width; 
        float height; 
    } _wrappedViewSize;
}

@property (nonatomic, retain) UIView *wrappedView;

- (void).cxx_destruct;
- (id)_anyDateLabel;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (id)wrappedView;

@end
