/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {
    QLAirPlayController *_airPlayController;
    UIColor *_backgroundColor;
    BOOL _blockRemoteImages;
    int _currentPreviewItemIndex;
    UISegmentedControl *_customToolbarSegmentedArrowControl;
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    NSMutableSet *_gestureRecognizersForFullScreenDisplay;
    BOOL _isForeground;
    NSMutableSet *_loadingItems;
    NSString *_loadingTextForMissingFiles;
    UILongPressGestureRecognizer *_longPressRecognizer;
    float _navigationBarVerticalOffset;
    int _numberOfPreviewItems;
    BOOL _overlayHidden;
    UIPageViewController *_pageViewController;
    int _previewMode;
    NSMutableDictionary *_previewViewControllerCache;
    NSMutableArray *_previewViewControllerCacheOrdering;
    NSMutableOrderedSet *_scheduledLoads;
    BOOL _swiping;
    UITapGestureRecognizer *_tapRecognizer;
    BOOL _transitioning;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    } clientContext;
}

@property (copy) UIColor *backgroundColor;
@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property <QLPreviewContentDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <QLPreviewContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int previewMode;
@property (readonly) Class superclass;

- (void)_activateAirPlayOnRemoteScreen:(id)arg1;
- (void)_cachePreviewViewController:(id)arg1;
- (id)_cachedPreviewControllerForPreviewItem:(id)arg1 withIndex:(int)arg2;
- (void)_clearPreviewViewControllerCache;
- (id)_copyPreviewControllerForPreview:(id)arg1 withIndex:(int)arg2;
- (void)_deactivateAirPlay;
- (void)_dequeueScheduledLoad;
- (void)_hideMenuController;
- (void)_leftSwipeRecognized:(id)arg1;
- (void)_longPressGestureRecognized:(id)arg1;
- (id)_previewControllerForPreviewItem:(id)arg1 createIfNeeded:(BOOL)arg2 withIndex:(int)arg3;
- (id)_previewViewControllerForPreviewItemIndex:(unsigned int)arg1;
- (void)_removeNonCachedPreviewViewControllers;
- (void)_rightSwipeRecognized:(id)arg1;
- (void)_scheduleAdjacentPreviewItems;
- (void)_schedulePreviewViewControllerIfNeeded:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_updateAirPlay;
- (void)_updateBackgroundWithDuration:(double)arg1;
- (void)_updateContentFrame;
- (void)_updateDisabledScrollingRect;
- (void)_updateScreenConfiguration;
- (id)backgroundColor;
- (void)becomeForeground;
- (void)beginScrubbing;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)checkCurrentPreviewItem;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)configureWithParameters:(id)arg1;
- (void)copy:(id)arg1;
- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (id)currentPreviewViewController;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)refreshCurrentPreviewItem;
- (void)refreshCurrentPreviewItem:(BOOL)arg1;
- (void)scrubToValue:(double)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewMode:(int)arg1;
- (void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(id /* block */)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (id)snapshotView;
- (void)stopLoadingCurrentPreviewItem;
- (void)togglePlayState;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willChangeContentFrame;
- (void)willMoveToParentViewController:(id)arg1;

@end
