/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {
    float _horizontalPriority;
    struct CGSize { 
        float width; 
        float height; 
    } _targetSize;
    float _verticalPriority;
}

@property (nonatomic, readonly) float horizontalPriority;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } targetSize;
@property (nonatomic, readonly) float verticalPriority;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (float)horizontalPriority;
- (id)initWithTargetSize:(struct CGSize { float x1; float x2; })arg1 horizontalPriority:(float)arg2 verticalPriority:(float)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTargetInfo:(id)arg1;
- (struct CGSize { float x1; float x2; })targetSize;
- (float)verticalPriority;

@end
