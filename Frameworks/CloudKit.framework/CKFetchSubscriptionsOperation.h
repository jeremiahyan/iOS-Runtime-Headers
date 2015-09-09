/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation {
    id /* block */ _fetchSubscriptionCompletionBlock;
    BOOL _isFetchAllSubscriptionsOperation;
    NSMutableDictionary *_subscriptionErrors;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
}

@property (nonatomic, copy) id /* block */ fetchSubscriptionCompletionBlock;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (nonatomic, retain) NSMutableDictionary *subscriptionErrors;
@property (nonatomic, copy) NSArray *subscriptionIDs;
@property (nonatomic, retain) NSArray *subscriptions;
@property (nonatomic, retain) NSMutableDictionary *subscriptionsBySubscriptionID;

+ (id)fetchAllSubscriptionsOperation;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id /* block */)fetchSubscriptionCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithSubscriptionIDs:(id)arg1;
- (BOOL)isFetchAllSubscriptionsOperation;
- (void)performCKOperation;
- (void)setFetchSubscriptionCompletionBlock:(id /* block */)arg1;
- (void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1;
- (void)setSubscriptionErrors:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSubscriptionsBySubscriptionID:(id)arg1;
- (id)subscriptionErrors;
- (id)subscriptionIDs;
- (id)subscriptions;
- (id)subscriptionsBySubscriptionID;

@end
