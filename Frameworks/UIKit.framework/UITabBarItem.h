/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItem : UIBarItem {
    SEL _action;
    id _appearanceStorage;
    NSString *_badgeValue;
    int _barMetrics;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    int _imageStyle;
    UIImage *_selectedImage;
    UIImage *_selectedTemplateImage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
    int _tag;
    id _target;
    UIImage *_templateImage;
    UIColor *_tintColor;
    NSString *_title;
    UIImage *_unselectedImage;
    UIView *_view;
}

@property (setter=_setBarMetrics:, nonatomic) int _barMetrics;
@property (setter=_setImageStyle:, nonatomic) int _imageStyle;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL animatedBadge;
@property (nonatomic, copy) NSString *badgeValue;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic) id target;
@property (nonatomic, retain) UIImage *unselectedImage;
@property (nonatomic, retain) UIView *view;
@property (nonatomic) BOOL viewIsCustom;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_appearanceBlindViewClasses;

- (int)_barMetrics;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2 withTint:(BOOL)arg3;
- (int)_imageStyle;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTitle;
- (BOOL)_isSelected;
- (void)_setBarMetrics:(int)arg1;
- (void)_setImageStyle:(int)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned int)arg3;
- (id)_tintColor;
- (void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(struct UIOffset { float x1; float x2; }*)arg3;
- (void)_updateToMatchCurrentState;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(BOOL)arg1;
- (SEL)action;
- (BOOL)animatedBadge;
- (id)badgeValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (BOOL)isEnabled;
- (BOOL)isSystemItem;
- (id)nextResponder;
- (id)selectedImage;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(BOOL)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewIsCustom:(BOOL)arg1;
- (int)systemItem;
- (int)tag;
- (id)target;
- (id)title;
- (struct UIOffset { float x1; float x2; })titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)unselectedImage;
- (id)view;
- (BOOL)viewIsCustom;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;

@end
