/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchUserIdentitiesOperation : CKDOperation {
    id /* block */ _fetchUserIdentityProgressBlock;
    NSArray *_identityInfos;
}

@property (nonatomic, copy) id /* block */ fetchUserIdentityProgressBlock;
@property (nonatomic, retain) NSArray *identityInfos;

- (void).cxx_destruct;
- (void)_fetchInfoFromCache;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (id /* block */)fetchUserIdentityProgressBlock;
- (id)identityInfos;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setFetchUserIdentityProgressBlock:(id /* block */)arg1;
- (void)setIdentityInfos:(id)arg1;

@end
