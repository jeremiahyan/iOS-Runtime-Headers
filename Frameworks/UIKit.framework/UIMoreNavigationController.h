/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoreNavigationController : UINavigationController {
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (nonatomic, readonly, retain) UIViewController *moreListController;
@property (nonatomic, retain) NSArray *moreViewControllers;
@property (nonatomic) BOOL moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (void)_ensureChildrenHaveParentViewController;
- (id)_preparedViewController:(id)arg1;
- (void)_redisplayMoreTableView;
- (void)_restoreOriginalNavigationController;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned int*)arg2;
- (void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (BOOL)allowsCustomizing;
- (void)dealloc;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)displayedViewController;
- (id)init;
- (id)moreListController;
- (id)moreViewControllers;
- (BOOL)moreViewControllersChanged;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)restoreOriginalNavigationController:(id)arg1;
- (void)setAllowsCustomizing:(BOOL)arg1;
- (void)setDisplayedViewController:(id)arg1;
- (void)setMoreViewControllers:(id)arg1;
- (void)setMoreViewControllersChanged:(BOOL)arg1;

@end
