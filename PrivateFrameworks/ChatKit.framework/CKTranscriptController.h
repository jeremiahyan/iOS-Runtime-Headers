/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptController : CKScrollViewController <AFContextProvider, CKComposeRecipientSelectionControllerDelegate, CKMessageEntryViewDelegate, CKTranscriptCollectionViewControllerDelegate, CKTrimControllerDelegate, CKVideoMessageRecordingViewControllerDelegate, IMChatSendProgressDelegate, PHPhotoLibraryChangeObserver, QLPreviewControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIKeyInput, UIModalViewDelegate, UINavigationControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIViewControllerTransitioningDelegate> {
    UIToolbar *_actionsToolbar;
    id /* block */ _alertViewHandler;
    CKAudioTrimViewController *_audioTrimController;
    unsigned int _automaticKeyboardWasDisabled;
    UIWindow *_autorotateDisabledWindow;
    CKGradientReferenceView *_backPlacard;
    BOOL _canSafelyDismissImagePicker;
    UIBarButtonItem *_clearAllItem;
    CKTranscriptCollectionViewController *_collectionViewController;
    UIBarButtonItem *_composeCancelItem;
    <CKTranscriptComposeDelegate> *_composeDelegate;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    CKComposition *_compositionBeingTrimmed;
    CKConversation *_conversation;
    UIBarButtonItem *_detailsButton;
    BOOL _didCancel;
    UIBarButtonItem *_editCancelItem;
    CKQLDetailsPreviewController *_entryPreviewController;
    CKMessageEntryView *_entryView;
    unsigned int _entryViewWasActiveBeforeEdit;
    unsigned int _entryViewWasActiveBeforeNewComposeThrow;
    unsigned int _entryViewWasActiveBeforePushingViewController;
    unsigned int _entryViewWasActiveBeforeSwitchingConversations;
    BOOL _entryViewWasActiveOnPreview;
    BOOL _hasPrepopulatedRecipients;
    BOOL _hideEntryViewForModalDismissal;
    BOOL _initialLayoutComplete;
    NSString *_initialSystemKeyboardID;
    unsigned int _isAnimatingMessageSend;
    BOOL _isShowingPreview;
    NSNotification *_keyboardNotification;
    unsigned int _keyboardUndocked;
    unsigned int _locked;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;
    UIImagePickerController *_mediaController;
    UINavigationItem *_navItem;
    unsigned int _needsTransitionToFullTranscript;
    NSArray *_newCompositionAddresses;
    NSArray *_newCompositionRecipients;
    unsigned int _newRecipient;
    CKPhotoPickerController *_photoPickerController;
    unsigned int _preparingForResume;
    CKQLPreviewController *_previewController;
    UIView *_previewSourceView;
    BOOL _programaticallyMadeEntryViewActive;
    UIProgressView *_progressBar;
    BOOL _progressColor;
    CKRaiseGesture *_raiseGesture;
    unsigned int _recipientSelectionViewWasActiveBeforeFirstResponderChange;
    CKScheduledUpdater *_refreshServiceForSendingUpdater;
    BOOL _safeToMarkAsRead;
    id /* block */ _scrollBlock;
    CKSendAnimationWindow *_sendAnimationWindow;
    float _sendProgress;
    unsigned int _sendProgressSendCount;
    unsigned int _sendProgressTotalCount;
    unsigned int _sending;
    NSString *_serviceAvailabilityKey;
    unsigned int _settingConversation;
    int _setupState;
    BOOL _showingKeyboard;
    BOOL _showingPhotoPicker;
    BOOL _showingVideoMessageRecordingView;
    unsigned int _suspendScrollDueToMediaViewing;
    CKMessageEncodingInfo *_textMessageEncodingInfo;
    UIView *_throwAnimationEnforcementView;
    UIView *_throwAnimationSnapshotView;
    NSMutableArray *_throwBalloonViews;
    NSMutableArray *_throwEndFrames;
    NSMutableArray *_throwIntermediateFrames;
    unsigned int _togglingEditing;
    CKTranscriptHeaderViewController *_transcriptHeader;
    unsigned int _transcriptNeedsUpdate;
    BOOL _transitioningSize;
    unsigned int _transitioningToTranscript;
    unsigned int _triedToResetEntryViewSizeWhileNotInAWindow;
    unsigned int _triedToResetOverlayViewSizeWhileNotInAWindow;
    CKTranscriptTypingIndicatorCell *_typingIndicatorForSendAnimation;
    CKScheduledUpdater *_typingUpdater;
    CKVideoMessageRecordingViewController *_videoMessageRecordingViewController;
    CKVideoTrimController *_videoTrimController;
    unsigned int _viewNeedsSetup;
    BOOL _visible;
}

