/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTile : VKTile <NSCopying> {
    struct shared_ptr<vk::LabelMapTile> { 
        struct LabelMapTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _labelMapTile;
    struct { 
        float x0; 
        float x1; 
        float y0; 
        float y1; 
    } _localBounds;
    float _maximumStyleZ;
    BOOL _needsRasterization;
    VKRasterTile *_rasterized;
    double _stateDates;
    /* Warning: unhandled array encoding: '[34@]' */ id _stateMetas;
    unsigned int _states;
    VKTile *_tiles;
}

@property (nonatomic) struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; } labelMapTile;
@property (nonatomic, readonly) float maximumStyleZ;
@property (nonatomic) BOOL needsRasterization;
@property (nonatomic, retain) VKRasterTile *rasterized;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 timestamp:(double)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })labelMapTile;
- (struct { float x1; float x2; float x3; float x4; })localBoundsForLayer:(unsigned long long)arg1;
- (float)maximumStyleZ;
- (BOOL)needsRasterization;
- (id)rasterized;
- (void)setLabelMapTile:(struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNeedsRasterization:(BOOL)arg1;
- (void)setRasterized:(id)arg1;
- (void)setTile:(id)arg1 state:(unsigned int)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4;
- (id)tileForLayer:(unsigned long long)arg1;
- (unsigned int)tileStateForLayer:(unsigned long long)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;

@end
