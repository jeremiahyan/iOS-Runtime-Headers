/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemonExtensions.framework/HealthDaemonExtensions
 */

@interface HDActivityCacheManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {
    HKQuantityType *_activeEnergyBurnedType;
    HKQuantityType *_activeHoursType;
    NSSet *_allTypes;
    HKQuantityType *_briskMinutesType;
    HKQuantityType *_calorieGoalType;
    NSObject<OS_dispatch_queue> *_dataQueue;
    HKQuantity *_energyBurnedGoal;
    NSDate *_energyBurnedGoalDate;
    <HDHealthDaemon> *_healthDaemon;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSUUID *_lastStartedRestoreUUID;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    HKQuantityType *_stepCountType;
    HKActivityCache *_todayActivityCache;
    _HKDelayedOperation *_updateCachesOperation;
    HKQuantityType *_walkingAndRunningDistanceType;
    HKWorkoutType *_workoutType;
    HKActivityCache *_yesterdayActivityCache;
}

@property (nonatomic, readonly) HKActivityCache *currentActivityCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ivarQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKActivityCache *todayActivityCache;
@property (nonatomic, retain) HKActivityCache *yesterdayActivityCache;

- (void).cxx_destruct;
- (void)_dataQueue_nanoSyncRestoreDidFinish:(id)arg1;
- (void)_dataQueue_nanoSyncRestoreWillBegin:(id)arg1;
- (void)_dataQueue_resetCachesAfterSignificantTimeChange;
- (void)_dataQueue_saveActivityCache:(id)arg1;
- (void)_dataQueue_tryIncrementalUpdateCachesFromDatabase;
- (void)_dataQueue_tryPrimeCaches;
- (void)_digestSample:(id)arg1 anchor:(long long)arg2 todayActivityCache:(id)arg3 todayUpdatedFields:(unsigned int*)arg4 yesterdayActivityCache:(id)arg5 yesterdayUpdatedFields:(unsigned int*)arg6;
- (void)_nanoSyncRestoreDidFinish:(id)arg1;
- (void)_nanoSyncRestoreWillBegin:(id)arg1;
- (void)_notifyObservers:(id)arg1 didUpdateTodayActivityCache:(id)arg2 updatedFields:(unsigned int)arg3 error:(id)arg4;
- (void)_notifyObservers:(id)arg1 didUpdateYesterdayActivityCache:(id)arg2 updatedFields:(unsigned int)arg3 error:(id)arg4;
- (void)_notifyObserversVoidedActivityCaches:(id)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_resetCaches;
- (void)_resetCachesAfterSignificantTimeChange;
- (void)_updateActivityCache:(id)arg1 withSample:(id)arg2 anchor:(long long)arg3 updatedFields:(unsigned int*)arg4;
- (void)_updateCachedEnergyBurnedGoal:(id)arg1 date:(id)arg2;
- (void)_updateCaches;
- (BOOL)_updateEnergyBurnedGoalForActivityCache:(id)arg1;
- (void)addActivityCacheObserver:(id)arg1;
- (id)currentActivityCache;
- (void)daemonReady:(id)arg1;
- (id)dataQueue;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1;
- (id)ivarQueue;
- (id)observerQueue;
- (id)observers;
- (void)removeActivityCacheObserver:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)setDataQueue:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setIvarQueue:(id)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setTodayActivityCache:(id)arg1;
- (void)setYesterdayActivityCache:(id)arg1;
- (id)todayActivityCache;
- (id)yesterdayActivityCache;

@end
