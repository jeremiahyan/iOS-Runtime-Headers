/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {
    float _alphaScale;
    float _arrowAlphaScale;
    VKAnimation *_arrowCrossFadeAnimation;
    VKAnimation *_arrowFadeAnimation;
    struct vector<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> >, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > > { 
        struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__begin_; 
        struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__end_; 
        struct __compressed_pair<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > *, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > > { 
            struct unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > {} *__first_; 
        } __end_cap_; 
    } _arrowLayers;
    struct unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager> > { 
        struct __compressed_pair<vk::RouteLineArrowManager *, std::__1::default_delete<vk::RouteLineArrowManager> > { 
            struct RouteLineArrowManager {} *__first_; 
        } __ptr_; 
    } _arrowManager;
    float _contentScale;
    float _crossfadingDisplayStep;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugLineRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _debugRenderItems;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
            struct FragmentedPool<ggl::Debug::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugShaderSetups;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::BaseMesh> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > > { 
            struct FragmentedPool<ggl::Debug::BaseMesh> {} *__first_; 
        } __ptr_; 
    } _debugUnmatchedRouteLineMeshes;
    VKAnimation *_fadeAnimation;
    BOOL _forceRoutelineUpdate;
    VKStyleManager *_lastQueriedStyleManager;
    struct { 
        double v[4][4]; 
    } _matrix;
    VKTileKeyList *_previousKeysInView;
    NSSet *_previousTilesInView;
    double _previousViewUnitsPerPoint;
    VKRouteLine *_routeLine;
    double _routeLineHalfWidthRealistic;
    struct unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer> > { 
        struct __compressed_pair<vk::RouteLineLayer *, std::__1::default_delete<vk::RouteLineLayer> > { 
            struct RouteLineLayer {} *__first_; 
        } __ptr_; 
    } _routeLineLayer;
    struct unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager> > { 
        struct __compressed_pair<vk::RouteLineManager *, std::__1::default_delete<vk::RouteLineManager> > { 
            struct RouteLineManager {} *__first_; 
        } __ptr_; 
    } _routeLineManager;
    double _routeLineWidthScaleRegular;
    VKPolylineOverlay *_routeOverlay;
    BOOL _selected;
    struct unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> > { 
        struct __hash_table<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> > { 
            struct unique_ptr<std::__1::__hash_node<GEOComposedRouteSection *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<GEOComposedRouteSection *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > > { 
                    struct __hash_node<GEOComposedRouteSection *, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEOComposedRouteSection *, void *> *>, std::__1::allocator<std::__1::__hash_node<GEOComposedRouteSection *, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<GEOComposedRouteSection *, void *> *> { 
                    struct __hash_node<GEOComposedRouteSection *, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<GEOComposedRouteSection *> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<GEOComposedRouteSection *> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _selectedSections;
    BOOL _showArrows;
    BOOL _showTraffic;
    double _simplificationEpsilon;
    int _stencilValue;
    int _styleZ;
    unsigned int _targetDisplayStep;
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> > { 
        struct __compressed_pair<vk::TrafficLayer *, std::__1::default_delete<vk::TrafficLayer> > { 
            struct TrafficLayer {} *__first_; 
        } __ptr_; 
    } _trafficLayer;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > { 
        struct __compressed_pair<vk::TrafficManager *, std::__1::default_delete<vk::TrafficManager> > { 
            struct TrafficManager {} *__first_; 
        } __ptr_; 
    } _trafficManager;
    struct shared_ptr<md::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _trafficStyle;
    struct unordered_map<GEOTransportType, vk::TransportTypeInfo, std::__1::hash<GEOTransportType>, std::__1::equal_to<GEOTransportType>, std::__1::allocator<std::__1::pair<const GEOTransportType, vk::TransportTypeInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::__unordered_map_hasher<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::hash<GEOTransportType>, true>, std::__1::__unordered_map_equal<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::equal_to<GEOTransportType>, true>, std::__1::allocator<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::hash<GEOTransportType>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<GEOTransportType, std::__1::__hash_value_type<GEOTransportType, vk::TransportTypeInfo>, std::__1::equal_to<GEOTransportType>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _transportTypeMap;
    struct shared_ptr<ggl::Tile::ViewUniformData> { 
        struct ViewUniformData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _viewUniforms;
    BOOL _wasInRealisticMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) VKPolylineOverlay *polyline;
@property (nonatomic, retain) VKPolylineOverlay *routeOverlay;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showTraffic;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning;
- (BOOL)_shouldShowTraffic;
- (void)_updateZoomDependentStyleProperties;
- (float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(struct CGSize { float x1; float x2; })arg2;
- (void)dealloc;
- (void)flushPools;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; const out void*x21; void*x22; void*x23; unsigned long x24; int x25; in void*x26; void*x27; void*x28; long x29; float x30; void*x31; int x32; double x33; void*x34; void*x35; void*x36; void*x37; void*x38; long x39; int x40; short x41; void*x42; int x43; BOOL x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; short x51; void*x52; const void*x53; BOOL x54; void*x55; void*x56; void*x57; in int x58; long long x59; void*x60; void*x61; void*x62; void*x63; void*x64; const void*x65; void x66; void*x67; SEL x68; SEL x69; void*x70; out void*x71; void*x72; void*x73; unsigned long x74; int x75; in void*x76; unsigned long x77; void*x78; void*x79; void*x80; const void*x81; void*x82; short x83; void*x84; double x85; SEL x86; SEL x87; void*x88; void*x89; void*x90; SEL x91; SEL x92; double x93; void*x94; float x95; void*x96; void*x97; long x98; void*x99; void*x100; double x101; void*x102; long x103; void*x104; void*x105; void*x106; void*x107; void x108; void*x109; SEL x110; SEL x111; void*x112; out void*x113; void*x114; void*x115; unsigned long x116; int x117; in void*x118; unsigned long x119; void*x120; void*x121; void*x122; const void*x123; void*x124; void*x125; void*x126; struct  
        struct __compressed_pair<vk::RouteLineLayer *, std::__1::default_delete<vk::RouteLineLayer> > { 
            struct RouteLineLayer { {} x127; void*x128; char *x129; void*x130; void*x131; float x132; int x133; const short x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; }*)arg2 tiles:(id)arg3;
- (void)gglLayoutWithContext:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; int x19; void*x20; double x21; void*x22; char *x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void x35; void*x36; out void*x37; int x38; void*x39; double x40; void*x41; char *x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void x54; void*x55; out void*x56; int x57; void*x58; double x59; void*x60; char *x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void x73; void*x74; out void*x75; int x76; void*x77; double x78; void*x79; char *x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void x92; void*x93; out void*x94; int x95; void*x96; double x97; void*x98; char *x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void x111; void*x112; out void*x113; int x114; void*x115; double x116; void*x117; char *x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void x130; void*x131; out void*x132; int x133; void*x134; double x135; void*x136; char *x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void x149; void*x150; out void*x151; int x152; void*x153; double x154; void*x155; char *x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void x168; void*x169; out void*x170; int x171; void*x172; double x173; void*x174; char *x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; BOOL x187; void*x188; out void*x189; in void*x190; short x191; void*x192; void*x193; void*x194; void*x195; void*x196; out void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void x204; void*x205; out void*x206; int x207; void*x208; double x209; void*x210; char *x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void x223; void*x224; out void*x225; int x226; void*x227; double x228; void*x229; char *x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void x242; void*x243; out void*x244; int x245; void*x246; double x247; void*x248; char *x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; in void*x263; short x264; void*x265; int x266; void*x267; void*x268; void*x269; in void*x270; void*x271; void*x272; double x273; void*x274; void*x275; void*x276; long x277; void*x278; out void*x279; in void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; int x295; void*x296; in void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; int x312; void*x313; in void*x314; void*x315; void*x316; void x317; void*x318; out void*x319; int x320; void*x321; double x322; void*x323; char *x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void x336; void*x337; out void*x338; int x339; void*x340; double x341; void*x342; char *x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; void*x354; void x355; void*x356; out void*x357; int x358; void*x359; double x360; void*x361; char *x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; long x374; void*x375; out void*x376; in void*x377; void x378; void*x379; void*x380; void*x381; BOOL x382; void*x383; void*x384; void*x385; out void*x386; const void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; long x394; void*x395; SEL x396; void*x397; SEL x398; void*x399; bool x400; void*x401; void*x402; void*x403; float x404; void*x405; float x406; void*x407; void*x408; void*x409; const void*x410; unsigned long x411; void*x412; out void*x413; void*x414; void*x415; double x416; void*x417; unsigned int x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; short x430; void*x431; void*x432; void*x433; double x434; void*x435; SEL x436; void*x437; SEL x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; void*x445; SEL x446; void*x447; SEL x448; void*x449; void*x450; void*x451; long x452; void*x453; long x454; void*x455; out void*x456; BOOL x457; void*x458; void*x459; void*x460; void*x461; void*x462; out void*x463; const void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; long x471; void*x472; SEL x473; void*x474; SEL x475; void*x476; bool x477; void*x478; void*x479; void*x480; float x481; void*x482; float x483; void*x484; void*x485; void*x486; const void*x487; unsigned long x488; void*x489; out void*x490; void*x491; void*x492; double x493; void*x494; unsigned int x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; struct x511; void*x512; void*x513; void*x514; short x515; void*x516; void*x517; void*x518; const void*x519; void*x520; void*x521; BOOL x522; void*x523; void*x524; void*x525; void*x526; void*x527; bool x528; void*x529; void*x530; void*x531; float x532; void*x533; float x534; void*x535; void*x536; void*x537; const void*x538; unsigned long x539; void*x540; out void*x541; void*x542; void*x543; double x544; void*x545; unsigned int x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; void*x554; void*x555; struct x556; void*x557; }*)arg2 tiles:(id)arg3 layer:(unsigned char)arg4;
- (id)initWithOverlay:(id)arg1;
- (void)layoutDebugUnmatchedRouteLine:(id)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; struct RenderQueue {} *x3; struct ClearItem {} *x4; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_5_1_1; struct RenderItem {} **x_5_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_5_1_3; } x5; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_6_1_1; struct Texture2DLoadItem {} *x_6_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_7_1_1; struct BufferLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_8_1_1; unsigned int x_8_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_8_1_3; } x8; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_9_1_3; } x9; id x10; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; int x19; void*x20; in void*x21; void*x22; void*x23; void x24; void*x25; out void*x26; int x27; void*x28; double x29; void*x30; char *x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void x45; void*x46; out void*x47; int x48; void*x49; double x50; void*x51; char *x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void x66; void*x67; out void*x68; int x69; void*x70; double x71; void*x72; char *x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void x87; void*x88; out void*x89; int x90; void*x91; double x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void x108; void*x109; out void*x110; int x111; void*x112; double x113; void*x114; char *x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; out void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void x136; void*x137; out void*x138; int x139; void*x140; double x141; void*x142; char *x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; int x157; void*x158; in void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void x176; void*x177; out void*x178; int x179; void*x180; double x181; void*x182; char *x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; double x197; void*x198; out void*x199; void*x200; void*x201; unsigned int x202/* : ? */; void*x203; long x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void x222; void*x223; out void*x224; int x225; void*x226; double x227; void*x228; char *x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; BOOL x243; void*x244; void*x245; void*x246; void*x247; void*x248; const void*x249; void*x250; void*x251; char *x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void x266; void*x267; out void*x268; int x269; void*x270; double x271; void*x272; char *x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void x287; void*x288; out void*x289; int x290; void*x291; double x292; void*x293; char *x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void x308; void*x309; out void*x310; int x311; void*x312; double x313; void*x314; char *x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void x329; void*x330; out void*x331; int x332; void*x333; double x334; void*x335; char *x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void x350; void*x351; out void*x352; int x353; void*x354; double x355; void*x356; char *x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void x371; void*x372; out void*x373; int x374; void*x375; double x376; void*x377; char *x378; void*x379; void*x380; void*x381; void*x382; void*x383; short x384; void*x385; void*x386; void*x387; const void*x388; void*x389; void*x390; BOOL x391; void*x392; void*x393; void*x394; void*x395; void*x396; double x397; void*x398; void*x399; void*x400; long long x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; out void*x413; SEL x414; void*x415; SEL x416; void*x417; float x418; void*x419; void*x420; void*x421; short x422; void*x423; void*x424; void*x425; void*x426; void*x427; short x428; void*x429; void*x430; void*x431; void*x432; void*x433; const void*x434; void*x435; void*x436; double x437; void*x438; void*x439; void*x440; void*x441; void*x442; void*x443; void*x444; const void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; long x452; void*x453; SEL x454; void*x455; SEL x456; void*x457; unsigned long long x458; void*x459; void*x460; void*x461; void*x462; void*x463; const void*x464; void*x465; void*x466; unsigned int x467; void*x468; void*x469; void*x470; void*x471; void*x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; short x481; void*x482; void*x483; void*x484; double x485; void*x486; SEL x487; void*x488; SEL x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; SEL x497; void*x498; SEL x499; void*x500; void*x501; void*x502; long x503; void*x504; long x505; void*x506; out void*x507; BOOL x508; void*x509; void*x510; void*x511; void*x512; void*x513; out void*x514; const void*x515; void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; out void*x522; SEL x523; void*x524; SEL x525; void*x526; float x527; void*x528; void*x529; void*x530; short x531; void*x532; void*x533; void*x534; void*x535; void*x536; short x537; void*x538; void*x539; void*x540; void*x541; void*x542; const void*x543; void*x544; void*x545; double x546; void*x547; void*x548; void*x549; void*x550; void*x551; void*x552; void*x553; const void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; long x561; void*x562; SEL x563; void*x564; SEL x565; void*x566; unsigned long long x567; void*x568; void*x569; void*x570; void*x571; void*x572; const void*x573; void*x574; void*x575; unsigned int x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; struct x596; void*x597; void*x598; void*x599; short x600; void*x601; void*x602; void*x603; const void*x604; void*x605; void*x606; BOOL x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; short x617; void*x618; void*x619; void*x620; long x621; void*x622; int x623; void*x624; void*x625; void*x626; void*x627; void*x628; unsigned int x629/* : ? */; void*x630; void*x631; void*x632; float x633; void*x634; float x635; void*x636; void*x637; void*x638; const void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; out void*x646; SEL x647; void*x648; SEL x649; void*x650; float x651; void*x652; void*x653; void*x654; short x655; void*x656; void*x657; void*x658; void*x659; void*x660; short x661; void*x662; void*x663; void*x664; void*x665; void*x666; const void*x667; void*x668; void*x669; double x670; void*x671; void*x672; void*x673; void*x674; void*x675; void*x676; void*x677; const void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; long x685; void*x686; SEL x687; void*x688; SEL x689; void*x690; unsigned long long x691; void*x692; void*x693; void*x694; void*x695; void*x696; const void*x697; void*x698; void*x699; unsigned int x700; void*x701; void*x702; void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; char *x712; void*x713; void*x714; void*x715; void*x716; void*x717; short x718; void*x719; void*x720; void*x721; double x722; void*x723; SEL x724; void*x725; SEL x726; void*x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; SEL x734; void*x735; SEL x736; void*x737; void*x738; void*x739; long x740; void*x741; long x742; void*x743; out void*x744; BOOL x745; void*x746; void*x747; void*x748; void*x749; void*x750; out void*x751; const void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; out void*x759; SEL x760; void*x761; SEL x762; void*x763; float x764; void*x765; void*x766; void*x767; short x768; void*x769; void*x770; void*x771; void*x772; void*x773; short x774; void*x775; void*x776; void*x777; void*x778; void*x779; const void*x780; void*x781; void*x782; double x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; const void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; long x798; void*x799; SEL x800; void*x801; SEL x802; void*x803; unsigned long long x804; void*x805; void*x806; void*x807; void*x808; void*x809; const void*x810; void*x811; void*x812; unsigned int x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; char *x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; struct x835; void*x836; void*x837; void*x838; short x839; void*x840; void*x841; void*x842; const void*x843; void*x844; void*x845; BOOL x846; void*x847; void*x848; void*x849; void*x850; void*x851; float x852; void*x853; void*x854; void*x855; short x856; void*x857; void*x858; void*x859; void*x860; void*x861; short x862; void*x863; void*x864; void*x865; void*x866; void*x867; const void*x868; void*x869; void*x870; double x871; void*x872; void*x873; void*x874; void*x875; void*x876; void*x877; void*x878; const void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; long x886; void*x887; SEL x888; void*x889; SEL x890; void*x891; unsigned long long x892; void*x893; void*x894; void*x895; void*x896; void*x897; const void*x898; void*x899; void*x900; unsigned int x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; void*x909; void*x910; void*x911; void*x912; struct x913; void*x914; }*)arg2;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)polyline;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)prepareDebugLines;
- (void)prepareToDrawWithCanvas:(id)arg1;
- (id)routeOverlay;
- (BOOL)selected;
- (void)setContainerModel:(id)arg1;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setRouteOverlay:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowTraffic:(BOOL)arg1;
- (BOOL)showTraffic;
- (id)styleManager;
- (void)stylesheetDidChange;
- (void)updateRouteLineStencilValue:(int)arg1;

@end
