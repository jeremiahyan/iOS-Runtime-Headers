/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABUnknownPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    void *_addressBook;
    BOOL _allowsActions;
    BOOL _allowsAddingToAddressBook;
    BOOL _allowsConferencing;
    BOOL _allowsContactBlocking;
    BOOL _allowsSharing;
    NSString *_alternateName;
    CNContactViewController *_cnContactViewController;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    void *_displayedPerson;
    NSArray *_displayedProperties;
    ABUIPerson *_displayedUIPerson;
    ABPersonViewControllerHelper *_helper;
    NSString *_message;
    UIView *_personHeaderView;
    NSString *_primaryCNProperty;
    NSString *_primaryCountryCode;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    int _style;
    <ABStyleProvider> *_styleProvider;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    NSMutableArray *_unmergedRecords;
    UITableView *_vCardTableView;
    NSArray *_vCards;
    NSArray *_vCardsProperties;
}

@property (nonatomic, readonly) ABPersonTableViewActionsDelegate *actionsDelegate;
@property (nonatomic) const void*addressBook;
@property (nonatomic) BOOL allowsActions;
@property (nonatomic) BOOL allowsAddingToAddressBook;
@property (nonatomic) BOOL allowsConferencing;
@property (nonatomic) BOOL allowsContactBlocking;
@property (nonatomic) BOOL allowsSharing;
@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, copy) NSString *attribution;
@property (nonatomic) BOOL badgeEmailPropertiesForMailVIP;
@property (nonatomic, readonly) BOOL canShareContact;
@property (nonatomic, retain) CNContactViewController *cnContactViewController;
@property (nonatomic, retain) ABContactViewController *contactViewController;
@property (nonatomic, retain) UIView *customFooterView;
@property (nonatomic, retain) UIView *customHeaderView;
@property (nonatomic, retain) UIView *customMessageView;
@property (nonatomic, readonly) ABPersonTableViewDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) const void*displayedPerson;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (nonatomic, retain) ABUIPerson *displayedUIPerson;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) ABPersonViewControllerHelper *helper;
@property (nonatomic) BOOL isLocation;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageDetail;
@property (nonatomic, retain) UIFont *messageDetailFont;
@property (nonatomic, retain) UIFont *messageFont;
@property (nonatomic, retain) UIView *personHeaderView;
@property (nonatomic, retain) NSString *primaryCNProperty;
@property (nonatomic, retain) NSString *primaryCountryCode;
@property (nonatomic) BOOL savesNewContactOnSuspend;
@property (nonatomic, retain) UIImage *shareLocationSnapshotImage;
@property (nonatomic, copy) NSString *shareLocationURL;
@property (nonatomic, copy) NSString *shareMessageBody;
@property (nonatomic) BOOL shareMessageBodyIsHTML;
@property (nonatomic, copy) NSString *shareMessageSubject;
@property (nonatomic, readonly) ABPersonTableViewSharingDelegate *sharingDelegate;
@property (nonatomic) BOOL shouldAlignPersonHeaderViewToImage;
@property (nonatomic) int style;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic) <ABUnknownPersonViewControllerDelegate> *unknownPersonViewDelegate;
@property (nonatomic, retain) NSMutableArray *unmergedRecords;
@property (nonatomic, retain) UITableView *vCardTableView;
@property (nonatomic, retain) NSArray *vCards;
@property (nonatomic, retain) NSArray *vCardsProperties;
@property (nonatomic, copy) id /* block */ willTweetLocationCallback;
@property (nonatomic, copy) id /* block */ willWeiboLocationCallback;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (int)abViewControllerType;
- (float)ab_heightToFitForViewInPopoverView;
- (id)actionsDelegate;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(int)arg4 destructive:(BOOL)arg5;
- (void)addToExistingContacts;
- (void)addUnmergedRecords;
- (const void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsSharing;
- (id)alternateName;
- (id)attribution;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (BOOL)canShareContact;
- (id)cnContactViewController;
- (id)contactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (void)createNewContacts;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (const void*)displayedPerson;
- (id)displayedProperties;
- (id)displayedUIPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)findMatchingCardsForRecord:(void*)arg1;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (id)initWithVCardData:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isLocation;
- (void)loadContactViewController;
- (void)loadView;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)newActionButton;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)presentAddToContactsSheet;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentShareContactSheet;
- (id)primaryCNProperty;
- (id)primaryCountryCode;
- (id)primaryPropertyStringForContact:(id)arg1;
- (void)reloadImageData;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(int)arg3;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(int)arg6 destructive:(BOOL)arg7;
- (BOOL)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setCnContactViewController:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryCNProperty:(id)arg1;
- (void)setPrimaryCountryCode:(id)arg1;
- (void)setPrimaryProperty:(int)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setUnmergedRecords:(id)arg1;
- (void)setVCardTableView:(id)arg1;
- (void)setVCards:(id)arg1;
- (void)setVCardsProperties:(id)arg1;
- (void)setWillTweetLocationCallback:(id /* block */)arg1;
- (void)setWillWeiboLocationCallback:(id /* block */)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)sharingDelegate;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (void)showUnmergedContactsAlert;
- (int)style;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)unknownPersonViewDelegate;
- (id)unmergedRecords;
- (id)vCardTableView;
- (id)vCards;
- (id)vCardsProperties;
- (void)viewDidAppear:(BOOL)arg1;
- (id /* block */)willTweetLocationCallback;
- (id /* block */)willWeiboLocationCallback;

@end
