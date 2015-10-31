/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDIDSMessageCenterDelegate, HDNanoSyncStoreDelegate, HDPairedWatchBundleIdentifierProvider, HDProcessStateObserver, NRDevicePropertyObserver> {
    NSMutableArray *_activationCompletions;
    NSObject<OS_dispatch_source> *_activationTimer;
    NRDevice *_activeNanoRegistryDevice;
    HDNanoSyncStore *_activeSyncStore;
    <HDHealthDaemon> *_healthDaemon;
    BOOL _isMaster;
    BOOL _isPairingActivated;
    NSDate *_lastPeriodicSyncDate;
    HDIDSMessageCenter *_messageCenter;
    BOOL _needsActivationOnUnlock;
    BOOL _needsResyncOnUnlock;
    NSString *_pairedWatchSourceBundleIdentifier;
    NSMutableDictionary *_pendingAuthorizationRequestContexts;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _restoreDidAbort;
    long long _restoreSequenceNumber;
    NSUUID *_restoreUUID;
    int _state;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (nonatomic, retain) NSMutableArray *activationCompletions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *activationTimer;
@property (nonatomic, retain) NRDevice *activeNanoRegistryDevice;
@property (nonatomic, retain) HDNanoSyncStore *activeSyncStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (readonly) BOOL isMaster;
@property BOOL isPairingActivated;
@property (nonatomic, retain) NSDate *lastPeriodicSyncDate;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic) BOOL needsActivationOnUnlock;
@property (nonatomic) BOOL needsResyncOnUnlock;
@property (retain) NSString *pairedWatchSourceBundleIdentifier;
@property (nonatomic, retain) NSMutableDictionary *pendingAuthorizationRequestContexts;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *periodicSyncTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL restoreDidAbort;
@property (nonatomic) long long restoreSequenceNumber;
@property (nonatomic, retain) NSUUID *restoreUUID;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (void)_achievementsWereAdded:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_didReceiveChangeRequest;
- (void)_didSendChangeRequest;
- (BOOL)_queue_abortRestoreWithUUID:(id)arg1;
- (void)_queue_activationTimedOut;
- (void)_queue_addActivationCompletion:(id /* block */)arg1;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1;
- (void)_queue_beginRestoreWithStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_cancelActivationTimer;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1 forStore:(id)arg2;
- (void)_queue_changeResponseDidFailToSendWithError:(id)arg1 forStore:(id)arg2;
- (void)_queue_drainActivationCompletionsWithDidActivate:(BOOL)arg1 error:(id)arg2;
- (BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1;
- (void)_queue_handleActivationRestoreRequest:(id)arg1 forStore:(id)arg2;
- (void)_queue_handleActivationRestoreResponse:(id)arg1 forStore:(id)arg2;
- (BOOL)_queue_isReadyForPairingWithError:(id*)arg1;
- (BOOL)_queue_isReadyForSyncWithError:(id*)arg1;
- (void)_queue_pairingDidChange;
- (void)_queue_periodicSyncTimerFired;
- (void)_queue_receiveAuthorizationComplete:(id)arg1;
- (void)_queue_receiveAuthorizationRequest:(id)arg1;
- (void)_queue_receiveAuthorizationResponse:(id)arg1;
- (void)_queue_receiveChangeRequest:(id)arg1 forStore:(id)arg2;
- (void)_queue_receiveChangeResponse:(id)arg1 forStore:(id)arg2;
- (void)_queue_requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_queue_resetPairingWithCompletion:(id /* block */)arg1;
- (void)_queue_resetRestoreAttemptWithUUID:(id)arg1;
- (void)_queue_sendActivationRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 restores:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_sendChange:(id)arg1 withStatus:(id)arg2 forStore:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_sendRequest:(id)arg1;
- (void)_queue_sendResponse:(id)arg1;
- (void)_queue_setActivePairedNanoRegistryDevice:(id)arg1;
- (void)_queue_setState:(int)arg1;
- (void)_queue_setUpMessageCenterIfNecessaryWithStore:(id)arg1;
- (void)_queue_startActivationTimerWithTimeout:(double)arg1;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_queue_transitionToActivatedWithStore:(id)arg1;
- (void)_queue_transitionToDeactivatedWithError:(id)arg1;
- (void)_queue_transitionToPreparingForActivationWithStore:(id)arg1 activationSentHandler:(id /* block */)arg2;
- (void)_queue_updatePairingWithOptions:(unsigned int)arg1 activationSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchorsForStore:(id)arg1;
- (void)_setPairingActivated:(BOOL)arg1;
- (void)_showFitnessAppIfNeeded;
- (id)_stateString;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 pullRequest:(BOOL)arg2;
- (BOOL)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 forStore:(id)arg3 error:(id*)arg4;
- (void)_unregisterForSyncTriggers;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (void)activatePairingWithActivationSentHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)activationCompletions;
- (id)activationTimer;
- (id)activeNanoRegistryDevice;
- (id)activeSyncStore;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)diagnosticDescription;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1 isMaster:(BOOL)arg2;
- (BOOL)isMaster;
- (BOOL)isPairingActivated;
- (id)lastPeriodicSyncDate;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenterActivationError:(id)arg1;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveActivationRequest:(id)arg1;
- (void)messageCenterDidReceiveActivationResponse:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationComplete:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (BOOL)needsActivationOnUnlock;
- (BOOL)needsResyncOnUnlock;
- (id)pairedWatchSourceBundleIdentifier;
- (id)pendingAuthorizationRequestContexts;
- (id)periodicSyncTimer;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)queue;
- (void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)resetPairingWithCompletion:(id /* block */)arg1;
- (BOOL)restoreDidAbort;
- (long long)restoreSequenceNumber;
- (id)restoreUUID;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)sendWithNanoSyncStore:(id)arg1 change:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)setActivationCompletions:(id)arg1;
- (void)setActivationTimer:(id)arg1;
- (void)setActiveNanoRegistryDevice:(id)arg1;
- (void)setActiveSyncStore:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setLastPeriodicSyncDate:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNeedsActivationOnUnlock:(BOOL)arg1;
- (void)setNeedsResyncOnUnlock:(BOOL)arg1;
- (void)setPairedWatchSourceBundleIdentifier:(id)arg1;
- (void)setPendingAuthorizationRequestContexts:(id)arg1;
- (void)setPeriodicSyncTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestoreDidAbort:(BOOL)arg1;
- (void)setRestoreSequenceNumber:(long long)arg1;
- (void)setRestoreUUID:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSyncQueue:(id)arg1;
- (int)state;
- (void)syncDidFinishWithNanoSyncStore:(id)arg1 success:(BOOL)arg2 error:(id)arg3 context:(id)arg4;
- (void)syncHealthDataWithPullRequest:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)syncQueue;

@end
