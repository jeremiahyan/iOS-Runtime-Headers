/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditViewController : UINavigationController {
    <EKEventEditViewDelegate> *_editViewDelegate;
    EKEventEditor *_editor;
    EKEvent *_event;
    NSString *_eventId;
    EKEventStore *_store;
    EKEventEditViewController *_strongSelf;
    int _transitionForModalViewPresentation;
}

@property (nonatomic) BOOL canHideDoneAndCancelButtons;
@property (nonatomic) <EKEventEditViewDelegate> *editViewDelegate;
@property (nonatomic, retain) EKEventEditor *editor;
@property (nonatomic, retain) UIColor *editorBackgroundColor;
@property (nonatomic) float editorNavBarLeftContentInset;
@property (nonatomic) float editorNavBarRightContentInset;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) BOOL scrollToNotes;
@property (nonatomic) BOOL showAttachments;
@property (nonatomic, retain) EKEventEditViewController *strongSelf;
@property (nonatomic) int transitionForModalViewPresentation;

+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_storeChanged:(id)arg1;
- (BOOL)canHideDoneAndCancelButtons;
- (void)cancelEditing;
- (void)completeAndSave;
- (void)dealloc;
- (id)editViewDelegate;
- (id)editor;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)editorBackgroundColor;
- (float)editorNavBarLeftContentInset;
- (float)editorNavBarRightContentInset;
- (id)event;
- (id)eventStore;
- (void)handleTapOutside;
- (BOOL)hasUnsavedChanges;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToNotes;
- (void)setCanHideDoneAndCancelButtons:(BOOL)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEditorBackgroundColor:(id)arg1;
- (void)setEditorNavBarLeftContentInset:(float)arg1;
- (void)setEditorNavBarRightContentInset:(float)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setShowAttachments:(BOOL)arg1;
- (void)setStrongSelf:(id)arg1;
- (void)setTransitionForModalViewPresentation:(int)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)showAttachments;
- (id)strongSelf;
- (unsigned int)supportedInterfaceOrientations;
- (int)transitionForModalViewPresentation;
- (BOOL)willPresentDialogOnSave;

@end
