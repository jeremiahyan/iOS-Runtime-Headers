/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageGroupController : NSObject <PSSpecifierGroupController, UsageFeedDelegate> {
    PSExpandableAppListGroupController *_appGroupController;
    BOOL _cancelled;
    NSArray *_cellularDataSwitches;
    BOOL _enabled;
    NSArray *_managedBundleIDs;
    BOOL _showInternalDetails;
    NSDictionary *_systemServiceCategoryNames;
    NSNumber *_totalBytesUsed;
    NSNumber *_totalRoamingBytesUsed;
}

@property (nonatomic, retain) PSExpandableAppListGroupController *appGroupController;
@property (getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) BOOL hasManagedCellularData;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *managedBundleIDs;
@property (nonatomic) BOOL showInternalDetails;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *systemServiceCategoryNames;
@property (nonatomic, retain) NSNumber *totalBytesUsed;
@property (nonatomic, retain) NSNumber *totalRoamingBytesUsed;

- (void).cxx_destruct;
- (void)_calculateUsageForSubscriberIdentifier:(id)arg1 inWorkspace:(id)arg2;
- (void)_categorizeApps:(id)arg1 completion:(id /* block */)arg2;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4;
- (void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2;
- (id)alwaysDisplayedBundleIdentifiers;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (id)appGroupController;
- (void)cancel;
- (id)dataUsageForApplicationSpecifier:(id)arg1;
- (id)forcedBundleIdentiferForBundleIdentifier:(id)arg1;
- (BOOL)hasManagedCellularData;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (BOOL)isCancelled;
- (BOOL)isEnabled;
- (id)managedBundleIDs;
- (id)managedCellularDataBundleIdentifiers;
- (id)nameForSpecialCategory:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setAppGroupController:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setManagedBundleIDs:(id)arg1;
- (void)setShowInternalDetails:(BOOL)arg1;
- (void)setSwitchesEnabled:(BOOL)arg1;
- (void)setSystemServiceCategoryNames:(id)arg1;
- (void)setTotalBytesUsed:(id)arg1;
- (void)setTotalRoamingBytesUsed:(id)arg1;
- (void)setWorkspaceInformation:(id)arg1;
- (BOOL)showInternalDetails;
- (id)specifierForApp:(id)arg1 enabled:(BOOL)arg2;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)specifiers;
- (id)systemServiceCategoryNames;
- (id)totalBytesUsed;
- (id)totalRoamingBytesUsed;

@end
