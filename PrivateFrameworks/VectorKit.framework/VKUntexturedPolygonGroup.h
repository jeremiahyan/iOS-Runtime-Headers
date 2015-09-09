/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKUntexturedPolygonGroup : VKPolygonGroup {
    NSMutableOrderedSet *_attributeSets;
    NSMutableArray *_buildingDrawStyles;
    NSMutableArray *_flatRoofBuildingDrawStyles;
    struct vector<std::__1::shared_ptr<md::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > { 
        struct shared_ptr<md::StyleQuery> {} *__begin_; 
        struct shared_ptr<md::StyleQuery> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::StyleQuery> *, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > { 
            struct shared_ptr<md::StyleQuery> {} *__first_; 
        } __end_cap_; 
    } _flatRoofStyleQueries;
    struct vector<std::__1::shared_ptr<md::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > { 
        struct shared_ptr<md::StyleQuery> {} *__begin_; 
        struct shared_ptr<md::StyleQuery> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::StyleQuery> *, std::__1::allocator<std::__1::shared_ptr<md::StyleQuery> > > { 
            struct shared_ptr<md::StyleQuery> {} *__first_; 
        } __end_cap_; 
    } _styleQueries;
}

@property (nonatomic, readonly) NSOrderedSet *attributeSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributeSets;
- (id)buildingDrawStylesForPointyRoofs:(BOOL)arg1;
- (BOOL)canAcceptPolygon:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; }*)arg1;
- (void)dealloc;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (id)initWithStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tile:(id)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4;
- (void)updateWithStyleResolutionSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > { struct _retain_ptr<VKStyleManager *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_1_1_1)(); id x_1_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_1_1_3; const void*x_1_1_4; void*x_1_1_5; void*x_1_1_6; int x_1_1_7; in void*x_1_1_8; out unsigned int x_1_1_9/* : ? */; void*x_1_1_10; BOOL x_1_1_11; void*x_1_1_12; } x1; struct _release_objc { } x2; }*)arg1;

@end