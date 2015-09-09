/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomAction : NSObject {
    NSString *_name;
    SEL _selector;
    id _weakTarget;
}

@property (getter=_image, setter=_setImage:, nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)dealloc;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)name;
- (SEL)selector;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityCustomActionIdentifier;
- (BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_image;
- (void)_setImage:(id)arg1;
- (id)description;

@end