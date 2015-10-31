/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilmstripTileViewController : PUImageTileViewController <PUAssetViewModelChangeObserver> {
    struct CGSize { 
        float width; 
        float height; 
    } __expandedSize;
    BOOL __isExpanded;
    PUFilmstripWrapperView *__wrapperView;
}

@property (setter=_setExpandedSize:, nonatomic) struct CGSize { float x1; float x2; } _expandedSize;
@property (setter=_setExpanded:, nonatomic) BOOL _isExpanded;
@property (nonatomic, readonly) PUFilmstripWrapperView *_wrapperView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_expandedSize;
- (BOOL)_isExpanded;
- (void)_setExpanded:(BOOL)arg1;
- (void)_setExpandedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_updateFilmstripView;
- (id)_wrapperView;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (id)loadView;
- (void)setAssetViewModel:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (BOOL)wantsVisibleRectChanges;

@end
