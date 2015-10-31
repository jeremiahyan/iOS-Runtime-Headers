/* Generated by RuntimeBrowser.
 */

@protocol SCNRenderContext <NSObject>

@required

- (void)beginFrame:(id)arg1;
- (BOOL)beginRenderPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg1 isFinalTechnique:(BOOL)arg2;
- (float)contentScaleFactor;
- (struct __C3DMeshElement { }*)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(int)arg2 bytesPerIndex:(int)arg3;
- (int)currentFrameIndex;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg1;
- (void)drawRenderElement:(struct __C3DRendererElement { }*)arg1 withPass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; long x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; }*)arg2;
- (void)endFrameWaitingUntilCompleted:(BOOL)arg1;
- (void)endRenderPass;
- (unsigned long)features;
- (BOOL)mapVolatileMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1 verticesCount:(int)arg2;
- (id)newRenderTargetWithDescription:(void *)arg1 size:(void *)arg2; // needs 2 arg types, found 1: struct { unsigned char x1; unsigned char x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned char x7[1]; }*
- (void)popDebugGroup;
- (void)processRendererElement:(struct __C3DRendererElement { }*)arg1;
- (long)profile;
- (void)pushDebugGroup:(NSString *)arg1;
- (void)renderBackground:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; long x7; struct __C3DTextureSampler {} *x8; struct __C3DTransforms {} *x9; float x10; int x11; void *x12; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2;
- (void)renderMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1 meshElement:(struct __C3DMeshElement { }*)arg2 withProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; long x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg3 engineContext:(struct __C3DEngineContext { }*)arg4 transform:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; })arg5 color:(void*)arg6 rasterizerStates:(struct __C3DRasterizerStates { }*)arg7 blendState:(struct __C3DBlendStates { }*)arg8 texture:(struct __C3DImage { }*)arg9 depthBias:(BOOL)arg10;
- (SCNRenderTargetRegistry *)renderTargetRegistry;
- (<SCNResourceManager> *)resourceManager;
- (int)sampleCount;
- (void)setBackgroundColor:(struct C3DColor4 { union { float x_1_1_1[4]; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; } x1; })arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setSampleCount:(int)arg1;
- (void)setShowsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)showsAuthoringEnvironment;
- (void)startProcessingRendererElementsWithEngineIterationContext:(struct { struct __C3DEnginePipeline {} *x1; struct __C3DEngineContext {} *x2; struct __C3DFXPassInstance {} *x3; long *x4; struct __C3DNode {} *x5; bool x6; bool x7; }*)arg1;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; }*)stats;
- (void)stopProcessingRendererElements;
- (id)textureForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; long x7; struct __C3DTextureSampler {} *x8; struct __C3DTransforms {} *x9; float x10; int x11; void *x12; }*)arg1;
- (void)unmapVolatileMesh:(struct __C3DMesh { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __CFArray {} *x2[9]; struct C3DSphere {} *x3; struct __CFArray {} **x4; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 4; int x9; }*)arg1;

@end
