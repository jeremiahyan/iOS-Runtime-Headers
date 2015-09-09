/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexBufferLayoutDescriptor : NSObject <NSCopying> {
    unsigned int _instanceStepRate;
    unsigned int _stepFunction;
    unsigned int _stride;
}

@property (nonatomic) unsigned int stepFunction;
@property (nonatomic) unsigned int stepRate;
@property (nonatomic) unsigned int stride;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setStepFunction:(unsigned int)arg1;
- (void)setStepRate:(unsigned int)arg1;
- (void)setStride:(unsigned int)arg1;
- (unsigned int)stepFunction;
- (unsigned int)stepRate;
- (unsigned int)stride;

@end
