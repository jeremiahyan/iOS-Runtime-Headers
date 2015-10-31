/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDeviceLockController : NSObject {
    SBFPasscodeLockAssertionManager *_assertionManager;
    BOOL _cachedPasscodeLockedOrBlocked;
    BOOL _deviceHasPasscodeSet;
    PCPersistentTimer *_deviceLockUnblockTimer;
    BOOL _hasBeenUnlockedOnceSinceBoot;
    BOOL _isBlockedForThermalCondition;
    NSString *_lastIncorrectPasscodeAttempt;
    double _lastLockDate;
    BOOL _lastPasscodeLockStateWasLocked;
    int _lockState;
    <SBFDeviceLockModel> *_lockoutModel;
    BOOL _okToSendNotifications;
    struct __CFRunLoopObserver { } *_runLoopObserver;
    BOOL _shouldFetchPasscodeLockState;
    SBFPasscodeLockDisableAssertion *_transientPasscodeCheckingAssertion;
}

+ (int)_extendedKeybagState;
+ (BOOL)_shouldTreatExtendedKeybagStateAsLocked:(int)arg1;

- (void)_addDeviceLockDisableAssertion:(id)arg1;
- (void)_cachePassword:(id)arg1;
- (void)_clearBlockedState;
- (void)_clearUnblockTimer;
- (void)_enablePasscodeLockImmediately:(BOOL)arg1;
- (BOOL)_isAssertionValid:(id)arg1;
- (void)_keybagLockStateChangedTo:(int)arg1;
- (void)_lockStateChangedFrom:(int)arg1 to:(int)arg2;
- (void)_noteBlockedReasonsMayHaveChanged;
- (void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(BOOL)arg1;
- (void)_notifyOfFirstUnlock;
- (void)_removeDeviceLockDisableAssertion:(id)arg1;
- (void)_scheduleUnblockTimer;
- (void)_setLockState:(int)arg1;
- (void)_setupRunLoopObserverIfNecessary;
- (BOOL)_shouldLockDeviceNow;
- (BOOL)_shouldSuppressLockOnInit;
- (BOOL)_temporarilyBlocked;
- (void)_unblockTimerFired;
- (void)_uncachePasscodeIfNecessary;
- (BOOL)_unlockWithPasscode:(id)arg1 outError:(id*)arg2;
- (void)_updateDeviceHasPasscodeSetForLockState:(int)arg1;
- (void)_updateDeviceLockedState;
- (void)_wipeDevice;
- (BOOL)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(BOOL)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)deviceHasBeenPasscodeUnlockedOnceSinceBoot;
- (BOOL)deviceHasPasscodeSet;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (void)enablePasscodeLockImmediately;
- (id)init;
- (BOOL)isBlocked;
- (BOOL)isBlockedForThermalCondition;
- (BOOL)isPasscodeLocked;
- (BOOL)isPasscodeLockedCached;
- (BOOL)isPasscodeLockedOrBlocked;
- (BOOL)isPermanentlyBlocked:(double*)arg1;
- (id)lastLockDate;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)setBlockedForThermalCondition:(BOOL)arg1;
- (void)setupUnblockTimerIfNeeded;
- (void)synchronize;

@end
