/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeManager : NSObject <HMMessageReceiver> {
    NSMutableArray *_currentHomes;
    <HMHomeManagerDelegate> *_delegate;
    BOOL _fetchInProgress;
    unsigned int _generationCounter;
    unsigned int _metadataVersion;
    HMMessageDispatcher *_msgDispatcher;
    HMPendingRequests *_pendingRequests;
    HMHome *_primaryHome;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMXpcClient *_xpcClient;
}

@property (nonatomic, retain) NSMutableArray *currentHomes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMHomeManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchInProgress;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic) unsigned int metadataVersion;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMPendingRequests *pendingRequests;
@property (nonatomic, retain) HMHome *primaryHome;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) HMXpcClient *xpcClient;

- (void).cxx_destruct;
- (void)_fetchHomeConfiguration;
- (void)_fetchHomeConfigurationWithPrivacyCheck;
- (void)_handleHomeAddedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_homeWithUUID:(id)arg1;
- (void)_migrateDelegates:(id)arg1 fromHomes:(id)arg2 primaryHome:(id)arg3;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_submitHomesConfigFetchMetric:(double)arg1;
- (void)_updateHomes:(id)arg1;
- (void)addHomeWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)currentHomes;
- (void)dealloc;
- (id)delegate;
- (void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)eraseHomeDataWithCompletionHandler:(id /* block */)arg1;
- (BOOL)fetchInProgress;
- (unsigned int)generationCounter;
- (id)homes;
- (id)init;
- (void)logControl:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned int)metadataVersion;
- (id)msgDispatcher;
- (id)pendingRequests;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(id /* block */)arg1;
- (id)primaryHome;
- (void)queryHomeKitUsageStateWithCompletionHandler:(id /* block */)arg1;
- (void)queryMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryVersionWithCompletionHandler:(id /* block */)arg1;
- (void)removeHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)setCurrentHomes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchInProgress:(BOOL)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMetadataVersion:(unsigned int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimaryHome:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)workQueue;
- (id)xpcClient;

@end
