/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardImpl : UIView <UIKeyboardCandidateListDelegate, _UIIVCResponseDelegateImpl, _UIKeyboardTextSelectionGestureControllerDelegate> {
    UIKeyboardScheduledTask *_autocorrectPromptTask;
    NSDictionary *_candidateRequestInfo;
    int _currentAlertReason;
    BOOL _handlingKeyCommandFromHardwareKeyboard;
    _UIKeyboardTextSelectionController *_textSelectionController;
    BOOL committingCandidate;
    BOOL geometryIsChanging;
    UIAlertView *keyboardAlertView;
    BOOL m_UsedCandidateSelection;
    BOOL m_acceptingCandidate;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    unsigned int m_autoDeleteCount;
    double m_autoDeleteInterval;
    double m_autoDeleteLastDelete;
    BOOL m_autoDeleteOK;
    unsigned long m_autoDeleteShiftCharacter;
    UIKeyboardScheduledTask *m_autoDeleteTask;
    BOOL m_autocapitalizationPreference;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIKeyboardAutocorrectionController *m_autocorrectionController;
    BOOL m_autocorrectionPreference;
    BOOL m_autoshift;
    <UIKeyboardCandidateList> *m_candidateList;
    TIKeyboardCandidateResultSet *m_candidateResultSet;
    BOOL m_caretShowingNow;
    int m_changeCount;
    BOOL m_changeNotificationDisabled;
    double m_changeTime;
    id m_changedDelegate;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    BOOL m_correctionLearningAllowed;
    int m_currentDirection;
    UITextInputTraits *m_defaultTraits;
    _UIActionWhenIdle *m_deferredDidSetDelegateAction;
    _UIActionWhenIdle *m_delayedCandidateRequest;
    <UIKeyInput> *m_delegate;
    BOOL m_delegateAdoptsKeyInputPrivate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateAdoptsWKInteraction;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    UIDelayedAction *m_detachHardwareKeyboardAction;
    BOOL m_didAutomaticallyInsertSpace;
    BOOL m_didSyncDocumentStateToInputDelegate;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
    id /* block */ m_externalTask;
    <UIKeyboardImplGeometryDelegate> *m_geometryDelegate;
    BOOL m_hardwareKeyboardAttached;
    UIPhysicalKeyboardEvent *m_hardwareRepeatEvent;
    UIKeyboardScheduledTask *m_hardwareRepeatTask;
    BOOL m_hasInputOnAcceptCandidate;
    BOOL m_inDealloc;
    BOOL m_initializationDone;
    TIKeyboardInputManagerState *m_inputManagerState;
    struct CGPoint { 
        float x; 
        float y; 
    } m_inputPoint;
    BOOL m_insideKeyInputDelegateCall;
    BOOL m_isCapsLocked;
    BOOL m_isRotating;
    id /* block */ m_keyInputCompletionHandler;
    TIKeyboardState *m_keyboardState;
    NSMutableDictionary *m_keyedLayouts;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    UIView *m_languageIndicator;
    WebEvent *m_lastWebEvent;
    UIKeyboardLayout *m_layout;
    BOOL m_longPress;
    UIDelayedAction *m_longPressAction;
    UIView *m_markedTextOverlay;
    BOOL m_maximizing;
    BOOL m_needsCandidates;
    BOOL m_needsToRecomputeDesirableModes;
    struct __CFRunLoopObserver { } *m_observer;
    int m_originalOrientation;
    BOOL m_originalShouldSkipCandidateSelection;
    BOOL m_performanceLoggingEnabled;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    NSString *m_previousInputString;
    unsigned int m_previousReturnKeyBehavior;
    unsigned int m_previousSpaceKeyBehavior;
    BOOL m_receivedCandidatesInCurrentInputMode;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    BOOL m_replacingWord;
    int m_returnKeyState;
    BOOL m_rivenCenterFilled;
    BOOL m_scrolling;
    BOOL m_selecting;
    BOOL m_settingShift;
    BOOL m_shift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shouldChargeKeys;
    BOOL m_shouldSetInputModeInNextRun;
    BOOL m_shouldSkipCandidateGeneration;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_showInputModeIndicator;
    BOOL m_showsCandidateBar;
    BOOL m_showsCandidateInline;
    BOOL m_softwareKeyboardShownByTouch;
    float m_splitProgress;
    BOOL m_suggestionsShownForCurrentDeletion;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_suppressUpdateLayout;
    UIKeyboardTaskQueue *m_taskQueue;
    BOOL m_textInputChangesIgnored;
    unsigned int m_textInputChangingCount;
    BOOL m_textInputChangingDirection;
    BOOL m_textInputChangingText;
    TIKeyboardTouchEvent *m_touchEventWaitingForKeyInputEvent;
    UITextInputTraits *m_traits;
    UITextInputTraits *m_traitsForPreviousDelegate;
    BOOL m_updateLayoutOnShowKeyboard;
    BOOL m_updatingLayout;
    BOOL m_updatingPreferences;
    BOOL m_userChangedSelection;
    BOOL m_usesCandidateSelection;
}

