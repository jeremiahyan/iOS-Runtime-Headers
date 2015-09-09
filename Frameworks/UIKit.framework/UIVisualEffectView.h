/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIVisualEffectView : UIView <NSSecureCoding> {
    _UIVisualEffectContentView *_contentView;
    UIVisualEffect *_effect;
    struct { 
        unsigned int hasHadAlphaAnimated : 1; 
        unsigned int suppressReportingEmptyContentView : 1; 
    } _effectViewFlags;
    NSString *_groupName;
    UIView *_maskView;
}

@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;

+ (BOOL)supportsSecureCoding;

- (void)_applyGroupNameToSubviews;
- (void)_commonInit;
- (void)_configureForCurrentEffect;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (void)_createContentViewIfNecessary;
- (id)_groupName;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setEffect:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (id)_whatsWrongWithThisEffect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)contentView;
- (void)dealloc;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)maskView;
- (void)setContentView:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)viewDidMoveToSuperview;

@end
