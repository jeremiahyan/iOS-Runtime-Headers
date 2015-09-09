/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDataParity.framework/CoreDuetDataParity
 */

@interface CoreDuetDataParity : NSObject

- (id)CDDMAirplaneModeEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMAppStateChangeEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMBacklightEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMBatteryEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMPluginEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMPoolWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMScreenLockEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)CDDMSleepOrWakeEventWithSource:(id)arg1 intoContext:(id)arg2;
- (id)appBundleIdReverseMapFromIntegerId:(id)arg1 withContext:(id)arg2;
- (id)findOrAllocIntegerIdForAppBundleId:(id)arg1 withContext:(id)arg2 andDate:(id)arg3;
- (id)findOrAllocIntegerIdForPoolName:(id)arg1 clientId:(unsigned long long)arg2 withContext:(id)arg3 andDate:(id)arg4;
- (id)init;
- (id)integerIdReverseMapFromAppBundleId:(id)arg1 withContext:(id)arg2;
- (id)integerIdReverseMapFromPoolName:(id)arg1 clientId:(unsigned long long)arg2 withContext:(id)arg3;
- (id)poolNameReverseMapFromIntegerId:(id)arg1 withContext:(id)arg2;
- (void)save:(id)arg1;

@end
