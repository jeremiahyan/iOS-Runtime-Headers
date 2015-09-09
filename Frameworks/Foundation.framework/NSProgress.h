/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgress : NSObject <NSProgressPublisher> {
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    id /* block */ _cancellationHandler;
    NSMutableSet *_childrenGroups;
    NSXPCConnection *_connection;
    int _disconnectingBlockageCount;
    unsigned long long _flags;
    id _group;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSLock *_lock;
    id /* block */ _pausingHandler;
    id /* block */ _prioritizationHandler;
    NSString *_publisherID;
    int _remoteObserverCount;
    long long _reserved4;
    id _reserved5;
    int _unpublishingBlockageCount;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    id _userInfoProxy;
    id _values;
}

@property (getter=isCancellable) BOOL cancellable;
@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled, readonly) BOOL cancelled;
@property long long completedUnitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double fractionCompleted;
@property (readonly) unsigned int hash;
@property (getter=isIndeterminate, readonly) BOOL indeterminate;
@property (nonatomic) unsigned int installPhase;
@property (nonatomic) unsigned int installState;
@property (copy) NSString *kind;
@property (copy) NSString *localizedAdditionalDescription;
@property (copy) NSString *localizedDescription;
@property (getter=isOld, readonly) BOOL old;
@property (getter=isPausable) BOOL pausable;
@property (getter=isPaused, readonly) BOOL paused;
@property (copy) id /* block */ pausingHandler;
@property (nonatomic, readonly) NSString *sf_bundleID;
@property (nonatomic, readonly) NSString *sf_error;
@property (nonatomic, readonly) NSString *sf_personRealName;
@property (nonatomic, readonly) NSString *sf_publishingKey;
@property (nonatomic, readonly) NSString *sf_sessionID;
@property (nonatomic) int sf_transferState;
@property (readonly) Class superclass;
@property long long totalUnitCount;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (void)_removeSubscriber:(id)arg1;
+ (id)_subscriberInterface;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentProgress;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (void)removeSubscriber:(id)arg1;

- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (id /* block */)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(BOOL*)arg3 isCancelled:(BOOL*)arg4;
- (id)_indentedDescription:(unsigned int)arg1;
- (id)_initWithValues:(id)arg1;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)_publish;
- (id)_publishingAppBundleIdentifier;
- (void)_removeGroup:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_setGroup:(id)arg1;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueForKeys:(id /* block */)arg1 settingBlock:(id /* block */)arg2;
- (void)_unblockDisconnecting;
- (void)_unblockUnpublishing;
- (void)_unpublish;
- (void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2;
- (void)_updateGroup:(id)arg1 oldFraction:(id)arg2 newFraction:(id)arg3 portion:(long long)arg4;
- (void)acknowledge;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (id /* block */)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (long long)completedUnitCount;
- (void)dealloc;
- (id)description;
- (double)fractionCompleted;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (BOOL)isCancellable;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isIndeterminate;
- (BOOL)isOld;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (BOOL)isPrioritizable;
- (id)kind;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (unsigned int)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (void)pause;
- (id /* block */)pausingHandler;
- (id /* block */)prioritizationHandler;
- (oneway void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(id /* block */)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(id /* block */)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (oneway void)startProvidingValuesWithInitialAcceptor:(id /* block */)arg1;
- (oneway void)stopProvidingValues;
- (long long)totalUnitCount;
- (void)unpublish;
- (id)userInfo;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned int)arg2;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned int)arg2;

- (id)_LSDescription;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned int)arg3;
- (unsigned int)installPhase;
- (unsigned int)installState;
- (void)resume;
- (void)setInstallPhase:(unsigned int)arg1;
- (void)setInstallState:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (void)brc_publish;
- (void)brc_unpublish;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
+ (id)sf_transferStateAsString:(int)arg1;

- (void)setSf_transferState:(int)arg1;
- (id)sf_bundleID;
- (id)sf_error;
- (void)sf_failedWithError:(id)arg1;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_initWithFileURL:(id)arg1;
- (id)sf_personRealName;
- (id)sf_publishingKey;
- (id)sf_sessionID;
- (int)sf_transferState;

@end
