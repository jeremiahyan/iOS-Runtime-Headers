/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned int depthFailureOperation;
@property (nonatomic) unsigned int depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned int stencilCompareFunction;
@property (nonatomic) unsigned int stencilFailureOperation;
@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*stencilPrivate;
@property (nonatomic) unsigned int writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
