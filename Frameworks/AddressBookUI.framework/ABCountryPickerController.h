/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {
    UILocalizedIndexedCollation *_collation;
    CNContactStyle *_contactStyle;
    NSArray *_countries;
    NSArray *_sections;
    NSString *_selectedCountryCode;
    UITableViewController *_tableViewController;
}

@property (nonatomic, retain) UILocalizedIndexedCollation *collation;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, copy) NSArray *countries;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABCountryPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic, copy) NSString *selectedCountryCode;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void)_configureSections;
- (void)_loadCountryCodes;
- (void)cancelPicker:(id)arg1;
- (id)collation;
- (id)contactStyle;
- (id)countries;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)sections;
- (id)selectedCountryCode;
- (void)setCollation:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setCountries:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (id)tableViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end