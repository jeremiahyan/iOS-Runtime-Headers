/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient> {
    <SFContinuityScannerProtocol><NSXPCProxyCreating> *_connectionProxy;
    NSMutableSet *_foundDevices;
    NSHashTable *_observers;
}

@property (retain) <SFContinuityScannerProtocol><NSXPCProxyCreating> *connectionProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *foundDevices;
@property (readonly) unsigned int hash;
@property (retain) NSHashTable *observers;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (id)connectionProxy;
- (void)dealloc;
- (void)foundDeviceWithDevice:(id)arg1;
- (id)foundDevices;
- (id)init;
- (void)lostDeviceWithDevice:(id)arg1;
- (id)observers;
- (void)receivedAdvertisement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setForceScanningEnabled:(BOOL)arg1;
- (void)setFoundDevices:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setupXPCConnection;
- (void)xpcManagerConnectionInterrupted;

@end
