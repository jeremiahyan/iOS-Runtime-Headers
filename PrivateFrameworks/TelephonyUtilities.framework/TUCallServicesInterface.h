/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallServicesInterface : NSObject <TUCallServicesDaemonObserver, TUCallServicesProxyCallActions> {
    TUCallCenterCallsCache *_callsCache;
    NSArray *_currentProxyCalls;
    <TUCallServicesDaemonDelegate> *_daemonDelegate;
    NSData *_localFrequency;
    BOOL _muted;
    TUProxyCallModel *_proxyCallModel;
    NSData *_remoteFrequency;
    NSXPCConnection *_xpcConnection;
}

@property (nonatomic, retain) TUCallCenterCallsCache *callsCache;
@property (nonatomic, copy) NSArray *currentProxyCalls;
@property (nonatomic) <TUCallServicesDaemonDelegate> *daemonDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSData *localFrequency;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (nonatomic, retain) TUProxyCallModel *proxyCallModel;
@property (nonatomic, retain) NSData *remoteFrequency;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (BOOL)launchesCallServicesDaemonOnDemand;
+ (id)sharedInstance;

- (void)_setUpXPCConnection;
- (void)_tearDownXPCConnection;
- (void)answerCall:(id)arg1;
- (id)callStateForCall:(id)arg1;
- (id)callsCache;
- (void)conferenceCall:(id)arg1;
- (id)currentProxyCalls;
- (id)daemonDelegate;
- (id)daemonDelegateWithErrorHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4;
- (void)dialCall:(id)arg1;
- (void)disconnectAllCalls;
- (void)disconnectCall:(id)arg1;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)handleCallContinuityStateChangedForProxyCall:(id)arg1;
- (void)handleCallModelStateChanged:(id)arg1;
- (void)handleCallStatusChanged:(id)arg1;
- (void)handleCallStatusChangedForProxyCall:(id)arg1;
- (void)handleCurrentProxyCallsChanged:(id)arg1;
- (void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(id)arg2;
- (void)handleEndpointOnCurrentDeviceChangedTo:(BOOL)arg1 forCallWithUUID:(id)arg2;
- (void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg1 digits:(id)arg2;
- (void)handleLocalFrequencyChangedTo:(id)arg1;
- (void)handleMutedChangedTo:(BOOL)arg1;
- (void)handleRelayCallingCapabilitiesChanged:(id)arg1;
- (void)handleRemoteFrequencyChangedTo:(id)arg1;
- (void)handleShouldSuppressRingtoneChangedTo:(BOOL)arg1 forCallWithUUID:(id)arg2;
- (void)handleWantsHoldMusicChangedTo:(BOOL)arg1 forCallWithUUID:(id)arg2;
- (void)holdCall:(id)arg1;
- (id)init;
- (BOOL)isMuted;
- (id)localFrequency;
- (void)muteCall:(id)arg1;
- (void)playDTMFToneForCall:(id)arg1 key:(unsigned char)arg2;
- (id)proxyCallModel;
- (BOOL)relayableClientDeviceExists;
- (BOOL)relayableHostDeviceExists;
- (id)remoteFrequency;
- (void)requestHandoffForAllCalls;
- (void)requestPendingCallNotifications;
- (void)sendHardPauseDigits;
- (void)setCallsCache:(id)arg1;
- (void)setCurrentProxyCalls:(id)arg1;
- (void)setDaemonDelegate:(id)arg1;
- (void)setDisconnectedReason:(int)arg1 forCall:(id)arg2;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1 forCall:(id)arg2;
- (void)setIsSendingAudio:(BOOL)arg1 forCall:(id)arg2;
- (void)setLocalFrequency:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setProxyCallModel:(id)arg1;
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)setRemoteFrequency:(id)arg1;
- (void)setShouldSuppressRingtone:(BOOL)arg1 forCall:(id)arg2;
- (void)setWantsHoldMusic:(BOOL)arg1 forCall:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)swapCalls;
- (void)unconferenceCall:(id)arg1;
- (void)unholdCall:(id)arg1;
- (void)unmuteCall:(id)arg1;
- (id)xpcConnection;

@end
