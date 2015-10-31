/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, DevicePINControllerDelegate> {
    NSDictionary *_autoLockTitleDictionary;
    NSArray *_autoLockValues;
    CRCarPlayPreferences *_carPreferences;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    PSSpecifier *_siriSpecifier;
    PSUITVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    NSTimer *_usageTimer;
}

@property (nonatomic, retain) CRCarPlayPreferences *carPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)EDGEEnabled:(id)arg1;
- (BOOL)_hasCarPlayContent;
- (void)_localizeAutoLockTitles;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (id)carPreferences;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)enableEdge:(id)arg1;
- (void)handleCarPlayAllowedDidChange;
- (void)handleTVOutChange;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)locksAndUnlocksWithCase:(id)arg1;
- (id)parentalControlsEnabled:(id)arg1;
- (void)profileNotification:(id)arg1;
- (id)screenLock:(id)arg1;
- (void)setCarPreferences:(id)arg1;
- (void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2;
- (void)setScreenLock:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateAssistantSpecifiers;
- (void)updateAutoLockSpecifier;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
