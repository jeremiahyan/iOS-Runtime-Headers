/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableView : RUIElement <RUITableViewRowDelegate, RUITableViewSectionDelegate, UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate> {
    UIDatePicker *_datePicker;
    RUITableViewRow *_defaultFirstResponderRow;
    NSIndexPath *_embeddedPickerRowIndexPath;
    NSDictionary *_footerViewAttributes;
    float _fullscreenCellHeight;
    RUITableHeaderView *_headerView;
    NSDictionary *_headerViewAttributes;
    float _lastLayoutWidth;
    RUIObjectModel<RUITableViewDelegate> *_objectModel;
    RUIBarButtonItem *_oldLeftBarButtonItemForPicker;
    NSDate *_oldPickerDate;
    RUIBarButtonItem *_oldRightBarButtonItemForPicker;
    RUIPhotoPicker *_photoPicker;
    _UIBackdropView *_pickerBackdrop;
    NSIndexPath *_pickerRowIndexPath;
    BOOL _registeredForNotifications;
    NSMutableArray *_sections;
    UIPickerView *_selectPicker;
    BOOL _showDatePicker;
    BOOL _showSelectPicker;
    BOOL _showingPickerNavBarButtons;
    UITableView *_tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) RUITableViewRow *defaultFirstResponderRow;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *footerViewAttributes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, readonly) RUITableHeaderView *headerView;
@property (nonatomic, retain) NSDictionary *headerViewAttributes;
@property (nonatomic) RUIObjectModel<RUITableViewDelegate> *objectModel;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (getter=isShowingPicker, nonatomic, readonly) BOOL showingPicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_becomeFirstResponderAtIndexPath:(id)arg1;
- (void)_clearPickers;
- (void)_datePickerRevert;
- (void)_enumerateRowsUsingBlock:(id /* block */)arg1;
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2;
- (void)_hideDatePickerNavBarButtonsIfNeeded;
- (id)_objectModelIndexPathForIndexPath:(id)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectPickerFrame;
- (void)_setBottomInset:(float)arg1;
- (void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)automaticKeyboardDidHide:(id)arg1;
- (void)automaticKeyboardDidShow:(id)arg1;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerDone:(id)arg1;
- (void)dealloc;
- (id)defaultFirstResponderRow;
- (id)footerViewAttributes;
- (id)headerTitle;
- (id)headerView;
- (id)headerViewAttributes;
- (void)hidePickerViewAnimated:(BOOL)arg1;
- (id)indexPathForRow:(id)arg1;
- (id)init;
- (BOOL)isShowingPicker;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)objectModel;
- (id)objectModelRowForIndexPath:(id)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2;
- (void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id /* block */)arg3;
- (void)rowDidChange:(id)arg1;
- (void)rowDidEndEditing:(id)arg1;
- (void)rowIsFirstResponder:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sectionActivatedLink:(id)arg1 attributes:(id)arg2 completion:(id /* block */)arg3;
- (id)sections;
- (void)setAttributes:(id)arg1;
- (void)setDefaultFirstResponderRow:(id)arg1;
- (void)setFooterViewAttributes:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderViewAttributes:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setSelectedRadioGroupRow:(id)arg1;
- (void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2;
- (id)sourceURL;
- (id)sourceURLForRUITableViewRow;
- (id)sourceURLForRUITableViewSection;
- (id)subElementsWithName:(id)arg1;
- (Class)tableCellClassForTableViewRow:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textFieldRow:(id)arg1 changeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldStartedEditing:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end
