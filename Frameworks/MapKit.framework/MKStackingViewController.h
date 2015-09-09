/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKStackingViewController : UIViewController <UIScrollViewDelegate> {
    _MKStackingContentView *_contentView;
    unsigned int _countOfCurrentLayoutInvocations;
    _MKStackingPlaceholderView *_headerPlaceholderView;
    UIView *_headerView;
    NSLayoutConstraint *_heightCompressionResistanceConstraint;
    NSLayoutConstraint *_heightHuggingConstraint;
    BOOL _isBuildingView;
    BOOL _isComputingInitialViewControllerPreferredHeight;
    BOOL _isScrollingProgrammaticallyToViewController;
    UIScrollView *_scrollView;
    UIViewController *_selectedViewController;
    _MKStackingPlaceholderView *_selectorPlaceholderView;
    UIView *_selectorView;
    _MKStackView *_stackView;
    <MKStackingViewControllerDelegate> *_stackingDelegate;
    NSMapTable *_titleHeaderViewsByViewController;
    UIView *_titleView;
    NSArray *_titleViewConstraints;
    NSArray *_viewControllers;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMutableSet *_viewControllersWithObservedTitles;
    NSLayoutConstraint *_widthConstraint;
    BOOL _willRelayoutForPreferredContentSizeChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) UIViewController *selectedViewController;
@property (nonatomic, retain) UIView *selectorView;
@property (nonatomic) <MKStackingViewControllerDelegate> *stackingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_addTitleViewToHierarchyIfPossible;
- (void)_didScroll;
- (float)_fittingHeightForView:(id)arg1;
- (float)_headerHeight;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_repositionNonstackedSubviews;
- (void)_scrollToViewControllerAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (float)_selectorHeight;
- (void)_setPreferredHeight:(float)arg1 forViewController:(id)arg2;
- (void)_setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setUpEnteringViewController:(id)arg1;
- (void)_tearDownExitingViewController:(id)arg1;
- (float)_titleHeight;
- (float)_topLayoutGuide;
- (void)_updateSelectedViewControllerAfterPositionChange;
- (void)_updateSelectorView;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)dealloc;
- (id)headerView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performUserSelectionForViewControllerAtIndex:(unsigned int)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedViewController;
- (id)selectorView;
- (void)setHeaderView:(id)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setSelectedViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectorView:(id)arg1;
- (void)setSelectorViewNeedsUpdate;
- (void)setStackingDelegate:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (id)stackingDelegate;
- (id)titleView;
- (void)updateViewConstraints;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
