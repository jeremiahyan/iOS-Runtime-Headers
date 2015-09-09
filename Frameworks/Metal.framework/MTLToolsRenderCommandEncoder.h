/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)addSplitHandler:(id /* block */)arg1;
- (void)drawIndexedPrimitives:(unsigned int)arg1 argumentBuffer:(id)arg2 argumentBufferOffset:(unsigned int)arg3 indexType:(unsigned int)arg4 indexBuffer:(id)arg5 indexBufferOffset:(unsigned int)arg6;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6;
- (void)drawPrimitives:(unsigned int)arg1 argumentBuffer:(id)arg2 offset:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setCullMode:(unsigned int)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setDepthStencilState:(id)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned int*)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setFragmentBytes:(const void*)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setFragmentSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setFrontFacingWinding:(unsigned int)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setRenderPipelineState:(id)arg1;
- (void)setScissorRect:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setTriangleFillMode:(unsigned int)arg1;
- (void)setVertexBuffer:(id)arg1 offset:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexBufferOffset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBuffers:(const id*)arg1 offsets:(const unsigned int*)arg2 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setVertexBytes:(const void*)arg1 length:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned int)arg4;
- (void)setVertexSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setVertexSamplerStates:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexTextures:(const id*)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setVisibilityResultMode:(unsigned int)arg1 offset:(unsigned int)arg2;

@end
