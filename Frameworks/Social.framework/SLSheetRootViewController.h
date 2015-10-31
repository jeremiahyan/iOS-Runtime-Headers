/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetRootViewController : UIViewController <SLComposeSheetConfigurationItemObserving, UITableViewDataSource, UITableViewDelegate> {
    UIViewController *_autoCompletionViewController;
    NSArray *_configurationItems;
    UIView *_contentView;
    SLComposeServiceViewController *_delegate;
    UINavigationItem *_navItem;
    UIImage *_serviceIconImage;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
}

@property (nonatomic, copy) NSArray *configurationItems;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) SLComposeServiceViewController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *serviceIconImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (float)_preferredTableViewHeight;
- (void)_updateCell:(id)arg1 withConfigurationItem:(id)arg2;
- (void)_updateCellForConfigurationItem:(id)arg1;
- (void)configurationItemDidChange:(id)arg1;
- (id)configurationItems;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id /* block */)arg1;
- (void)loadView;
- (id)navigationItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeConfigurationItems:(id)arg1;
- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(float)arg2 contentViewChangeBlock:(id /* block */)arg3;
- (void)resetConfigurationItems;
- (id)serviceIconImage;
- (void)setConfigurationItems:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPostButtonEnabled:(BOOL)arg1;
- (void)setPostButtonTitle:(id)arg1;
- (void)setServiceIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateContentViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
