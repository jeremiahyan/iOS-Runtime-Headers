/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReference : NSObject {
    NSString *_entryDefinitionKey;
    double _offset;
    <PLTimeReferenceManager> *_timeManager;
    int _timeReferenceType;
}

@property (retain) NSString *entryDefinitionKey;
@property (nonatomic) double offset;
@property (retain) <PLTimeReferenceManager> *timeManager;
@property int timeReferenceType;

+ (id)defaultsKeyFromEntryDefinitionKey:(id)arg1;

- (void).cxx_destruct;
- (id)addTimeOffsetToMonotonicTime:(id)arg1;
- (id)currentTime;
- (id)entryDefinitionKey;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3;
- (void)initializeOffsetWithEntries:(id)arg1;
- (double)offset;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (void)setEntryDefinitionKey:(id)arg1;
- (void)setOffset:(double)arg1;
- (void)setTimeManager:(id)arg1;
- (void)setTimeReferenceType:(int)arg1;
- (id)timeManager;
- (int)timeReferenceType;
- (void)writeOffsetToDefaults;

@end
