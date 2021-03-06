/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    NSObject<OS_dispatch_queue> *_appLaunchHistoryQueue;
    CDContextStore *_ctxStore;
    NSMutableDictionary *_launchedBundleIds;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

- (void).cxx_destruct;
- (id)appInfoManager;
- (void)dealloc;
- (id)getMostRecentAppLaunchesSyncForTimeInterval:(double)arg1;
- (void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2;
- (id)init;
- (id)initWithDiskPersistence:(BOOL)arg1;
- (id)initWithInMemoryStore;
- (id)initWithPersistentStore;
- (void)registerForAppChange;
- (void)start;
- (void)stop;
- (void)updateLaunchHistoryFromDuet;
- (void)updateLaunchHistoryFromDuet:(double)arg1;

@end
