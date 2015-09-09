/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertAction : NSObject <NSCopying> {
    UIAlertController *__alertController;
    NSString *__descriptiveText;
    <_UIAlertActionRepresenting> *__representer;
    BOOL _checked;
    UIViewController *_contentViewController;
    BOOL _enabled;
    id /* block */ _handler;
    UIImage *_image;
    UIColor *_imageTintColor;
    BOOL _isDefault;
    id /* block */ _shouldDismissHandler;
    id /* block */ _simpleHandler;
    int _style;
    NSString *_title;
    int _titleTextAlignment;
    UIColor *_titleTextColor;
}

@property (setter=_setAlertController:, nonatomic) UIAlertController *_alertController;
@property (setter=_setDescriptiveText:, nonatomic, copy) NSString *_descriptiveText;
@property (setter=_setIsDefault:) BOOL _isDefault;
@property (setter=_setRepresenter:) <_UIAlertActionRepresenting> *_representer;
@property (getter=_contentViewController, setter=_setContentViewController:, nonatomic, retain) UIViewController *contentViewController;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ shouldDismissHandler;
@property (nonatomic, copy) id /* block */ simpleHandler;
@property (nonatomic) int style;
@property (nonatomic, copy) NSString *title;

+ (id)_actionWithContentViewController:(id)arg1 style:(int)arg2;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(int)arg4 handler:(id /* block */)arg5 shouldDismissHandler:(id /* block */)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(int)arg3 handler:(id /* block */)arg4 shouldDismissHandler:(id /* block */)arg5;
+ (id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(id /* block */)arg3;

- (id)_alertController;
- (id)_contentViewController;
- (id)_descriptiveText;
- (void)_didAddContentViewController;
- (id)_imageTintColor;
- (BOOL)_isChecked;
- (BOOL)_isDefault;
- (id)_representer;
- (void)_setAlertController:(id)arg1;
- (void)_setChecked:(BOOL)arg1;
- (void)_setContentViewController:(id)arg1;
- (void)_setDescriptiveText:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setIsDefault:(BOOL)arg1;
- (void)_setRepresenter:(id)arg1;
- (void)_setTitleTextAlignment:(int)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (int)_titleTextAlignment;
- (id)_titleTextColor;
- (void)_willAddContentViewController;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)handler;
- (id)image;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldDismissHandler:(id /* block */)arg1;
- (void)setSimpleHandler:(id /* block */)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (id /* block */)shouldDismissHandler;
- (id /* block */)simpleHandler;
- (int)style;
- (id)title;

@end
