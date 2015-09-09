/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIdentityRegistry : NSObject {
    NSMutableDictionary *_registry;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *registry;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)clear;
- (void)deregisterPublicKeyForIdentifier:(id)arg1;
- (id)init;
- (id)publicKeyForIdentifier:(id)arg1;
- (void)registerPublicKey:(id)arg1 forIdentifier:(id)arg2;
- (id)registry;
- (void)setRegistry:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