@property (nonatomic, retain) UITextInputArrowKeyHistory *arrowKeyHistory;
@property (nonatomic, readonly) UIResponder<UIWKInteractionViewProtocol> *asynchronousInputDelegate;
@property (nonatomic, retain) UIKeyboardScheduledTask *autocorrectPromptTask;
@property (nonatomic, readonly) UIKeyboardAutocorrectionController *autocorrectionController;
@property (nonatomic, retain) NSDictionary *candidateRequestInfo;
@property (readonly) BOOL centerFilled;
@property (nonatomic, retain) id changedDelegate;
@property (nonatomic) BOOL committingCandidate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIActionWhenIdle *deferredDidSetDelegateAction;
@property (nonatomic, retain) _UIActionWhenIdle *delayedCandidateRequest;
@property (nonatomic, retain) UIResponder<UIKeyInput> *delegate;
@property (nonatomic, readonly) UIResponder *delegateAsResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ externalTask;
@property (nonatomic) <UIKeyboardImplGeometryDelegate> *geometryDelegate;
@property (nonatomic) BOOL geometryIsChanging;
@property (nonatomic) BOOL handlingKeyCommandFromHardwareKeyboard;
@property (nonatomic) BOOL hardwareKeyboardIsSeen;
@property (nonatomic, retain) UIPhysicalKeyboardEvent *hardwareRepeatEvent;
@property (nonatomic, retain) UIKeyboardScheduledTask *hardwareRepeatTask;
@property (readonly) unsigned int hash;
@property (getter=isInHardwareKeyboardMode, nonatomic) BOOL inHardwareKeyboardMode;
@property (nonatomic, readonly) UIResponder<UITextInput> *inputDelegate;
@property (nonatomic, readonly) TIKeyboardInputManagerStub *inputManager;
@property (nonatomic, retain) TIKeyboardInputManagerState *inputManagerState;
@property (nonatomic, retain) UIAlertView *keyboardAlertView;
@property (nonatomic, retain) TIKeyboardLayout *layoutForKeyHitTest;
@property (nonatomic, readonly) <UIKeyboardInput> *legacyInputDelegate;
@property (readonly) unsigned int minimumTouchesForTranslation;
@property (nonatomic, readonly) UIResponder<UITextInputPrivate> *privateInputDelegate;
@property (nonatomic, readonly) UIResponder<UIKeyInputPrivate> *privateKeyInputDelegate;
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode;
@property (nonatomic, retain) <UIKeyboardRecording><UIApplicationEventRecording> *recorder;
@property BOOL rivenSplitLock;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic) BOOL shouldSetInputModeInNextRun;
@property (nonatomic, readonly) BOOL shouldShowCandidateBar;
@property (nonatomic) BOOL shouldSkipCandidateSelection;
@property (nonatomic) BOOL showInputModeIndicator;
@property (nonatomic) BOOL showsCandidateBar;
@property (nonatomic) BOOL showsCandidateInline;
@property (nonatomic) BOOL softwareKeyboardShownByTouch;
@property (nonatomic, readonly) BOOL splitTransitionInProgress;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressUpdateLayout;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, retain) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;
@property (nonatomic, retain) TIKeyboardTouchEvent *touchEventWaitingForKeyInputEvent;