@property (nonatomic, copy) id /* block */ alertHandler;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) NSNumber *canSafelyDismissImagePicker;
@property (nonatomic, retain) UIBarButtonItem *clearAllItem;
@property (nonatomic, retain) CKTranscriptCollectionViewController *collectionViewController;
@property (nonatomic, retain) UIBarButtonItem *composeCancelItem;
@property (nonatomic) <CKTranscriptComposeDelegate> *composeDelegate;
@property (nonatomic, readonly, retain) CKComposeRecipientSelectionController *composeRecipientSelectionController;
@property (nonatomic, retain) CKComposition *compositionBeingTrimmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *detailsButton;
@property (nonatomic, retain) UIBarButtonItem *editCancelItem;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic) BOOL entryViewWasActiveOnPreview;
@property (nonatomic) BOOL hasPrepopulatedRecipients;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideEntryViewForModalDismissal;
@property (nonatomic) BOOL initialLayoutComplete;
@property (nonatomic) BOOL isShowingPreview;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSArray *newCompositionAddresses;
@property (nonatomic, copy) NSArray *newCompositionRecipients;
@property (nonatomic, retain) CKPhotoPickerController *photoPickerController;
@property (nonatomic) UIView *previewSourceView;
@property (nonatomic) BOOL programaticallyMadeEntryViewActive;
@property (nonatomic, retain) UIProgressView *progressBar;
@property (nonatomic, retain) CKRaiseGesture *raiseGesture;
@property (nonatomic, retain) CKScheduledUpdater *refreshServiceForSendingUpdater;
@property (nonatomic) int returnKeyType;
@property (nonatomic) BOOL safeToMarkAsRead;
@property (nonatomic, copy) id /* block */ scrollBlock;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (nonatomic, retain) CKSendAnimationWindow *sendAnimationWindow;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *throwAnimationEnforcementView;
@property (nonatomic, retain) UIView *throwAnimationSnapshotView;
@property (nonatomic, retain) NSMutableArray *throwBalloonViews;
@property (nonatomic, retain) NSMutableArray *throwEndFrames;
@property (nonatomic, retain) NSMutableArray *throwIntermediateFrames;
@property (nonatomic, retain) CKTranscriptHeaderViewController *transcriptHeader;
@property (nonatomic) BOOL transitioningSize;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;
@property (nonatomic, retain) CKVideoMessageRecordingViewController *videoMessageRecordingViewController;
@property (nonatomic) BOOL visible;

+ (id)readerScrollPositionCache;

