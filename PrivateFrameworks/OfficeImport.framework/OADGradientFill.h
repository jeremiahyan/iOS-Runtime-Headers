/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGradientFill : OADFill {
    BOOL mAreStopsOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mIsRotateWithShapeOverridden;
    BOOL mIsShadeOverridden;
    BOOL mIsTileRectOverridden;
    BOOL mRotateWithShape;
    OADShade *mShade;
    NSMutableArray *mStops;
    OADRelativeRect *mTileRect;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)arg1;

- (void)addStopColor:(id)arg1 position:(float)arg2;
- (BOOL)areStopsOverridden;
- (void)clearStops;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)flipMode;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFlipModeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isShadeOverridden;
- (BOOL)isTileRectOverridden;
- (BOOL)rotateWithShape;
- (void)setFlipMode:(int)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(BOOL)arg1;
- (void)setShade:(id)arg1;
- (void)setStops:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTileRect:(id)arg1;
- (id)shade;
- (void)sortStops;
- (id)stopColorAtIndex:(unsigned int)arg1;
- (unsigned int)stopCount;
- (float)stopPositionAtIndex:(unsigned int)arg1;
- (id)stops;
- (id)tileRect;

@end
