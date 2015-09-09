/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {
    <MKPlaceActionsViewControllerDelegate> *_actionDelegate;
    NSArray *_actions;
    MKMapItem *_mapItem;
    BOOL _showContactActions;
    BOOL _showCreateReminder;
    BOOL _showOpenInSkyline;
    BOOL _showRemovePin;
    BOOL _showReportAProblem;
    BOOL _showSharing;
    BOOL _showSimulateLocation;
}

@property (nonatomic) <MKPlaceActionsViewControllerDelegate> *actionDelegate;
@property (nonatomic, retain) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (nonatomic) BOOL showContactActions;
@property (nonatomic) BOOL showCreateReminder;
@property (nonatomic) BOOL showOpenInSkyline;
@property (nonatomic) BOOL showRemovePin;
@property (nonatomic) BOOL showReportAProblem;
@property (nonatomic) BOOL showSharing;
@property (nonatomic) BOOL showSimulateLocation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionDelegate;
- (id)actions;
- (id)init;
- (id)mapItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setActionDelegate:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setShowContactActions:(BOOL)arg1;
- (void)setShowCreateReminder:(BOOL)arg1;
- (void)setShowOpenInSkyline:(BOOL)arg1;
- (void)setShowRemovePin:(BOOL)arg1;
- (void)setShowReportAProblem:(BOOL)arg1;
- (void)setShowSharing:(BOOL)arg1;
- (void)setShowSimulateLocation:(BOOL)arg1;
- (BOOL)showContactActions;
- (BOOL)showCreateReminder;
- (BOOL)showOpenInSkyline;
- (BOOL)showRemovePin;
- (BOOL)showReportAProblem;
- (BOOL)showSharing;
- (BOOL)showSimulateLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateActions;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
