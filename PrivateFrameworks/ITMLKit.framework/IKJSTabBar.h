/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTabBar : IKJSObject <IKJSTabBar, JSExport> {
    IKAppTabBar *_appTabBar;
    NSArray *_tabItems;
}

@property (nonatomic, readonly) IKAppTabBar *appTabBar;
@property (nonatomic, retain) IKJSTabBarItem *selectedTab;
@property (retain) NSArray *tabItems;
@property (nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) IKJSTabBarItem *transientTab;

- (void).cxx_destruct;
- (void)_reload;
- (id)appTabBar;
- (id)initWithAppContext:(id)arg1 appTabBar:(id)arg2;
- (void)onReload;
- (void)onSelect;
- (id)selectedTab;
- (void)setSelectedTab:(id)arg1;
- (void)setTabItems:(id)arg1;
- (id)tabItems;
- (id)tabs;
- (id)transientTab;

@end
