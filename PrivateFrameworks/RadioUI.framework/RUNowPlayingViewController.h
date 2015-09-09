/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUNowPlayingViewController : MPUNowPlayingViewController <RUNowPlayingPlaybackControlsViewDelegate, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, SKStoreProductViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    <RUNowPlayingViewControllerDelegate> *_delegate;
    UIView *_infoButtonContainerView;
    BOOL _isVisibleForVisuallyEngagedAds;
    SKStoreProductViewController *_productViewController;
    RUPurchaseAlbumView *_purchaseAlbumView;
    UIPopoverPresentationController *_stationActionsPresentationController;
    UIView *_stationActionsPresentationView;
    RUStationActionsViewController *_stationActionsViewController;
    UIPopoverPresentationController *_trackActionsPresentationController;
    RUTrackActionsViewController *_trackActionsViewController;
    RUTrackDownloadView *_trackDownloadView;
    BOOL _visuallyEngagedAds;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUNowPlayingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MPU_prepareForNavigationController:(id)arg1 poppingToViewController:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)_addStationFromItem:(id)arg1 usingArtist:(BOOL)arg2;
- (id)_albumTextForItem:(id)arg1;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (id)_artistTextForItem:(id)arg1;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(BOOL)arg3 canShowAlert:(BOOL)arg4;
- (struct CGSize { float x1; float x2; })_contentViewSizeForItem:(id)arg1 withContentView:(id)arg2 orientation:(int)arg3;
- (id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2;
- (BOOL)_dismissModalViewsAnimated:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleTrackAction:(int)arg1 withItem:(id)arg2;
- (void)_infoButtonAction:(id)arg1;
- (BOOL)_isActionForHandlingDoubleTapOnArtworkImageViewEnabled;
- (void)_itemAlbumBuyButtonInfoDidChangeNotification:(id)arg1;
- (void)_itemAlbumStoreIDDidChangeNotification:(id)arg1;
- (BOOL)_itemSupportsRatings:(id)arg1;
- (void)_itemTitlesDidChange;
- (BOOL)_makeRadioVisible;
- (Class)_playbackControlsViewClass;
- (void)_prepareToAddStation;
- (void)_purchaseAlbumButtonAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioPurchaseAllowedDidChangeNotification:(id)arg1;
- (BOOL)_shouldAbortUpdatingContentView:(id)arg1 forItem:(id)arg2;
- (BOOL)_shouldUpdateContentView:(id)arg1 forBufferingState:(unsigned int)arg2;
- (id)_titleTextForItem:(id)arg1;
- (int)_transitionDirectionForChangeFromItem:(id)arg1 toItem:(id)arg2;
- (BOOL)_updateItemRelatedStateForChangeToItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_updateNavigationItemAnimated:(BOOL)arg1;
- (void)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (void)_updateVisualEngagementWithItem:(id)arg1;
- (void)_videoAdTapGestureRecognizerAction:(id)arg1;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playbackControlsDidTapInfoButton:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(int)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(int)arg2;
- (void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3;
- (void)trackDownloadView:(id)arg1 stateDidChangeToState:(int)arg2;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
