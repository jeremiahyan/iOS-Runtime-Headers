/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudDataSyncManager : NSObject <APSConnectionDelegate, HMMessageReceiver> {
    BOOL _accountActive;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;
    id /* block */ _cloudDataDeletedNotificationHandler;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    BOOL _cloudHomeDataRecordExists;
    id /* block */ _cloudMetadataDeletedNotificationHandler;
    BOOL _cloudMetadataRecordExists;
    NSData *_cloudServerTokenData;
    HMMessageDispatcher *_configSyncDispatcher;
    CKContainer *_container;
    id /* block */ _controllerKeyAvailableNotificationHandler;
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;
    CKDatabase *_database;
    BOOL _decryptionFailed;
    id /* block */ _fetchCompletionHandler;
    CKRecordID *_homeDataBlobRecordID;
    CKRecordZone *_homeDataBlobRecordZone;
    CKSubscription *_homeDataBlobSubscription;
    CKRecord *_homeDataRecord;
    HMDHomeManager *_homeManager;
    NSString *_lastHomeDataChangeTag;
    NSString *_lastMetadataChangeTag;
    CKRecordID *_metadataBlobRecordID;
    CKRecord *_metadataRecord;
    HMMessageDispatcher *_msgDispatcher;
    BOOL _needConflictResolution;
    NSMutableArray *_pendingFetchedRecords;
    NSObject<OS_dispatch_source> *_pollTimer;
    APSConnection *_pushConnection;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) BOOL accountActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (nonatomic, copy) id /* block */ cloudDataDeletedNotificationHandler;
@property (nonatomic, retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic) BOOL cloudHomeDataRecordExists;
@property (nonatomic, copy) id /* block */ cloudMetadataDeletedNotificationHandler;
@property (nonatomic) BOOL cloudMetadataRecordExists;
@property (nonatomic, retain) NSData *cloudServerTokenData;
@property (nonatomic, retain) HMMessageDispatcher *configSyncDispatcher;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) id /* block */ controllerKeyAvailableNotificationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *controllerKeyPollTimer;
@property (nonatomic, retain) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL decryptionFailed;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CKRecordID *homeDataBlobRecordID;
@property (nonatomic, retain) CKRecordZone *homeDataBlobRecordZone;
@property (nonatomic, retain) CKSubscription *homeDataBlobSubscription;
@property (nonatomic, retain) CKRecord *homeDataRecord;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSString *lastHomeDataChangeTag;
@property (nonatomic, retain) NSString *lastMetadataChangeTag;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) CKRecordID *metadataBlobRecordID;
@property (nonatomic, retain) CKRecord *metadataRecord;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic) BOOL needConflictResolution;
@property (nonatomic, retain) NSMutableArray *pendingFetchedRecords;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *pollTimer;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, readonly) NSData *serverTokenData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_accountIsActive;
- (id)_changeTokenFromData:(id)arg1;
- (void)_createZoneAndFetchChanges:(id /* block */)arg1;
- (void)_fetchExistingRecord:(id /* block */)arg1;
- (void)_fetchNewChangesWithCompletionHandler:(id /* block */)arg1;
- (void)_handleAccountStatus:(int)arg1 completionHandler:(id /* block */)arg2 error:(id)arg3;
- (void)_handleChangedMetadataRecordWithEncodedData:(id)arg1;
- (void)_handleChangedRecordWithEncodedData:(id)arg1;
- (void)_handleControllerKeyAvailable;
- (void)_handleFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleKeychainSyncChanged:(id)arg1;
- (void)_handleKeychainSyncStateChanged:(BOOL)arg1;
- (BOOL)_isControllerKeyAvailable;
- (void)_registerForMessages;
- (void)_registerForPushNotifications;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_resetHomeDataRecordState;
- (void)_resetMetadataRecordState;
- (void)_setupSubscription;
- (void)_startControllerKeyPollTimer;
- (void)_startFetchPollTimer;
- (void)_stopControllerKeyPollTimer;
- (void)_stopFetchPollTimer;
- (void)_updateCloudDataSyncFilterState:(BOOL)arg1;
- (void)_uploadHomeData:(id)arg1 metadata:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)accountActive;
- (id)callbackQueue;
- (id)clientCallbackQueue;
- (id /* block */)cloudDataDeletedNotificationHandler;
- (id)cloudDataSyncStateFilter;
- (BOOL)cloudHomeDataRecordExists;
- (id /* block */)cloudMetadataDeletedNotificationHandler;
- (BOOL)cloudMetadataRecordExists;
- (id)cloudServerTokenData;
- (id)configSyncDispatcher;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)container;
- (id /* block */)controllerKeyAvailableNotificationHandler;
- (id)controllerKeyPollTimer;
- (id)convertCKErrorToHMError:(id)arg1;
- (id)database;
- (void)dealloc;
- (BOOL)decryptionFailed;
- (id /* block */)fetchCompletionHandler;
- (void)fetchCurrentAccountStateWithCompletionHandler:(id /* block */)arg1;
- (id)homeDataBlobRecordID;
- (id)homeDataBlobRecordZone;
- (id)homeDataBlobSubscription;
- (id)homeDataRecord;
- (id)homeManager;
- (id)initWithCloudServerTokenData:(id)arg1 messageDispatcher:(id)arg2 cloudDataSyncStateFilter:(id)arg3 homeManager:(id)arg4 callbackQueue:(id)arg5;
- (id)lastHomeDataChangeTag;
- (id)lastMetadataChangeTag;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)metadataBlobRecordID;
- (id)metadataRecord;
- (id)msgDispatcher;
- (BOOL)needConflictResolution;
- (id)pendingFetchedRecords;
- (id)pollTimer;
- (id)pushConnection;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)serverTokenData;
- (void)setAccountActive:(BOOL)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setClientCallbackQueue:(id)arg1;
- (void)setCloudDataDeletedNotificationBlock:(id /* block */)arg1;
- (void)setCloudDataDeletedNotificationHandler:(id /* block */)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudHomeDataRecordExists:(BOOL)arg1;
- (void)setCloudMetadataDeletedNotificationBlock:(id /* block */)arg1;
- (void)setCloudMetadataDeletedNotificationHandler:(id /* block */)arg1;
- (void)setCloudMetadataRecordExists:(BOOL)arg1;
- (void)setCloudServerTokenData:(id)arg1;
- (void)setConfigSyncDispatcher:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setControllerKeyAvailableNotificationBlock:(id /* block */)arg1;
- (void)setControllerKeyAvailableNotificationHandler:(id /* block */)arg1;
- (void)setControllerKeyPollTimer:(id)arg1;
- (void)setDataAvailableFromCloudCompletionBlock:(id /* block */)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDecryptionFailed:(BOOL)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setHomeDataBlobRecordID:(id)arg1;
- (void)setHomeDataBlobRecordZone:(id)arg1;
- (void)setHomeDataBlobSubscription:(id)arg1;
- (void)setHomeDataRecord:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLastHomeDataChangeTag:(id)arg1;
- (void)setLastMetadataChangeTag:(id)arg1;
- (void)setMetadataBlobRecordID:(id)arg1;
- (void)setMetadataRecord:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNeedConflictResolution:(BOOL)arg1;
- (void)setPendingFetchedRecords:(id)arg1;
- (void)setPollTimer:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateAccountStatusChanged:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadHomeData:(id)arg1 metadata:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)uuid;
- (id)workQueue;

@end
