/* Generated by RuntimeBrowser.
 */

@protocol NFAWDEventProtocol <NSObject>

@optional

- (PBCodable *)getMetric;
- (unsigned long)getMetricId;
- (void)postSimpleMetric;
- (void)updateTSMTransactionStateWithUUID:(NSData *)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)updateTransactionStateInfoPreviousState:(unsigned int)arg1 withUUID:(NSData *)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;

@end
