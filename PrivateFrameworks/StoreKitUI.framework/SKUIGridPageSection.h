/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {
    NSMapTable *_artworkRequests;
    SKUIClientContext *_clientContext;
    BOOL _containsLockups;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_hiddenIconIndexSet;
    BOOL _isLandscape;
    BOOL _isPad;
    NSMapTable *_lockupArtworkContexts;
    struct CGSize { 
        float width; 
        float height; 
    } _lockupImageBoundingSize;
    SKUIMissingItemLoader *_missingItemLoader;
    NSString *_moreButtonTitle;
    int _numberOfColumns;
    SKUIProductPageOverlayController *_overlayController;
    int _overlaySourceItemIndex;
    int _screenScale;
    SKUIVideoImageDataConsumer *_videoImageDataConsumer;
    NSMutableDictionary *_videoPlaceholderImages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkContextForLockupSize:(int)arg1;
- (id)_cellImageForItem:(id)arg1 lockupSize:(int)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetForMediaIndex:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInsetForVideoLockupIndex:(int)arg1;
- (id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2;
- (id)_editorialLayoutForEditorial:(id)arg1;
- (id)_editorialLayoutForLockup:(id)arg1;
- (id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (void)_enumerateItemsFromStartIndex:(int)arg1 withBlock:(id /* block */)arg2;
- (void)_enumerateVisibleIndexPathsWithBlock:(id /* block */)arg1;
- (void)_enumerateVisibleItemsWithBlock:(id /* block */)arg1;
- (float)_heightForEditorialAtIndexPath:(id)arg1;
- (float)_heightForEditorialLockup:(id)arg1;
- (float)_heightForEditorialLockupAtIndexPath:(id)arg1;
- (float)_heightForLockupAtIndexPath:(id)arg1 gridType:(int)arg2;
- (float)_heightForMedia:(id)arg1 width:(float)arg2;
- (float)_heightForMediaAtIndexPath:(id)arg1;
- (id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2;
- (id)_itemForIndex:(int)arg1;
- (void)_loadImageForItem:(id)arg1 lockupSize:(int)arg2 loader:(id)arg3 reason:(int)arg4;
- (void)_loadImageForVideo:(id)arg1 thumbnailSize:(struct CGSize { float x1; float x2; })arg2 loader:(id)arg3 reason:(int)arg4;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2;
- (float)_mediaWidthForMediaIndex:(int)arg1 gridWidth:(float)arg2;
- (id)_missingItemLoader;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(int)arg2;
- (int)_numberOfLandscapeColumnsWithGridType:(int)arg1;
- (int)_numberOfPortraitColumnsWithGridType:(int)arg1;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(int)arg3;
- (void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(int)arg3;
- (void)_selectItem:(id)arg1 withIndex:(int)arg2;
- (void)_setPositionForClickEvent:(id)arg1 withElementIndex:(int)arg2;
- (void)_showProductPageWithItem:(id)arg1 index:(int)arg2 animated:(BOOL)arg3;
- (void)_updateVisibileEditorialWithEditorialOrientation:(int)arg1;
- (id)_videoThumbnailImageForVideo:(id)arg1 thumbnailSize:(struct CGSize { float x1; float x2; })arg2;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(int)arg3;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
