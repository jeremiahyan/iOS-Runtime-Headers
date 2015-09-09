/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSCNRenderer : NSObject {
    float _backingScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    BOOL _disableInput;
    float _fps;
    int _frames;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _hasRenderedOnce;
    BOOL _isInTransition;
    float _prevBackingScaleFactor;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    float _prevViewAspect;
    struct SKCRenderer { id x1; BOOL x2; BOOL x3; float x4; float x5; id x6; float x7; struct { float x_8_1_1; float x_8_1_2; } x8; struct { struct xglProgram {} *x_9_1_1; struct { struct { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_9_1_2; unsigned int x_9_1_3; union _GLKMatrix4 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; float x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; float x_1_3_10; float x_1_3_11; float x_1_3_12; float x_1_3_13; float x_1_3_14; float x_1_3_15; float x_1_3_16; } x_4_2_1; float x_4_2_2[16]; } x_9_1_4; unsigned int x_9_1_5; unsigned int x_9_1_6; unsigned int x_9_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_9_1_8; int x_9_1_9; struct { float x_10_2_1; float x_10_2_2; } x_9_1_10; struct { unsigned int x_11_2_1; unsigned int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; struct { float x_5_3_1; float x_5_3_2; } x_11_2_5; BOOL x_11_2_6; } x_9_1_11; } x9; struct { struct xglProgram {} *x_10_1_1; struct { struct { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_10_1_2; unsigned int x_10_1_3; union _GLKMatrix4 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; float x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; float x_1_3_10; float x_1_3_11; float x_1_3_12; float x_1_3_13; float x_1_3_14; float x_1_3_15; float x_1_3_16; } x_4_2_1; float x_4_2_2[16]; } x_10_1_4; unsigned int x_10_1_5; unsigned int x_10_1_6; unsigned int x_10_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_10_1_8; int x_10_1_9; struct { float x_10_2_1; float x_10_2_2; } x_10_1_10; struct { unsigned int x_11_2_1; unsigned int x_11_2_2; unsigned int x_11_2_3; unsigned int x_11_2_4; struct { float x_5_3_1; float x_5_3_2; } x_11_2_5; BOOL x_11_2_6; } x_10_1_11; } x10; struct stack<PKRect, std::__1::deque<PKRect, std::__1::allocator<PKRect> > > { struct deque<PKRect, std::__1::allocator<PKRect> > { struct __split_buffer<PKRect *, std::__1::allocator<PKRect *> > { struct { /* ? */ } **x_1_3_1; struct { /* ? */ } **x_1_3_2; struct { /* ? */ } **x_1_3_3; struct __compressed_pair<PKRect **, std::__1::allocator<PKRect *> > { struct { /* ? */ } **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<PKRect> > { unsigned long x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct stack<_GLKMatrix4, std::__1::deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4> > > { struct deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4> > { struct __split_buffer<_GLKMatrix4 *, std::__1::allocator<_GLKMatrix4 *> > { union { /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_1_4_1; void*x_1_4_2; unsigned long x_1_4_3; void*x_1_4_4; void*x_1_4_5; void*x_1_4_6; void*x_1_4_7; const int x_1_4_8; void*x_1_4_9; void*x_1_4_10; } **x_1_3_1; union { void*x_2_4_1; void*x_2_4_2; unsigned long x_2_4_3; void*x_2_4_4; void*x_2_4_5; void*x_2_4_6; void*x_2_4_7; const int x_2_4_8; void*x_2_4_9; void*x_2_4_10; } **x_1_3_2; union { void*x_3_4_1; void*x_3_4_2; unsigned long x_3_4_3; void*x_3_4_4; void*x_3_4_5; void*x_3_4_6; void*x_3_4_7; const int x_3_4_8; void*x_3_4_9; void*x_3_4_10; } **x_1_3_3; struct __compressed_pair<_GLKMatrix4 **, std::__1::allocator<_GLKMatrix4 *> > { union { void*x_1_5_1; void*x_1_5_2; unsigned long x_1_5_3; void*x_1_5_4; void*x_1_5_5; void*x_1_5_6; void*x_1_5_7; const int x_1_5_8; void*x_1_5_9; void*x_1_5_10; } **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<_GLKMatrix4> > { unsigned long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct stack<SKCTextureAttachment, std::__1::deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment> > > { struct deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment> > { struct __split_buffer<SKCTextureAttachment *, std::__1::allocator<SKCTextureAttachment *> > { struct { /* ? */ } **x_1_3_1; struct { /* ? */ } **x_1_3_2; struct { /* ? */ } **x_1_3_3; struct __compressed_pair<SKCTextureAttachment **, std::__1::allocator<SKCTextureAttachment *> > { struct { /* ? */ } **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned int x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<SKCTextureAttachment> > { unsigned long x_3_3_1; } x_1_2_3; } x_13_1_1; } x13; struct { float x_14_1_1; float x_14_1_2; } x14; struct { float x_15_1_1; float x_15_1_2; } x15; struct SKCRenderPassNew { struct xglProgram {} *x_16_1_1; union _GLKMatrix4 { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; float x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; float x_1_3_10; float x_1_3_11; float x_1_3_12; float x_1_3_13; float x_1_3_14; float x_1_3_15; float x_1_3_16; } x_2_2_1; float x_2_2_2[16]; } x_16_1_2; unsigned int x_16_1_3; unsigned long x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; int x_16_1_7; struct { struct { float x_1_3_1; float x_1_3_2; } x_8_2_1; struct { float x_2_3_1; float x_2_3_2; } x_8_2_2; } x_16_1_8; struct SKCSprite {} *x_16_1_9; unsigned int x_16_1_10; unsigned int x_16_1_11; bool x_16_1_12; bool x_16_1_13; bool x_16_1_14; bool x_16_1_15; bool x_16_1_16; bool x_16_1_17; bool x_16_1_18; bool x_16_1_19; bool x_16_1_20; struct { unsigned int x_21_2_1; unsigned int x_21_2_2; unsigned int x_21_2_3; unsigned int x_21_2_4; struct { float x_5_3_1; float x_5_3_2; } x_21_2_5; BOOL x_21_2_6; } x_16_1_21; bool x_16_1_22; bool x_16_1_23; bool x_16_1_24; bool x_16_1_25; bool x_16_1_26; bool x_16_1_27; bool x_16_1_28; bool x_16_1_29; bool x_16_1_30; bool x_16_1_31; bool x_16_1_32; bool x_16_1_33; id x_16_1_34; float x_16_1_35; unsigned int x_16_1_36; struct { float x_37_2_1; float x_37_2_2; float x_37_2_3; float x_37_2_4; } x_16_1_37; id x_16_1_38; void*x_16_1_39; void*x_16_1_40; struct { float x_41_2_1; float x_41_2_2; } x_16_1_41; struct { float x_42_2_1; float x_42_2_2; } x_16_1_42; } x16; struct { struct { float x_1_2_1; float x_1_2_2; } x_17_1_1; struct { float x_2_2_1; float x_2_2_2; } x_17_1_2; } x17; struct { float x_18_1_1; float x_18_1_2; } x18; float x19; unsigned int x20; bool x21; char *x22; id x23; unsigned int x24; int x25; int x26; float x27; float x28; int x29; float x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; float x37; float x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; double x43; float x44; unsigned int x45; int x46; id x47; id x48; bool x49; bool x50; bool x51; bool x52; struct list<SKCRenderPassNew, std::__1::allocator<SKCRenderPassNew> > { struct __list_node_base<SKCRenderPassNew, void *> { struct __list_node<SKCRenderPassNew, void *> {} *x_1_2_1; struct __list_node<SKCRenderPassNew, void *> {} *x_1_2_2; } x_53_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderPassNew, void *> > > { unsigned long x_2_2_1; } x_53_1_2; } x53; unsigned int x54; unsigned int x55; unsigned short *x56; struct { struct { union _GLKVector4 { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; struct { float x_2_4_1; float x_2_4_2; float x_2_4_3; float x_2_4_4; } x_1_3_2; struct { float x_3_4_1; float x_3_4_2; float x_3_4_3; float x_3_4_4; } x_1_3_3; float x_1_3_4[4]; } x_1_2_1; unsigned char x_1_2_2[4]; float x_1_2_3[3]; } x_57_1_1[4]; } x57[10500]; unsigned int x58; unsigned int x59; unsigned int x60; unsigned int x61; struct xglProgram {} *x62; struct xglProgram {} *x63; struct xglProgram {} *x64; struct xglProgram {} *x65; struct xglProgram {} *x66; struct xglProgram {} *x67; id x68; id x69; unsigned int x70; unsigned int x71; struct list<SKCSprite *, std::__1::allocator<SKCSprite *> > { struct __list_node_base<SKCSprite *, void *> { struct __list_node<SKCSprite *, void *> {} *x_1_2_1; struct __list_node<SKCSprite *, void *> {} *x_1_2_2; } x_72_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCSprite *, void *> > > { unsigned long x_2_2_1; } x_72_1_2; } x72; struct vector<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > { struct SpriteRenderInfo {} **x_73_1_1; struct SpriteRenderInfo {} **x_73_1_2; struct __compressed_pair<const SKCRenderer::SpriteRenderInfo **, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > { struct SpriteRenderInfo {} **x_3_2_1; } x_73_1_3; } x73; struct vector<SKCRenderer::SpriteRenderInfo, std::__1::allocator<SKCRenderer::SpriteRenderInfo> > { struct SpriteRenderInfo {} *x_74_1_1; struct SpriteRenderInfo {} *x_74_1_2; struct __compressed_pair<SKCRenderer::SpriteRenderInfo *, std::__1::allocator<SKCRenderer::SpriteRenderInfo> > { struct SpriteRenderInfo {} *x_3_2_1; } x_74_1_3; } x74; struct SKRenderQuadPool { struct vector<SKRenderQuad *, std::__1::allocator<SKRenderQuad *> > { struct { /* ? */ } **x_1_2_1; struct { /* ? */ } **x_1_2_2; struct __compressed_pair<SKRenderQuad **, std::__1::allocator<SKRenderQuad *> > { struct { /* ? */ } **x_3_3_1; } x_1_2_3; } x_75_1_1; unsigned int x_75_1_2; unsigned int x_75_1_3; struct { /* ? */ } *x_75_1_4; unsigned int x_75_1_5; } x75; struct map<const SKCSprite *, PKPoint, std::__1::less<const SKCSprite *>, std::__1::allocator<std::__1::pair<const SKCSprite *const, PKPoint> > > { struct __tree<std::__1::__value_type<const SKCSprite *, PKPoint>, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, PKPoint>, std::__1::less<const SKCSprite *>, true>, std::__1::allocator<std::__1::__value_type<const SKCSprite *, PKPoint> > > { struct __tree_node<std::__1::__value_type<const SKCSprite *, PKPoint>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const SKCSprite *, PKPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, PKPoint>, std::__1::less<const SKCSprite *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_76_1_1; } x76; struct list<const SKCSprite *, std::__1::allocator<const SKCSprite *> > { struct __list_node_base<const SKCSprite *, void *> { struct __list_node<const SKCSprite *, void *> {} *x_1_2_1; struct __list_node<const SKCSprite *, void *> {} *x_1_2_2; } x_77_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<const SKCSprite *, void *> > > { unsigned long x_2_2_1; } x_77_1_2; } x77; struct map<const SKCSprite *, ShadowInfo *, std::__1::less<const SKCSprite *>, std::__1::allocator<std::__1::pair<const SKCSprite *const, ShadowInfo *> > > { struct __tree<std::__1::__value_type<const SKCSprite *, ShadowInfo *>, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, ShadowInfo *>, std::__1::less<const SKCSprite *>, true>, std::__1::allocator<std::__1::__value_type<const SKCSprite *, ShadowInfo *> > > { struct __tree_node<std::__1::__value_type<const SKCSprite *, ShadowInfo *>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const SKCSprite *, ShadowInfo *>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, ShadowInfo *>, std::__1::less<const SKCSprite *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_78_1_1; } x78; struct map<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> >, std::__1::less<const SKCSprite *>, std::__1::allocator<std::__1::pair<const SKCSprite *const, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > > > > { struct __tree<std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > >, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > >, std::__1::less<const SKCSprite *>, true>, std::__1::allocator<std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > > > > { struct __tree_node<std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const SKCSprite *, std::__1::__value_type<const SKCSprite *, std::__1::list<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *> > >, std::__1::less<const SKCSprite *>, true> > { unsigned long x_3_3_1; } x_1_2_3; } x_79_1_1; } x79; id x80; bool x81; bool x82; bool x83; bool x84; bool x85; bool x86; bool x87; bool x88; bool x89; bool x90; bool x91; bool x92; bool x93; } *_renderer;
    SKScene *_scene;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    SKLabelNode *_statsLabel;
    double _timeBeginFrameCount;
    double _timePreviousUpdate;
    BOOL showsFPS;
    BOOL showsNodeCount;
}

@property (nonatomic) float backingScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (nonatomic, retain) SKScene *scene;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsFPS;
@property (nonatomic) BOOL showsFields;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsPhysics;

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_fps;
- (void)_initialize;
- (id)_scene;
- (BOOL)_shouldCenterStats;
- (void)_showAllStats;
- (BOOL)_showsCPUStats;
- (BOOL)_showsCoreAnimationFPS;
- (BOOL)_showsCulledNodesInNodeCount;
- (BOOL)_showsGPUStats;
- (BOOL)_showsOutlineInterior;
- (BOOL)_showsSpriteBounds;
- (BOOL)_showsTotalAreaRendered;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (float)backingScaleFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (BOOL)ignoresSiblingOrder;
- (id)init;
- (struct CGSize { float x1; float x2; })pixelSize;
- (void)render:(BOOL)arg1;
- (id)scene;
- (void)setBackingScaleFactor:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIgnoresSiblingOrder:(BOOL)arg1;
- (void)setScene:(id)arg1;
- (void)setShowsDrawCount:(BOOL)arg1;
- (void)setShowsFPS:(BOOL)arg1;
- (void)setShowsFields:(BOOL)arg1;
- (void)setShowsNodeCount:(BOOL)arg1;
- (void)setShowsPhysics:(BOOL)arg1;
- (void)setShowsQuadCount:(BOOL)arg1;
- (void)setShowsSpriteBounds:(BOOL)arg1;
- (void)set_shouldCenterStats:(BOOL)arg1;
- (void)set_showsCPUStats:(BOOL)arg1;
- (void)set_showsCoreAnimationFPS:(BOOL)arg1;
- (void)set_showsCulledNodesInNodeCount:(BOOL)arg1;
- (void)set_showsGPUStats:(BOOL)arg1;
- (void)set_showsOutlineInterior:(BOOL)arg1;
- (void)set_showsSpriteBounds:(BOOL)arg1;
- (void)set_showsTotalAreaRendered:(BOOL)arg1;
- (void)setupContext;
- (BOOL)showsDrawCount;
- (BOOL)showsFPS;
- (BOOL)showsFields;
- (BOOL)showsNodeCount;
- (BOOL)showsPhysics;
- (BOOL)showsQuadCount;
- (BOOL)showsSpriteBounds;
- (void)updateAtTime:(double)arg1;

@end
