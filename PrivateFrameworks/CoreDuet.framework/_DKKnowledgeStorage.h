/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStorage : NSObject {
    NSObject<OS_dispatch_queue> *_defaultQueue;
    _DKCoreDataStorage *_storage;
}

+ (id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2;

- (void).cxx_destruct;
- (unsigned int)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned int)arg2;
- (unsigned int)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned int)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned int)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned int)arg2 batchLimit:(unsigned int)arg3;
- (unsigned int)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned int)arg3;
- (unsigned int)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned int)arg2;
- (unsigned int)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned int)arg1 limit:(unsigned int)arg2;
- (BOOL)deleteStorage;
- (unsigned int)eventCount;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;

@end
