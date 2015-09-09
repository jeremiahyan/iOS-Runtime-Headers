/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation {
    id /* block */ _fetchWebAuthTokenCompletionBlock;
    NSString *_webAuthToken;
}

@property (nonatomic, copy) id /* block */ fetchWebAuthTokenCompletionBlock;
@property (nonatomic, copy) NSString *webAuthToken;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id /* block */)fetchWebAuthTokenCompletionBlock;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setFetchWebAuthTokenCompletionBlock:(id /* block */)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
