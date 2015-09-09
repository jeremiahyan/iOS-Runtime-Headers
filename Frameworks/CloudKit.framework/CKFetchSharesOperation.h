/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSharesOperation : CKDatabaseOperation {
    id /* block */ _fetchSharesCompletionBlock;
    NSMutableDictionary *_shareIDErrors;
    NSArray *_shareIDs;
    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_zoneIDErrors;
    NSArray *_zoneIDs;
}

@property (nonatomic, copy) id /* block */ fetchSharesCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *shareIDErrors;
@property (nonatomic, readonly) NSArray *shareIDs;
@property (nonatomic, retain) NSMutableDictionary *sharesByShareID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDErrors;
@property (nonatomic, readonly) NSArray *zoneIDs;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id /* block */)fetchSharesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithShareIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (void)performCKOperation;
- (void)setFetchSharesCompletionBlock:(id /* block */)arg1;
- (void)setShareIDErrors:(id)arg1;
- (void)setSharesByShareID:(id)arg1;
- (void)setZoneIDErrors:(id)arg1;
- (id)shareIDErrors;
- (id)shareIDs;
- (id)sharesByShareID;
- (id)zoneIDErrors;
- (id)zoneIDs;

@end