+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (id)activeInstance;
+ (float)additionalInstanceHeight;
+ (float)additionalInstanceHeightForInterfaceOrientation:(int)arg1;
+ (void)applicationDidBecomeActive:(id)arg1;
+ (void)applicationDidEnterBackground:(id)arg1;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillEnterForeground:(id)arg1;
+ (void)applicationWillResignActive:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (void)hardwareKeyboardAvailabilityChanged;
+ (BOOL)isSplit;
+ (id)keyboardScreen;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (id)keyboardWindow;
+ (Class)layoutClassForCurrentInputMode;
+ (Class)layoutClassForInputMode:(id)arg1 keyboardType:(int)arg2 screenTraits:(id)arg3;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (id)normalizedInputModesFromPreference;
+ (struct CGPoint { float x1; float x2; })normalizedPersistentOffset;
+ (int)persistentDictationTargetZone;
+ (struct CGPoint { float x1; float x2; })persistentDictationWindowOffset;
+ (struct CGPoint { float x1; float x2; })persistentOffset;
+ (float)persistentSplitProgress;
+ (void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2;
+ (void)releaseSharedInstance;
+ (BOOL)rivenInstalled;
+ (BOOL)rivenPreference;
+ (BOOL)rivenTranslationPreference;
+ (void)sendPerformanceNotification:(id)arg1;
+ (void)setParentTestForProfiling:(id)arg1;
+ (void)setPersistentDictationTargetZone:(int)arg1;
+ (void)setPersistentDictationWindowOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentOffset:(struct CGPoint { float x1; float x2; })arg1;
+ (void)setPersistentSplitProgress:(float)arg1;
+ (id)sharedInstance;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(int)arg1;
+ (float)splitProgress;
+ (BOOL)supportsSplit;
+ (void)suppressSetPersistentOffset:(BOOL)arg1;
+ (float)topMarginForInterfaceOrientation:(int)arg1;

- (id)UILanguagePreference;
- (int)_clipCornersOfView:(id)arg1;
- (void)_completePerformInputViewControllerOutput:(id)arg1 executionContext:(id)arg2;
- (void)_continueHandleWebKeyEventWithTask:(id /* block */)arg1 executionContext:(id)arg2;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (void)_handleKeyBehavior:(unsigned int)arg1 forKeyType:(id)arg2;
- (void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned int)arg2 inInputString:(id)arg3 executionContext:(id)arg4;
- (void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3;
- (BOOL)_hasCandidates;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (id)_keyboardBehaviorState;
- (id)_layout;
- (void)_moveWithEvent:(id)arg1;
- (BOOL)_needsCandidates;
- (void)_nop;
- (void)_performInputViewControllerOutput:(id)arg1;
- (int)_positionInCandidateList:(id)arg1;
- (void)_processInputViewControllerKeyboardOutput:(id)arg1 executionContext:(id)arg2;
- (id)_rangeForAutocorrectionText:(id)arg1;
- (void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2;
- (void)_requestInputManagerSync;
- (void)_setAutocorrects:(BOOL)arg1;
- (void)_setInputManager:(id)arg1;
- (void)_setNeedsCandidates:(BOOL)arg1;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (BOOL)_shouldRequestInputManagerSyncForKeyboardOutputCallbacks:(id)arg1;
- (void)_updateInputViewControllerOutput:(id)arg1 forKeyboardOutput:(id)arg2;
- (void)_updateKeyboardConfigurations;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptAutocorrection;
- (void)acceptAutocorrection:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (void)acceptAutocorrectionAndEndComposition;
- (id)acceptAutocorrectionForWordTerminator:(id)arg1;
- (void)acceptAutocorrectionForWordTerminator:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2;
- (void)acceptCandidate:(id)arg1;
- (void)acceptCandidate:(id)arg1 forInput:(id)arg2;
- (void)acceptCandidate:(id)arg1 forInput:(id)arg2 executionContext:(id)arg3;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateForInput:(id)arg1;
- (void)acceptCurrentCandidateIfSelected;
- (void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1;
- (void)acceptFirstCandidate;
- (BOOL)acceptInputString:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1 executionContext:(id)arg2;
- (void)acceptRecentInput:(id)arg1;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2;
- (BOOL)acceptWord:(id)arg1 firstDelete:(unsigned int)arg2 forInput:(id)arg3;
- (void)addInputEvent:(id)arg1 executionContext:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)addInputObject:(id)arg1 executionContext:(id)arg2;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 executionContext:(id)arg3;
- (void)addInputString:(id)arg1 withFlags:(unsigned int)arg2 withInputManagerHint:(id)arg3 executionContext:(id)arg4;
- (void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 executionContext:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animateAutocorrectionToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)animateAutocorrectionToText:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (BOOL)applyAutocorrection:(id)arg1;
- (id)arrowKeyHistory;
- (id)asynchronousInputDelegate;
- (BOOL)autocapitalizationPreference;
- (id)autocorrectPrompt;
- (id)autocorrectPromptRectsForInput:(id)arg1;
- (id)autocorrectPromptRectsFromFirstDelegateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lastDelegateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)autocorrectPromptTask;
- (BOOL)autocorrectSpellingEnabled;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)autocorrectionController;
- (BOOL)autocorrectionPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (id)autocorrectionRecordForWord:(id)arg1;
- (BOOL)automaticMinimizationEnabled;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callLayoutIgnoresShiftState;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (void)callLayoutUpdateAllLocalizedKeys;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutUpdateRecentInputs;
- (void)callLayoutUpdateReturnKey;
- (BOOL)callLayoutUsesAutoShift;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2;
- (BOOL)callShouldInsertText:(id)arg1;
- (BOOL)callShouldReplaceExtendedRange:(int)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3;
- (BOOL)canHandleEvent:(id)arg1;
- (BOOL)canHandleKeyHitTest;
- (void)cancelAllKeyEvents;
- (void)cancelCandidateRequests;
- (void)cancelSplitTransition;
- (id)candidateList;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (id)candidateRequestInfo;
- (BOOL)candidateSelectionPredictionForTraits;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (BOOL)centerFilled;
- (int)changeCount;
- (BOOL)changeNotificationDisabled;
- (id)changedDelegate;
- (BOOL)checkSpellingPreference;
- (BOOL)checkSpellingPreferenceForTraits;
- (void)cleanUpBeforeInputModeSwitch;
- (void)clearAnimations;
- (void)clearAutoDeleteTimer;
- (void)clearAutocorrectPromptTimer;
- (void)clearChangeTimeAndCount;
- (void)clearDelegate;
- (void)clearDetachHardwareKeyboardAction;
- (void)clearExcessKeyboardMemory;
- (void)clearInput;
- (void)clearInputForMarkedText;
- (void)clearLanguageIndicator;
- (void)clearLayouts;
- (void)clearLongPressTimer;
- (void)clearRecentInput;
- (void)clearSelection;
- (void)clearShiftState;
- (void)clearTimers;
- (void)clearTransientState;
- (void)collapseSelection;
- (void)collapseSelectionAndAdjustByOffset:(int)arg1;
- (BOOL)committingCandidate;
- (void)completeAcceptCandidate:(id)arg1;
- (void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2;
- (void)completeAddInputString:(id)arg1;
- (void)completeAddInputString:(id)arg1 generateCandidates:(BOOL)arg2;
- (void)completeDeleteFromInput;
- (void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned long)arg1;
- (void)completeHandleAutoDelete;
- (void)completeHandleKeyEvent:(id)arg1;
- (void)completeUpdateForChangedSelection:(BOOL)arg1;
- (void)composeTypologyRadar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (BOOL)currentKeyboardTraitsAllowCandidateBar;
- (void)dealloc;
- (void)defaultsDidChange;
- (id)deferredDidSetDelegateAction;
- (id)delayedCandidateRequest;
- (void)delayedInit;
- (id)delegate;
- (id)delegateAsResponder;
- (BOOL)delegateIsSMSTextView;
- (BOOL)delegateSuggestionsForCurrentInput;
- (BOOL)delegateSupportsCorrectionUI;
- (void)deleteBackward;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (void)deleteForwardAndNotify:(BOOL)arg1;
- (void)deleteFromInput;
- (void)deleteFromInputWithFlags:(unsigned int)arg1;
- (void)deleteFromInputWithFlags:(unsigned int)arg1 executionContext:(id)arg2;
- (void)deleteHandwritingStrokesAtIndexes:(id)arg1;
- (void)deleteOnceFromInputWithExecutionContext:(id)arg1;
- (id)desirableInputModesWithExtensions:(BOOL)arg1;
- (void)detach;
- (void)detachHardwareKeyboard;
- (void)didAcceptAutocorrection:(id)arg1 wordTerminator:(id)arg2;
- (void)didApplyAutocorrection:(id)arg1 autocorrectPromptFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)didChangePhraseBoundary;
- (void)didHandleWebKeyEvent;
- (void)didHandleWebKeyEvent:(id)arg1;
- (void)didMoveToSuperview;
- (void)didSetDelegate;
- (void)dismissKeyboard;
- (BOOL)displaysCandidates;
- (BOOL)doubleSpacePeriodPreference;
- (struct CGSize { float x1; float x2; })dragGestureSize;
- (id)dynamicCaretList;
- (void)ejectKeyDown;
- (void)enable;
- (id /* block */)externalTask;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)fadeAutocorrectPrompt;
- (void)finishLayoutChangeWithArguments:(id)arg1;
- (void)finishLayoutToCurrentInterfaceOrientation;
- (void)finishSetExtensionInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)finishSetInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)finishSetKeyboardInputMode:(id)arg1 didChangeDirection:(BOOL)arg2;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)finishTextChanged;
- (void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1;
- (void)flushTouchEventWaitingForKeyInputEventIfNecessary;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateAutocorrectionWithExecutionContext:(id)arg1;
- (void)generateAutocorrectionsWithCompletionHandler:(id /* block */)arg1;
- (void)generateCandidates;
- (void)generateCandidatesAsynchronously;
- (void)generateCandidatesAsynchronouslyWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 selectedCandidate:(id)arg2;
- (void)generateCandidatesFromReplacements;
- (void)generateCandidatesWithOptions:(int)arg1;
- (void)generateReplacementsForString:(id)arg1 candidatesHandler:(id /* block */)arg2 executionContext:(id)arg3;
- (void)geometryChangeDone:(BOOL)arg1;
- (id)geometryDelegate;
- (BOOL)geometryIsChanging;
- (void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2;
- (void)handleAutoDeleteWithExecutionContext:(id)arg1;
- (void)handleClear;
- (void)handleClearWithExecutionContext:(id)arg1;
- (void)handleClearWithInsertBeforeAdvance:(id)arg1;
- (void)handleDelayedActionLongPress;
- (void)handleDelete;
- (void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2;
- (id)handleDeleteAutospaceForInputString:(id)arg1 afterSpace:(BOOL)arg2;
- (void)handleDeleteWithExecutionContext:(id)arg1;
- (void)handleDeletionForCandidate:(id)arg1;
- (id)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2;
- (BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2 beforePublicKeyCommands:(BOOL)arg3;
- (void)handleKeyEvent:(id)arg1;
- (void)handleKeyEvent:(id)arg1 executionContext:(id)arg2;
- (void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3;
- (void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2;
- (void)handleObserverCallback;
- (id)handleReplacement:(id)arg1 forSpaceAndInput:(id)arg2;
- (void)handleStringInput:(id)arg1 withFlags:(unsigned int)arg2 withInputManagerHint:(id)arg3 executionContext:(id)arg4;
- (BOOL)handleTabWithShift:(BOOL)arg1;
- (BOOL)handleTabWithShift:(BOOL)arg1 beforePublicKeyCommands:(BOOL)arg2;
- (BOOL)handlingKeyCommandFromHardwareKeyboard;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)hardwareKeyboardIsSeen;
- (id)hardwareKeyboardsSeenPreference;
- (id)hardwareRepeatEvent;
- (id)hardwareRepeatTask;
- (BOOL)hasAutoRepeat;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (BOOL)hideAccessoryViewsDuringSplit;
- (void)hideKeyboard;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (id)inputEventForInputString:(id)arg1;
- (id)inputManager;
- (void)inputManagerDidGenerateAutocorrections:(id)arg1 executionContext:(id)arg2;
- (void)inputManagerDidGenerateCandidatesForRequest:(id)arg1 resultSet:(id)arg2;
- (id)inputManagerState;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (id)inputOverlayContainer;
- (id)inputStringFromPhraseBoundary;
- (id)inputWordForTerminatorAtSelection;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (void)installRecorder;
- (BOOL)isAutoDeleteActive;
- (BOOL)isAutoFillMode;
- (BOOL)isAutoShifted;
- (BOOL)isInHardwareKeyboardMode;
- (BOOL)isLongPress;
- (BOOL)isMinimized;
- (BOOL)isSelectionAtSentenceAutoshiftBoundary;
- (BOOL)isShiftLocked;
- (BOOL)isShifted;
- (BOOL)isUsingDictationLayout;
- (BOOL)isValidKeyInput:(id)arg1;
- (void)jumpToCompositions;
- (void)keyActivated;
- (void)keyDeactivated;
- (id)keyboardAlertView;
- (void)keyboardDidHide:(id)arg1;
- (BOOL)keyboardDrawsOpaque;
- (BOOL)keyboardIsKeyPad;
- (BOOL)keyboardRecordingEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)layoutForKeyHitTest;
- (void)layoutHasChanged;
- (id)layoutState;
- (id)legacyInputDelegate;
- (void)logHandwritingData;
- (void)longPressAction;
- (id)markedText;
- (id)markedTextOverlay;
- (unsigned int)minimumTouchesForTranslation;
- (void)moveCursorByAmount:(int)arg1;
- (void)moveCursorLeftShifted:(BOOL)arg1;
- (void)moveCursorRightShifted:(BOOL)arg1;
- (void)movePhraseBoundaryToDirection:(int)arg1;
- (void)moveSelectionToEndOfWord;
- (BOOL)needsKeyHitTestResults;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (BOOL)nextCharacterIsWordCharacter;
- (BOOL)noContent;
- (void)notifyShiftState;
- (void)performHitTestForTouchEvent:(id)arg1 executionContextPassingNSNumber:(id)arg2;
- (void)performKeyBehaviorConfirm;
- (void)performKeyBehaviorConfirmFirstCandidate;
- (void)performKeyboardOutput:(id)arg1;
- (BOOL)performanceLoggingPreference;
- (unsigned int)phraseBoundary;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)predictionForTraits;
- (BOOL)predictionPreferenceForTraits;
- (void)prepareForGeometryChange;
- (void)prepareForSelectionChange;
- (void)prepareLayoutForInterfaceOrientation:(int)arg1;
- (id)privateInputDelegate;
- (id)privateKeyInputDelegate;
- (BOOL)receivedCandidatesInCurrentInputMode;
- (void)recomputeActiveInputModesWithExtensions:(BOOL)arg1;
- (id)recorder;
- (void)refreshKeyboardState;
- (void)refreshRivenPreferences;
- (void)reinitializeAfterInputModeSwitch:(BOOL)arg1;
- (void)rejectAutocorrection:(id)arg1;
- (void)releaseInputManager;
- (void)releaseInputManagerIfInactive;
- (void)releaseSuppressUpdateCandidateView;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeAllDynamicDictionaries;
- (void)removeAutocorrectPrompt;
- (void)removeAutocorrectPromptAndCandidateList;
- (void)removeAutocorrection;
- (void)removeCandidateList;
- (void)removeFromSuperview;
- (void)replaceText:(id)arg1;
- (id)replacementsFromSelectedText;
- (void)resizeCandidateBarWithDelta:(float)arg1;
- (void)responseContextDidChange;
- (id)returnKeyDisplayName;
- (BOOL)returnKeyEnabled;
- (int)returnKeyType;
- (void)revealHiddenCandidates;
- (BOOL)rivenSplitLock;
- (void)saveInputModesPreference:(id)arg1;
- (void)scheduleReplacementsAfterDeletionToEndOfWord;
- (void)scheduleReplacementsWithOptions:(unsigned int)arg1;
- (id)searchStringForMarkedText;
- (void)selectionDidChange:(id)arg1;
- (BOOL)selectionIsEndOfWord;
- (void)selectionScrolling:(id)arg1;
- (id)selectionView;
- (void)selectionWillChange:(id)arg1;
- (void)sendCallbacksForPostCorrectionsRemoval;
- (void)sendCallbacksForPreCorrectionsDisplay;
- (void)setArrowKeyHistory:(id)arg1;
- (void)setAutocorrectPromptTask:(id)arg1;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)setAutocorrectionList:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2;
- (void)setCandidateRequestInfo:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setCapsLockIfNeeded;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (void)setChanged;
- (void)setChangedDelegate:(id)arg1;
- (void)setCommittingCandidate:(BOOL)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDeferredDidSetDelegateAction:(id)arg1;
- (void)setDelayedCandidateRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (void)setDocumentStateForAutocorrection:(id)arg1;
- (void)setExternalTask:(id /* block */)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometryDelegate:(id)arg1;
- (void)setGeometryIsChanging:(BOOL)arg1;
- (void)setHandlingKeyCommandFromHardwareKeyboard:(BOOL)arg1;
- (void)setHardwareKeyboardIsSeen:(BOOL)arg1;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (void)setHardwareRepeatEvent:(id)arg1;
- (void)setHardwareRepeatTask:(id)arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setInSplitKeyboardMode:(BOOL)arg1;
- (void)setInitialDirection;
- (void)setInputManagerFromCurrentInputMode;
- (void)setInputManagerState:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4;
- (void)setInputModeFromPreferences;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKeyboardAlertView:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLayoutForKeyHitTest:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inputString:(id)arg3 searchString:(id)arg4;
- (void)setPreviousInputString:(id)arg1;
- (void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1;
- (void)setRecorder:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setRivenSplitLock:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShift:(BOOL)arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftOffIfNeeded;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShouldSetInputModeInNextRun:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (void)setShowInputModeIndicator:(BOOL)arg1;
- (void)setShowsCandidateBar:(BOOL)arg1;
- (void)setShowsCandidateInline:(BOOL)arg1;
- (void)setSoftwareKeyboardShownByTouch:(BOOL)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSplitProgress:(float)arg1;
- (void)setSuppressUpdateLayout:(BOOL)arg1;
- (void)setTextInputChangesIgnored:(BOOL)arg1;
- (void)setTextSelectionController:(id)arg1;
- (void)setTextSelectionControllerFromDelegate;
- (void)setTouchEventWaitingForKeyInputEvent:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (void)setUserSelectedCurrentCandidate:(BOOL)arg1;
- (void)setUsesCandidateSelection:(BOOL)arg1;
- (BOOL)shiftLockPreference;
- (BOOL)shiftLockedEnabled;
- (BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2;
- (BOOL)shouldAllowRepeatEvent:(id)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 toBegin:(BOOL)arg3;
- (BOOL)shouldApplyAcceptedAutocorrection:(id)arg1;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned long)arg1;
- (BOOL)shouldGenerateCandidatesAfterSelectionChange;
- (BOOL)shouldSetInputModeInNextRun;
- (BOOL)shouldShowCandidateBar;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSwitchFromInputManagerMode:(id)arg1 toInputMode:(id)arg2;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (BOOL)shouldUseCarPlayModes;
- (void)showInformationalAlertIfNeededForReason:(int)arg1;
- (BOOL)showInputModeIndicator;
- (void)showInternationalKeyInfoAlertIfNeeded;
- (void)showKeyboard;
- (void)showKeyboardIfNeeded;
- (void)showNextCandidates;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (BOOL)showsCandidateBar;
- (BOOL)showsCandidateInline;
- (void)skipHitTestForTouchEvent:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2;
- (BOOL)softwareKeyboardShownByTouch;
- (BOOL)splitTransitionInProgress;
- (void)startAutoDeleteTimer;
- (void)startCaretBlinkIfNeeded;
- (void)startKeyboardRecording;
- (void)stopAutoDelete;
- (void)stopKeyboardRecording;
- (void)storeDelegateConformance;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)suppliesCompletions;
- (BOOL)supportsNumberKeySelection;
- (BOOL)suppressUpdateLayout;
- (BOOL)swipeToTabPreference;
- (void)syncDocumentStateToInputDelegate;
- (void)syncDocumentStateToInputDelegateWithExecutionContext:(id)arg1;
- (void)syncInputManagerToAcceptedAutocorrection:(id)arg1 forInput:(id)arg2;
- (void)syncInputManagerToKeyboardState;
- (void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1;
- (void)syncKeyboardToConfiguration:(id)arg1;
- (void)takeTextInputTraitsFromDelegate;
- (id)taskQueue;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)textChanged:(id)arg1 executionContext:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)textFrameChanged:(id)arg1;
- (int)textInputChangingCount;
- (id)textInputTraits;
- (id)textInteractionAssistant;
- (id)textSelectionController;
- (void)textWillChange:(id)arg1;
- (void)timeElapsed:(unsigned int)arg1 message:(id)arg2;
- (void)timeMark:(unsigned int)arg1;
- (void)timeMark:(unsigned int)arg1 message:(id)arg2;
- (double)timestampOfLastTouchesEnded;
- (void)toggleShift;
- (void)toggleSoftwareKeyboard;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)touchAutocorrectPromptTimer;
- (id)touchEventWaitingForKeyInputEvent;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2;
- (void)trackUsageForCandidateAcceptedAction:(id)arg1;
- (void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3;
- (BOOL)transitionInProgress;
- (void)unmarkText;
- (void)unmarkText:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)updateAutocorrectPrompt:(id)arg1 correctionRects:(id)arg2;
- (void)updateAutocorrectPrompt:(id)arg1 executionContext:(id)arg2;
- (void)updateCandidateDisplay;
- (void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1;
- (void)updateChangeTimeAndIncrementCount;
- (void)updateDoubleSpacePeriodStateForCharacter:(unsigned long)arg1;
- (void)updateDoubleSpacePeriodStateForString:(id)arg1;
- (void)updateForChangedSelection;
- (void)updateForChangedSelectionWithExecutionContext:(id)arg1;
- (void)updateFromTextInputTraits;
- (void)updateHardwareKeyboardLayout;
- (void)updateInputManagerAutocapitalizationType;
- (void)updateInputManagerMode;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2;
- (void)updateInputModeLastChosenPreference;
- (id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3;
- (void)updateKeyboardConfigurations;
- (void)updateKeyboardEventsLagging:(id)arg1;
- (void)updateKeyboardStateForDeletion;
- (void)updateKeyboardStateForInsertion:(id)arg1;
- (void)updateLayout;
- (void)updateLayoutAndSetShift;
- (void)updateLayoutIfNecessary;
- (void)updateLayoutIfNeeded;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)updateNoContentViews;
- (void)updateObserverState;
- (void)updatePredictionView;
- (void)updateReturnKey;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateShiftState;
- (void)updateStylingTraitsIfNeeded;
- (void)updateTextCandidateView;
- (BOOL)userSelectedCurrentCandidate;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesAutocorrectionLists;
- (BOOL)usesCandidateSelection;
- (void)willMoveToWindow:(id)arg1;
- (void)willReplaceTextInRangedSelectionWithKeyboardInput;

@end
