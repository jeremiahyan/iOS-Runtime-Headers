/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueInternal : NSObject {
    BOOL _checkedIn;
    SKPaymentQueueClient *_client;
    BOOL _isRefreshing;
    NSMutableArray *_localTransactions;
    struct __CFArray { } *_observers;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    BOOL _restoreFinishedDuringRefresh;
    BOOL _restoringCompletedTransactions;
    NSMutableArray *_transactions;
}

- (void)dealloc;

@end
