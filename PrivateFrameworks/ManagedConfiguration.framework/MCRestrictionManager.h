/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCRestrictionManager : NSObject {
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueClientRestrictions;
    NSMutableDictionary *_memberQueueEffectiveUserSettings;
    NSMutableDictionary *_memberQueueProfileRestrictions;
    NSMutableDictionary *_memberQueueRestrictions;
    NSMutableDictionary *_memberQueueUserSettings;
}

@property (nonatomic, readonly, copy) NSDictionary *combinedProfileRestrictions;
@property (nonatomic, readonly) NSDictionary *currentRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultSettings;
@property (nonatomic, readonly, copy) NSDictionary *effectiveUserSettings;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSMutableDictionary *memberQueueClientRestrictions;
@property (nonatomic, readonly) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueEffectiveUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserSettings;
@property (nonatomic, readonly, copy) NSDictionary *profileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *userSettings;

+ (id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(BOOL)arg3 mayOpenFromUnmanagedToManaged:(BOOL)arg4 mayOpenFromManagedToUnmanaged:(BOOL)arg5;
+ (id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(BOOL)arg4 mayOpenFromUnmanagedToManaged:(BOOL)arg5 mayOpenFromManagedToUnmanaged:(BOOL)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (int)appWhitelistStateWithSettingsDictionary:(id)arg1;
+ (BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 outAsk:(BOOL*)arg2 withUserSettingDictionary:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2;
+ (id)defaultIntersectedValuesForSetting:(id)arg1;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultParametersForIntersectedValuesSetting:(id)arg1;
+ (id)defaultParametersForUnionValuesSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (id)defaultRestrictionFilePath;
+ (id)defaultSettings;
+ (id)defaultUnionValuesForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2;
+ (id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)filterUserSettingsForPublicUse:(id)arg1;
+ (BOOL)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2;
+ (BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg1;
+ (BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1;
+ (BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2;
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6;
+ (id)sharedManager;
+ (BOOL)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (BOOL)_isBoolSettingLockedDown:(id)arg1;
- (BOOL)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2;
- (id)allClientUUIDsForClientType:(id)arg1;
- (int)appWhitelistState;
- (int)boolSettingForFeature:(id)arg1;
- (id)clientRestrictions;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)combinedProfileRestrictions;
- (id)currentRestrictions;
- (id)defaultRestrictions;
- (id)defaultSettings;
- (id)description;
- (id)effectiveIntersectedValuesForSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForIntersectedSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (id)effectiveUnionValuesForSetting:(id)arg1;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (id)exchangeUUIDsRestrictingSettings:(id)arg1;
- (id)init;
- (id)intersectedValuesForFeature:(id)arg1;
- (id)intersectedValuesSettingForFeature:(id)arg1;
- (void)invalidateRestrictions;
- (void)invalidateSettings;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (id)memberQueue;
- (id)memberQueueClientRestrictions;
- (id)memberQueueClientRestrictionsForClientUUID:(id)arg1;
- (id)memberQueueClientTypeForClientUUID:(id)arg1;
- (id)memberQueueCombinedProfileRestrictions;
- (void)memberQueueCommitUserSettingsToDisk;
- (id)memberQueueEffectiveUserSettings;
- (id)memberQueueProfileRestrictions;
- (id)memberQueueRestrictions;
- (id)memberQueueUserInfoForClientUUID:(id)arg1;
- (id)memberQueueUserSettings;
- (id)objectForFeature:(id)arg1;
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3;
- (id)profileIdentifiersRestrictingSettings:(id)arg1;
- (id)profileRestrictions;
- (int)restrictedBoolForFeature:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueClientRestrictions:(id)arg1;
- (void)setMemberQueueEffectiveUserSettings:(id)arg1;
- (void)setMemberQueueProfileRestrictions:(id)arg1;
- (void)setMemberQueueRestrictions:(id)arg1;
- (void)setMemberQueueUserSettings:(id)arg1;
- (id)unionValuesForFeature:(id)arg1;
- (id)unionValuesSettingForFeature:(id)arg1;
- (id)userInfoForClientUUID:(id)arg1;
- (id)userSettings;
- (id)valueForFeature:(id)arg1;
- (id)valueSettingForFeature:(id)arg1;

@end
