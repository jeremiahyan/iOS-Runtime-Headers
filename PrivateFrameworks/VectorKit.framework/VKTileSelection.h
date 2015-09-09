/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSelection : NSObject {
    BOOL _bootstrap;
    double _lodBias;
    unsigned int _maxZ;
    int _tileSize;
}

@property (nonatomic) BOOL bootstrap;
@property (nonatomic) double lodBias;
@property (nonatomic) unsigned int maxZ;
@property (nonatomic) int tileSize;

- (BOOL)bootstrap;
- (id)init;
- (id)keysForContext:(id)arg1 neighbors:(id)arg2 selectionScale:(float)arg3;
- (double)lodBias;
- (unsigned int)maxZ;
- (struct { unsigned int x1; int x2; int x3; int x4; int x5; })relevantTilesForContext:(id)arg1;
- (void)setBootstrap:(BOOL)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMaxZ:(unsigned int)arg1;
- (void)setTileSize:(int)arg1;
- (int)tileSize;

@end
