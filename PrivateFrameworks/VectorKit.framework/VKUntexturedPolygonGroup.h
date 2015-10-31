/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKUntexturedPolygonGroup : VKPolygonGroup {
    NSMutableOrderedSet *_attributeSets;
    struct vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { 
        struct shared_ptr<gss::BuildingDrawStyle> {} *__begin_; 
        struct shared_ptr<gss::BuildingDrawStyle> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::BuildingDrawStyle> *, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { 
            struct shared_ptr<gss::BuildingDrawStyle> {} *__first_; 
        } __end_cap_; 
    } _buildingDrawStyles;
    struct vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { 
        struct shared_ptr<gss::BuildingDrawStyle> {} *__begin_; 
        struct shared_ptr<gss::BuildingDrawStyle> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::BuildingDrawStyle> *, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { 
            struct shared_ptr<gss::BuildingDrawStyle> {} *__first_; 
        } __end_cap_; 
    } _flatRoofBuildingDrawStyles;
    struct vector<std::__1::shared_ptr<gss::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > > { 
        struct shared_ptr<gss::StyleQuery> {} *__begin_; 
        struct shared_ptr<gss::StyleQuery> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::StyleQuery> *, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > > { 
            struct shared_ptr<gss::StyleQuery> {} *__first_; 
        } __end_cap_; 
    } _flatRoofStyleQueries;
    struct vector<std::__1::shared_ptr<gss::StyleQuery>, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > > { 
        struct shared_ptr<gss::StyleQuery> {} *__begin_; 
        struct shared_ptr<gss::StyleQuery> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<gss::StyleQuery> *, std::__1::allocator<std::__1::shared_ptr<gss::StyleQuery> > > { 
            struct shared_ptr<gss::StyleQuery> {} *__first_; 
        } __end_cap_; 
    } _styleQueries;
}

@property (nonatomic, readonly) NSOrderedSet *attributeSets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributeSets;
- (struct vector<std::__1::shared_ptr<gss::BuildingDrawStyle>, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { struct shared_ptr<gss::BuildingDrawStyle> {} *x1; struct shared_ptr<gss::BuildingDrawStyle> {} *x2; struct __compressed_pair<std::__1::shared_ptr<gss::BuildingDrawStyle> *, std::__1::allocator<std::__1::shared_ptr<gss::BuildingDrawStyle> > > { struct shared_ptr<gss::BuildingDrawStyle> {} *x_3_1_1; } x3; }*)buildingDrawStylesForPointyRoofs:(BOOL)arg1;
- (BOOL)canAcceptPolygon:(struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; struct _NSRange { unsigned int x_13_1_1; unsigned int x_13_1_2; } x13; BOOL x14; }*)arg1;
- (void)dealloc;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (id)initWithStyleQuery:(struct shared_ptr<gss::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tile:(id)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4;
- (void)updateWithStyleResolutionSession:(struct StyleResolutionSession<geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > { struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; struct unordered_map<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, std::__1::allocator<std::__1::pair<const std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::hash<std::__1::shared_ptr<gss::StyleQuery> >, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::shared_ptr<gss::StyleQuery>, std::__1::__hash_value_type<std::__1::shared_ptr<gss::StyleQuery>, geo::_retain_ptr<id, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<std::__1::shared_ptr<gss::StyleQuery> >, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; bool x3; unsigned char x4; }*)arg1;

@end
