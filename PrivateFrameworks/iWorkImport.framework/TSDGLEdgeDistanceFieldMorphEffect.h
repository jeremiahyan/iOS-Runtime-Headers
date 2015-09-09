/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    BOOL _didSetupTextureAdjustment;
    BOOL _didTeardown;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _incomingTextBounds;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _incomingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo *_incomingTextureInfo;
    BOOL _isTextStyleIdenticalExceptSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _outgoingTextBounds;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _outgoingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo *_outgoingTextureInfo;
    TSDGLShader *_shader;
    struct { 
        float skew; 
        float skewOffset; 
        float scale; 
    } _textureAdjustment;
}

@property (nonatomic, readonly) TSDGLTextureInfo *incomingTextureInfo;
@property (nonatomic) BOOL isTextStyleIdenticalExceptSize;
@property (nonatomic, readonly) TSDGLTextureInfo *outgoingTextureInfo;
@property (nonatomic, readonly) TSDGLShader *shader;

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (id)incomingTextureInfo;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 GLState:(id)arg3 motionBlur:(BOOL)arg4 motionBlurIgnoreTextureOpacity:(BOOL)arg5;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize { float x1; float x2; })arg2 outgoingTextBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outgoingColor:(struct { float x1; float x2; float x3; float x4; })arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize { float x1; float x2; })arg6 incomingTextBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg7 incomingColor:(struct { float x1; float x2; float x3; float x4; })arg8 GLState:(id)arg9 motionBlur:(BOOL)arg10 motionBlurIgnoreTextureOpacity:(BOOL)arg11;
- (BOOL)isTextStyleIdenticalExceptSize;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (id)outgoingTextureInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_affineTransformWithTextureAdjustment:(struct { float x1; float x2; float x3; })arg1 textureSize:(struct CGSize { float x1; float x2; })arg2;
- (float)p_errorFromApplyingTextureAdjustment:(struct { float x1; float x2; float x3; })arg1 toOutgoingScanlineCenters:(struct CGPoint { float x1; float x2; }*)arg2 outgoingScanlineZeroes:(struct CGPoint { float x1; float x2; }*)arg3 incomingScanlineCenters:(struct CGPoint { float x1; float x2; }*)arg4 incomingScanlineZeroes:(struct CGPoint { float x1; float x2; }*)arg5 samples:(unsigned int)arg6;
- (float)p_errorFromApplyingTextureAdjustment:(struct { float x1; float x2; float x3; })arg1 toOutgoingValue:(float)arg2 incomingValue:(float)arg3 sample:(unsigned int)arg4 sampleCount:(unsigned int)arg5;
- (BOOL)p_fillScanlineCenters:(struct CGPoint { float x1; float x2; }*)arg1 scanlineMinMaxZeroes:(struct CGPoint { float x1; float x2; }*)arg2 samples:(unsigned int)arg3 fromTexture:(unsigned int)arg4 textureSize:(struct CGSize { float x1; float x2; })arg5;
- (void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1;
- (void)setupIfNecessary;
- (void)setupShaderWithMorphPercent:(float)arg1 MVPMatrix:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 generateTextureMatrices:(BOOL)arg3;
- (void)setupShaderWithMorphPercent:(float)arg1 MVPMatrix:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 outgoingTextureMatrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 incomingTextureMatrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4;
- (id)shader;
- (void)teardown;
- (struct { float x1; float x2; float x3; })textureMatchingTextureAdjustment;

@end
