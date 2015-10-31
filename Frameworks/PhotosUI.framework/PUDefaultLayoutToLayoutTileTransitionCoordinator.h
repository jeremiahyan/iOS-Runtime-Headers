/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    BOOL __isZoomingIn;
    BOOL __needsUpdateZoomingIn;
    PUAssetReference *_anchorAssetReference;
    PUTilingLayoutTransitionContext *_context;
    <PUTilingCoordinateSystem> *_fixedCoordinateSystem;
    PUTilingLayout *_fromLayout;
    PUTilingLayout *_toLayout;
}

@property (setter=_setZoomingIn:, nonatomic) BOOL _isZoomingIn;
@property (setter=_setNeedsUpdateZoomingIn:, nonatomic) BOOL _needsUpdateZoomingIn;
@property (nonatomic, retain) PUAssetReference *anchorAssetReference;
@property (nonatomic, retain) PUTilingLayoutTransitionContext *context;
@property (nonatomic, retain) <PUTilingCoordinateSystem> *fixedCoordinateSystem;
@property (nonatomic, retain) PUTilingLayout *fromLayout;
@property (nonatomic, retain) PUTilingLayout *toLayout;

- (void).cxx_destruct;
- (id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3;
- (void)_invalidateIsZoomingIn;
- (BOOL)_isCenterTileLayoutInfo:(id)arg1;
- (BOOL)_isZoomingIn;
- (BOOL)_needsUpdateZoomingIn;
- (void)_setNeedsUpdateZoomingIn:(BOOL)arg1;
- (void)_setZoomingIn:(BOOL)arg1;
- (void)_updateIsZoomingInIfNeeded;
- (int)_zoomLevelForLayout:(id)arg1;
- (id)anchorAssetReference;
- (id)context;
- (id)description;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)fixedCoordinateSystem;
- (id)fromLayout;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(int)arg3;
- (void)setAnchorAssetReference:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFixedCoordinateSystem:(id)arg1;
- (void)setFromLayout:(id)arg1;
- (void)setToLayout:(id)arg1;
- (id)toLayout;
- (BOOL)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end
