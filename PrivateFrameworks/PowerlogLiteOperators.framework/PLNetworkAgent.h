/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLNetworkAgent : PLAgent {
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_canSleep;
    PLSemaphore *_canSleepSemaphore;
    PLProcessPortMap *_portMapper;
    NSDate *_priorLogEventPointPortMappingTimestamp;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) PLProcessPortMap *portMapper;
@property (retain) NSDate *priorLogEventPointPortMappingTimestamp;

+ (id)accountingGroupDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)batteryLevelChanged;
- (id)canSleep;
- (id)canSleepSemaphore;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)logEventPointPortMapping;
- (id)portMapper;
- (id)priorLogEventPointPortMappingTimestamp;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setCanSleep:(id)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setPortMapper:(id)arg1;
- (void)setPriorLogEventPointPortMappingTimestamp:(id)arg1;

@end
