/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAppleServiceSession : IMDServiceSession {
    NSString *_GUID;
    NSString *_serviceName;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSArray *aliases;
@property (nonatomic, readonly, retain) NSString *callerID;
@property (nonatomic, readonly, retain) NSString *callerURI;
@property (nonatomic, readonly, retain) IDSAccount *idsAccount;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly, retain) NSArray *vettedAliases;

- (id)GUID;
- (id)_aliasStrings;
- (id)_aliases;
- (BOOL)_isDeviceRegistered;
- (void)_updateAccountStatusToUnregistered:(BOOL)arg1;
- (int)_validationStatusForAlias:(id)arg1;
- (void)activeDevicesUpdated;
- (void)addAliases:(id)arg1;
- (id)aliases;
- (void)authenticateAccount;
- (id)callerID;
- (id)callerURI;
- (id)certForURI:(id)arg1;
- (void)clearCallerID;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)idsAccount;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)loginServiceSession;
- (void)logoutServiceSession;
- (void)passwordUpdated;
- (void)reIdentify;
- (void)refreshRegistration;
- (void)registerAccount;
- (id)registeredURIs;
- (void)removeAliases:(id)arg1;
- (void)reregister;
- (id)serviceType;
- (void)sessionDidBecomeActive;
- (void)sessionWillBecomeInactive;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (int)validationStatusForAlias:(id)arg1;
- (id)vettedAliases;

@end
