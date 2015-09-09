/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormDataController : WBSFormDataController <UIActionSheetDelegate> {
    BOOL _savePending;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldAutoFillFromAddressBook;
@property (nonatomic) BOOL shouldAutoFillFromCreditCardData;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly) Class superclass;

+ (BOOL)_isDevicePasscodeSet;
+ (BOOL)_isKeychainSyncEnabled;

- (id)_addressBookMatchesForProxyProperty:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_autoFillPreferencesDidChange;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (id)_meCard;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id*)arg3 matchesForCurrentHost:(id*)arg4;
- (void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1;
- (BOOL)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (BOOL)_shouldSaveUsernamesAndPasswordsInWebView:(id)arg1;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned int)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(BOOL)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 completionHandler:(id /* block */)arg8;
- (BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (BOOL)_webView:(id)arg1 formSubmission:(BOOL)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(id /* block */)arg5;
- (BOOL)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(BOOL)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 usernameIsAutoFilled:(BOOL)arg8 passwordIsAutoFilled:(BOOL)arg9 submissionHandler:(id /* block */)arg10;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(BOOL)arg7 confirmOverwritingCurrentPassword:(BOOL)arg8 submissionHandler:(id /* block */)arg9;
- (BOOL)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(BOOL)arg4 submissionHandler:(id /* block */)arg5;
- (BOOL)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id /* block */)arg4;
- (BOOL)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(BOOL)arg3 fromFrame:(id)arg4 usernameIsAutoFilled:(BOOL)arg5 passwordIsAutoFilled:(BOOL)arg6 submissionHandler:(id /* block */)arg7;
- (BOOL)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id /* block */)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)autoFillValuesForLoginForm:(id)arg1 inFrame:(id)arg2 potentialMatches:(id*)arg3;
- (void)clearAllFormCredentials;
- (id)completionDBPath;
- (void)dealloc;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (BOOL)mayFillCreditCardDataInFrame:(id)arg1;
- (BOOL)mayPreFillInFrame:(id)arg1;
- (void)prepareMeCard;
- (void)saveCompletionDBSoon;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(BOOL)arg3;
- (void)setShouldAutoFillFromAddressBook:(BOOL)arg1;
- (void)setShouldAutoFillFromCreditCardData:(BOOL)arg1;
- (void)setShouldAutoFillPasswords:(BOOL)arg1;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)shouldAutoFillFromCreditCardData;
- (BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoGeneratePasswordsInWebView:(id)arg1;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (BOOL)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(BOOL)arg4 usernameIsAutoFilled:(BOOL)arg5 passwordIsAutoFilled:(BOOL)arg6 submissionHandler:(id /* block */)arg7;

@end
