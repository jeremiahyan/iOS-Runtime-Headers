/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUIrisBadgeVisibilityControllerDelegate> {
    PUBadgeInfo *__badgeInfo;
    PLPhotoTileBadgeView *__badgeView;
    PUIrisBadgeVisibilityController *__irisBadgeVisibilityController;
    BOOL __isOverContent;
    BOOL __needsUpdateBadgeInfo;
    BOOL __needsUpdateBadgeView;
    BOOL __needsUpdateIrisBadge;
    PUAssetViewModel *_assetViewModel;
}

@property (setter=_setBadgeInfo:, nonatomic, copy) PUBadgeInfo *_badgeInfo;
@property (nonatomic, readonly) PLPhotoTileBadgeView *_badgeView;
@property (setter=_setIrisBadgeVisibilityController:, nonatomic, retain) PUIrisBadgeVisibilityController *_irisBadgeVisibilityController;
@property (setter=_setOverContent:, nonatomic) BOOL _isOverContent;
@property (setter=_setNeedsUpdateBadgeInfo:, nonatomic) BOOL _needsUpdateBadgeInfo;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) BOOL _needsUpdateBadgeView;
@property (setter=_setNeedsUpdateIrisBadge:, nonatomic) BOOL _needsUpdateIrisBadge;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct CGSize { float x1; float x2; })_badgeTileSizeForBadgeInfo:(id)arg1;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(id)arg2 isOverContent:(BOOL)arg3;
+ (struct CGSize { float x1; float x2; })badgeTileSizeForAssetViewModel:(id)arg1;

- (void).cxx_destruct;
- (id)_badgeInfo;
- (id)_badgeView;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeView;
- (void)_invalidateIrisBadge;
- (id)_irisBadgeVisibilityController;
- (BOOL)_isOverContent;
- (BOOL)_needsUpdate;
- (BOOL)_needsUpdateBadgeInfo;
- (BOOL)_needsUpdateBadgeView;
- (BOOL)_needsUpdateIrisBadge;
- (void)_setBadgeInfo:(id)arg1;
- (void)_setIrisBadgeVisibilityController:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBadgeInfo:(BOOL)arg1;
- (void)_setNeedsUpdateBadgeView:(BOOL)arg1;
- (void)_setNeedsUpdateIrisBadge:(BOOL)arg1;
- (void)_setOverContent:(BOOL)arg1;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateIrisBadgeIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)irisBadgeTileInfo:(id)arg1 didTransitionToAppearanceState:(unsigned int)arg2;
- (id)loadView;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
