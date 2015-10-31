/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling> {
    MFModernAtomIconView *_accessoryIconView;
    UIActivityIndicatorView *_activityIndicator;
    MFModernAtomBackgroundView *_background;
    MFModernAtomIconView *_badgeIconView;
    UIView *_baselineView;
    UIView *_compositingView;
    unsigned int _disabledPresentationOptions;
    UIColor *_effectiveTintColor;
    BOOL _isPrimaryAddressAtom;
    UILabel *_label;
    unsigned int _presentationOptions;
    float _scalingFactor;
    BOOL _selected;
    BOOL _separatorHidden;
    BOOL _separatorIsLeftAligned;
    UIFont *_titleFont;
    UIView *_titleLabelFillView;
}

@property (nonatomic, readonly) MFModernAtomIconView *accessoryIconView;
@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, readonly) MFModernAtomBackgroundView *backgroundView;
@property (nonatomic, readonly) MFModernAtomIconView *badgeIconView;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property (nonatomic, readonly) unsigned int effectivePresentationOptions;
@property (nonatomic, readonly) UIColor *effectiveTintColor;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesVIPIndicator;
@property (nonatomic) BOOL isPrimaryAddressAtom;
@property (nonatomic) unsigned int presentationOptions;
@property (nonatomic) float scale;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property (nonatomic) BOOL separatorHidden;
@property (nonatomic) BOOL separatorIsLeftAligned;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)_SMSTintColor;
+ (id)_badgeImagesForPresentationOptions:(unsigned int)arg1 iconOrder:(const unsigned int*)arg2 orderingLength:(unsigned int)arg3 tintColor:(id)arg4 large:(BOOL)arg5 variant:(int)arg6;
+ (id)_defaultLabelAttributes;
+ (id)_defaultLabelAttributesWithFont:(id)arg1;
+ (id)_defaultTintColor;
+ (id)_failureTintColor;
+ (struct CGPoint { float x1; float x2; })defaultBaselinePoint;
+ (id)defaultFont;
+ (float)defaultHeight;
+ (float)horizontalPadding;
+ (BOOL)presentationOptions:(unsigned int*)arg1 encodedIntoAddress:(id)arg2;
+ (id)primaryAtomFont;

- (void)_invalidatePresentationOptions;
- (float)_leftInset;
- (float)_leftPadding;
- (int)_preferredIconVariant;
- (float)_rightInset;
- (float)_rightPadding;
- (void)_setEffectiveTintColor:(id)arg1;
- (void)_setPresentationOption:(unsigned int)arg1 enabled:(BOOL)arg2;
- (void)_updateActivityIndicator;
- (void)_updateCompositingFilters;
- (void)_updateFontIfNecessary;
- (id)accessoryIconView;
- (id)activityIndicator;
- (void)appendPresentationOption:(unsigned int)arg1;
- (id)backgroundView;
- (id)badgeIconView;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (void)clearPresentationOption:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (unsigned int)effectivePresentationOptions;
- (id)effectiveTintColor;
- (BOOL)hidesVIPIndicator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 presentationOptions:(unsigned int)arg2 separatorStyle:(int)arg3;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isPrimaryAddressAtom;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (float)preferredWidth;
- (float)preferredWidthWithSizeConstraints:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)presentationOptions;
- (float)scale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (BOOL)separatorHidden;
- (BOOL)separatorIsLeftAligned;
- (int)separatorStyle;
- (void)setHidesVIPIndicator:(BOOL)arg1;
- (void)setIsPrimaryAddressAtom:(BOOL)arg1;
- (void)setPresentationOptions:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned int)arg3;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)setSeparatorIsLeftAligned:(BOOL)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)viewForBaselineLayout;

@end
