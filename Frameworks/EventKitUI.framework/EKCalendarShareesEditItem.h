/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareePickerViewControllerDelegate, EKShareeViewControllerDelegate> {
    UILabel *_descriptionLabel;
    UIView *_footerView;
    NSMutableArray *_shareeCells;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *shareeCells;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addPersonCell;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_popBackToCalendarEditor:(BOOL)arg1;
- (id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3;
- (id)_stringForShareeAccessLevel:(int)arg1;
- (id)_stringForShareeStatus:(int)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)eventStoreForShareePickerViewController:(id)arg1;
- (float)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (id)headerTitle;
- (void)layoutForWidth:(float)arg1;
- (unsigned int)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setShareeCells:(id)arg1;
- (id)shareeCells;
- (void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewControllerDidChangeAccessLevel:(id)arg1;

@end
