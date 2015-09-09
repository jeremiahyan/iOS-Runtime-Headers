/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {
    unsigned int _URLOptions;
    NSSet *_assetFieldNamesToPublishURLs;
    CKDRecordCache *_cache;
    NSMutableDictionary *_cachedRecords;
    NSSet *_desiredKeySet;
    NSDictionary *_desiredPackageFileIndices;
    NSMapTable *_downloadTasksByRecordID;
    NSMutableDictionary *_errorsByRecordID;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    BOOL _forcePCSDecrypt;
    NSArray *_fullRecordsToFetch;
    id /* block */ _recordFetchCompletionBlock;
    id /* block */ _recordFetchProgressBlock;
    NSArray *_recordIDsToFetch;
    NSDictionary *_recordIDsToVersionETags;
    unsigned int _requestedTTL;
    BOOL _shouldFetchAssetContent;
    NSDictionary *_signaturesOfAssetsByRecordIDAndKey;
    BOOL _useCachedEtags;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (nonatomic) unsigned int URLOptions;
@property (nonatomic, retain) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic, retain) CKDRecordCache *cache;
@property (nonatomic, retain) NSMutableDictionary *cachedRecords;
@property (nonatomic, retain) NSSet *desiredKeySet;
@property (nonatomic, retain) NSDictionary *desiredPackageFileIndices;
@property (nonatomic, retain) NSMapTable *downloadTasksByRecordID;
@property (nonatomic, retain) NSMutableDictionary *errorsByRecordID;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) BOOL forcePCSDecrypt;
@property (nonatomic, retain) NSArray *fullRecordsToFetch;
@property (nonatomic, copy) id /* block */ recordFetchCompletionBlock;
@property (nonatomic, copy) id /* block */ recordFetchProgressBlock;
@property (nonatomic, retain) NSArray *recordIDsToFetch;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned int requestedTTL;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic, retain) NSDictionary *signaturesOfAssetsByRecordIDAndKey;
@property (nonatomic) BOOL useCachedEtags;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (unsigned int)URLOptions;
- (void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_continueHandleFetchedRecord:(id)arg1;
- (void)_decryptPropertiesOnRecord:(id)arg1;
- (void)_didDownloadAssetsWithError:(id)arg1;
- (void)_downloadAssets;
- (void)_fetchRecords;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(BOOL)arg3 responseCode:(id)arg4;
- (BOOL)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 signature:(id)arg4;
- (id)assetFieldNamesToPublishURLs;
- (id)cache;
- (id)cachedRecords;
- (id)desiredKeySet;
- (id)desiredPackageFileIndices;
- (id)downloadTasksByRecordID;
- (id)errorForRecordID:(id)arg1;
- (id)errorsByRecordID;
- (id)fetchRecordsGroup;
- (void)finishWithError:(id)arg1;
- (BOOL)forcePCSDecrypt;
- (id)fullRecordsToFetch;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (id /* block */)recordFetchCompletionBlock;
- (id /* block */)recordFetchProgressBlock;
- (id)recordIDsToFetch;
- (id)recordIDsToVersionETags;
- (unsigned int)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCachedRecords:(id)arg1;
- (void)setDesiredKeySet:(id)arg1;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setDownloadTasksByRecordID:(id)arg1;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (void)setErrorsByRecordID:(id)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setForcePCSDecrypt:(BOOL)arg1;
- (void)setFullRecordsToFetch:(id)arg1;
- (void)setRecordFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchProgressBlock:(id /* block */)arg1;
- (void)setRecordIDsToFetch:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (void)setURLOptions:(unsigned int)arg1;
- (void)setUseCachedEtags:(BOOL)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (BOOL)useCachedEtags;
- (id)webSharingIdentityDataByRecordID;

@end
