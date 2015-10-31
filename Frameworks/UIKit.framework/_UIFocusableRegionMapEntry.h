/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry {
    BOOL _focusCandidate;
    <_UIFocusRegion> *_focusableRegion;
    BOOL _isFocusGuide;
}

@property (getter=isFocusCandidate, nonatomic) BOOL focusCandidate;
@property (nonatomic) <_UIFocusRegion> *focusableRegion;
@property (nonatomic) BOOL isFocusGuide;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 isFinal:(BOOL)arg3;
- (id)focusableRegion;
- (BOOL)isFocusCandidate;
- (BOOL)isFocusGuide;
- (void)setFocusCandidate:(BOOL)arg1;
- (void)setFocusableRegion:(id)arg1;
- (void)setIsFocusGuide:(BOOL)arg1;
- (id)visualRepresentationColor;

@end