- (id)_actionsToolbar;
- (id)_alertView:(id)arg1 externalButtonTitleForMainScreenButtonTitle:(id)arg2 atIndex:(int)arg3;
- (void)_applicationBecameActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_askToTurnOnReadReceiptsIfNeeded;
- (void)_askToTurnOnSMSRelayIfNeeded;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_avoidanceInsets;
- (void)_beginTransitioningToTranscript;
- (BOOL)_canReloadView;
- (void)_cancelMessageSendAnimation;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_cleanupThrowData;
- (void)_confirmReadReceiptSettings;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_conversationParticipantsChanged:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_detailsButtonPressed:(id)arg1;
- (BOOL)_displayMediaObjectFullscreen:(id)arg1;
- (BOOL)_displayPreviewItemForMediaObject:(id)arg1;
- (void)_editCancelButtonPressed:(id)arg1;
- (void)_endTransitioningToTranscript;
- (void)_entryDebugShowEntryHUD;
- (id)_fieldForFocus;
- (void)_finishSendAnimation;
- (void)_forwardSelectedMessages:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_highlightMessage:(id)arg1;
- (struct CGSize { float x1; float x2; })_idealSizeForEntryView;
- (void)_invalidateChatItemLayoutIfNecessary;
- (BOOL)_isGroupMessage;
- (BOOL)_isVisible;
- (void)_kickPhotoKit;
- (void)_localeDidChange:(id)arg1;
- (BOOL)_makeContentEntryViewActive;
- (void)_makeFieldForFocusActive;
- (void)_makeRecipientEntryViewActive;
- (void)_markMessagesAsReadIfNecessary;
- (BOOL)_mediaObjectNeedsTrimming:(id)arg1;
- (void)_performResume:(BOOL)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_receivedConversationDisplayNameDidChangeNotification:(id)arg1;
- (void)_receivedConversationDowngradeStateChangedNotification:(id)arg1;
- (void)_receivedConversationPreferredServiceChangedNotification:(id)arg1;
- (void)_refreshActiveChat:(id)arg1;
- (void)_refreshServiceForSending;
- (void)_refreshViewForCurrentConversationIfNeeded;
- (void)_refreshViewForNewRecipientIfNeeded;
- (void)_removeRecipientSelectionView;
- (void)_removeTranscriptHeaderAnimated:(BOOL)arg1;
- (void)_resetEntryViewSize;
- (BOOL)_resizeMessageEntryView:(id)arg1 animate:(BOOL)arg2;
- (BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1;
- (void)_saveDraftState;
- (void)_screenLocked:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_setConversation:(id)arg1;
- (void)_setEntryViewSize:(struct CGSize { float x1; float x2; })arg1 animate:(BOOL)arg2 animationLength:(float)arg3;
- (void)_setEntryViewVisible:(BOOL)arg1;
- (void)_setVisible:(BOOL)arg1;
- (void)_setupMediaEntry;
- (void)_setupRecipientSelectionView;
- (void)_setupTranscriptHeader;
- (void)_setupTranscriptTableHeader;
- (void)_setupViewForConversation;
- (BOOL)_shouldAllowCameraAttachments;
- (BOOL)_shouldShowReadRecieptAlert;
- (BOOL)_shouldUseExistingConversations;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)_showPhotosPicker;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_startCreatingNewMessageForSending:(id)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_textInputModeDidChange:(id)arg1;
- (struct CGPoint { float x1; float x2; })_transcriptScrollToBottomOffsetWithHeightDelta:(float)arg1;
- (void)_transferFinished:(id)arg1;
- (void)_transferRestored:(id)arg1;
- (void)_updateActionsToolbarItems;
- (void)_updateBackPlacardSubviews;
- (void)_updateTranscriptHeaderPosition;
- (void)_userDidCancelCapturingImage;
- (void)_userDidCaptureImage;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (void)addMedia:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (id /* block */)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)allowContextProvider:(id)arg1;
- (BOOL)becomeFirstResponder;
- (struct CGPoint { float x1; float x2; })bestVisibleOffsetForBubbleAtIndex:(int)arg1;
- (float)bottomInsetPadding;
- (BOOL)canBecomeFirstResponder;
- (id)canSafelyDismissImagePicker;
- (void)cancelButtonClicked:(id)arg1;
- (id)chat;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned int)arg4 totalCount:(unsigned int)arg5 finished:(BOOL)arg6;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (id)clearAllItem;
- (void)clearButtonClicked:(id)arg1;
- (void)clearComposition;
- (void)clearCurrentMessageThread;
- (id)collectionViewController;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (id)composeCancelItem;
- (id)composeDelegate;
- (id)composeRecipientSelectionController;
- (id)composition;
- (id)compositionBeingTrimmed;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 animated:(BOOL)arg2 duration:(float)arg3;
- (id)conversation;
- (void)dealloc;
- (void)deleteBackward;
- (void)deregisterSendProgressDelegate;
- (id)detailsButton;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didReceiveMemoryWarning;
- (void)disableCameraAttachments;
- (void)dismissKeyboard;
- (void)dismissPresentedViewController:(id)arg1;
- (void)dismissVideoMessageRecordingViewController;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id /* block */)arg2;
- (id)editCancelItem;
- (void)entryDebugClear;
- (void)entryDebugSliderChange:(id)arg1;
- (id)entryView;
- (BOOL)entryViewWasActiveOnPreview;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (id)getCurrentContext;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })gradientFrameWithInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)hasFailedRecipients;
- (BOOL)hasPrepopulatedRecipients;
- (BOOL)hasText;
- (BOOL)hasUnreachableEmergencyRecipient;
- (BOOL)hideEntryViewForModalDismissal;
- (void)hideMediaPickerAnimated:(BOOL)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (BOOL)initialLayoutComplete;
- (id)inputAccessoryView;
- (void)insertText:(id)arg1;
- (BOOL)isAnimatingMessageSend;
- (BOOL)isComposingRecipient;
- (BOOL)isEditable;
- (BOOL)isNewRecipient;
- (BOOL)isSendingMessage;
- (BOOL)isShowingPreview;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)loadView;
- (void)makeEntryViewActiveAfterSend;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (id)navigationItem;
- (id)newCompositionAddresses;
- (id)newCompositionRecipients;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)performResumeDeferredSetup;
- (BOOL)photoButtonEnabled;
- (void)photoLibraryDidChange:(id)arg1;
- (id)photoPickerController;
- (void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(BOOL)arg3;
- (void)photoPickerControllerRequestPresentCamera:(id)arg1;
- (void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1;
- (void)photoPickerControllerWillCancel:(id)arg1;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)previewController:(id)arg1 didTransitionToState:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { float x1; float x2; }*)arg4;
- (void)previewController:(id)arg1 willTransitionToState:(int)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(int*)arg2 containsRestoring:(BOOL*)arg3;
- (id)previewMenuItemsForPreviewController:(id)arg1;
- (id)previewSourceView;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)prewarmCamera:(id)arg1;
- (BOOL)programaticallyMadeEntryViewActive;
- (id)progressBar;
- (id)proposedRecipients;
- (id)raiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (id)recipients;
- (void)refreshServiceForSending;
- (id)refreshServiceForSendingUpdater;
- (void)refreshTranscriptIfNeededWithAnimation:(BOOL)arg1;
- (void)refreshTranscriptWithAnimation:(BOOL)arg1;
- (void)registerForNotifications;
- (void)registerForSharedNotifications;
- (void)registerSendProgressDelegate;
- (void)reloadEntryViewIfNeeded;
- (BOOL)resignFirstResponder;
- (void)restoreEntryViewAfterPreview;
- (id)rotatingFooterView;
- (BOOL)safeToMarkAsRead;
- (id /* block */)scrollBlock;
- (void)scrollBubbleIndexToVisible:(int)arg1;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2;
- (id)scrollView;
- (id)sendAnimationWindow;
- (void)sendComposition:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setAlertHandler:(id /* block */)arg1;
- (void)setCanSafelyDismissImagePicker:(id)arg1;
- (void)setClearAllItem:(id)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setComposeCancelItem:(id)arg1;
- (void)setComposeDelegate:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setCompositionBeingTrimmed:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setEditCancelItem:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewWasActiveOnPreview:(BOOL)arg1;
- (void)setHasPrepopulatedRecipients:(BOOL)arg1;
- (void)setHideEntryViewForModalDismissal:(BOOL)arg1;
- (void)setInitialLayoutComplete:(BOOL)arg1;
- (void)setIsShowingPreview:(BOOL)arg1;
- (void)setNewCompositionAddresses:(id)arg1;
- (void)setNewCompositionRecipients:(id)arg1;
- (void)setNewRecipient:(BOOL)arg1;
- (void)setPhotoPickerController:(id)arg1;
- (void)setPreviewSourceView:(id)arg1;
- (void)setProgramaticallyMadeEntryViewActive:(BOOL)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setRaiseGesture:(id)arg1;
- (void)setRefreshServiceForSendingUpdater:(id)arg1;
- (void)setSafeToMarkAsRead:(BOOL)arg1;
- (void)setScrollBlock:(id /* block */)arg1;
- (void)setSendAnimationWindow:(id)arg1;
- (void)setSendingMessage:(BOOL)arg1;
- (void)setThrowAnimationEnforcementView:(id)arg1;
- (void)setThrowAnimationSnapshotView:(id)arg1;
- (void)setThrowBalloonViews:(id)arg1;
- (void)setThrowEndFrames:(id)arg1;
- (void)setThrowIntermediateFrames:(id)arg1;
- (void)setTranscriptHeader:(id)arg1;
- (void)setTransitioningSize:(BOOL)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setVideoMessageRecordingViewController:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setupForNewRecipient;
- (void)setupScrollingForKeyboardInteraction;
- (BOOL)shouldAutorotate;
- (BOOL)shouldDismissAfterSend;
- (void)showAlternateViewerForMediaObject:(id)arg1;
- (void)showEntryViewerForMediaObject:(id)arg1;
- (void)showKeyboardForReply;
- (void)showMediaPicker:(id)arg1 animated:(BOOL)arg2;
- (void)showReaderForPart:(id)arg1;
- (void)showViewerForMediaObject:(id)arg1;
- (void)significantTimeChange;
- (void)startSendAnimationForMessage:(id)arg1 shouldClearEntryComposition:(BOOL)arg2;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (id)supportedMediaTypesForPhotoPicker:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (id)textInputContextIdentifier;
- (id)throwAnimationEnforcementView;
- (id)throwAnimationSnapshotView;
- (id)throwBalloonViews;
- (id)throwEndFrames;
- (id)throwIntermediateFrames;
- (BOOL)topInsetIncludesPalette;
- (float)topInsetPadding;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (id)transcriptHeader;
- (void)transitionFromNewMessageToConversation;
- (BOOL)transitioningSize;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (id)typingUpdater;
- (id)unatomizedRecipientText;
- (void)updateNavigationButtons;
- (void)updateQLPreviewControllerIfVisible;
- (void)updateRaiseGesture;
- (void)updateTitleAnimated:(BOOL)arg1;
- (void)updateTyping;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (id)videoMessageRecordingViewController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillUnload;
- (BOOL)visible;
- (BOOL)wantsFullScreenLayout;
- (void)willDismissModally;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3;

@end
