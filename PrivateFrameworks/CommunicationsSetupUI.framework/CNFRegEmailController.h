/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier *_actionGroupSpecifier;
    NSArray *_checkMailSpecifiers;
    PSSpecifier *_currentActionSpecifier;
    PSSpecifier *_emailSpecifier;
    NSString *_pendingAlias;
    BOOL _validating;
    NSTimer *_validationTimeoutTimer;
}

@property (nonatomic, copy) NSString *pendingAlias;

- (void).cxx_destruct;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleValidationModeCancelled;
- (BOOL)_phoneNumberInAliases:(id)arg1;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupEventHandlers;
- (void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)aliasSpecifiers;
- (id)bundle;
- (void)checkMailTapped:(id)arg1;
- (void)dealloc;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)emailFieldIsEmpty;
- (id)emailTextField;
- (id)logName;
- (void)nextTapped;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)pendingAlias;
- (id)pendingAliasForSpecifier:(id)arg1;
- (id)selectedAliases;
- (void)setAliasSelected:(id)arg1;
- (void)setPendingAlias:(id)arg1;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)shouldShowAllVettedAliases;
- (BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2;
- (id)specifierList;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)timeoutDuration;
- (id)titleString;
- (void)validationTimeout:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
