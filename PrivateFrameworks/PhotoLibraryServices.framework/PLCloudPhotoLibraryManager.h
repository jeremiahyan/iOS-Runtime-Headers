/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPhotoLibraryManager : NSObject <CPLLibraryManagerDelegate, CPLResourceProgressDelegate, PLForegroundObserver> {
    NSNumber *__numberOfOtherItemsDownloaded;
    NSNumber *__numberOfOtherItemsToPush;
    NSNumber *__numberOfPhotosDownloaded;
    NSNumber *__numberOfPhotosToPush;
    NSNumber *__numberOfVideosDownloaded;
    NSNumber *__numberOfVideosToPush;
    unsigned int _boundForUploadingOtherItems;
    unsigned int _boundForUploadingPhotos;
    unsigned int _boundForUploadingVideos;
    NSMutableSet *_cameraAsset;
    BOOL _closeLibrary;
    CPLLibraryManager *_cplLibrary;
    unsigned int _defaultResourceDownloadType;
    unsigned int _downloadCounterCheck;
    NSMutableSet *_downloadedDeleteUuid;
    NSObject<OS_xpc_object> *_hubConnection;
    BOOL _initialUpload;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
    unsigned long long _lastKnownDeletionEventIndex;
    NSString *_lastKnownStoreUUID;
    unsigned int _mode;
    BOOL _modeChangePending;
    BOOL _needSoftReset;
    BOOL _needToResume;
    unsigned char _nodeUUID;
    int _notifyToken;
    int _pauseRequest;
    PLPhotoLibrary *_photoLibrary;
    BOOL _processingChange;
    BOOL _pullOnIdle;
    BOOL _pushOnIdle;
    BOOL _stopped;
    BOOL _stopping;
    PLCloudTaskManager *_taskManager;
    NSObject<OS_dispatch_queue> *_transferIsolationQueue;
    NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
    NSMutableArray *_uploadBatchArray;
    unsigned int _uploadCounterCheck;
    BOOL _wasRebuild;
}

@property (setter=_setNumberOfOtherItemsDownloaded:, nonatomic, retain) NSNumber *_numberOfOtherItemsDownloaded;
@property (setter=_setNumberOfOtherItemsToPush:, nonatomic, retain) NSNumber *_numberOfOtherItemsToPush;
@property (setter=_setNumberOfPhotosDownloaded:, nonatomic, retain) NSNumber *_numberOfPhotosDownloaded;
@property (setter=_setNumberOfPhotosToPush:, nonatomic, retain) NSNumber *_numberOfPhotosToPush;
@property (setter=_setNumberOfVideosDownloaded:, nonatomic, retain) NSNumber *_numberOfVideosDownloaded;
@property (setter=_setNumberOfVideosToPush:, nonatomic, retain) NSNumber *_numberOfVideosToPush;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int numberOfOtherItemsToDownload;
@property (nonatomic, readonly) unsigned int numberOfOtherItemsToUpload;
@property (nonatomic, readonly) unsigned int numberOfPhotosToDownload;
@property (nonatomic, readonly) unsigned int numberOfPhotosToUpload;
@property (nonatomic, readonly) unsigned int numberOfPushedItems;
@property (nonatomic, readonly) unsigned int numberOfVideosToDownload;
@property (nonatomic, readonly) unsigned int numberOfVideosToUpload;
@property (readonly) Class superclass;

+ (id)descriptionForResourceType:(unsigned int)arg1;

- (void)_addLocalResourcesToRecord:(id)arg1;
- (BOOL)_canExternallyTransitionToNewLibraryModeIgnoringPause:(BOOL)arg1;
- (void)_cleanUploadedResources:(id)arg1;
- (void)_cleanupCPLLibrary;
- (id)_copyTemporaryAssetToFinalPhotoLocationWithResourceIdentity:(id)arg1 withExtension:(id)arg2 withName:(id)arg3;
- (id)_createBatchesForChanges:(id)arg1;
- (id)_createUploadBatchesForDeletionFromEvent:(id)arg1;
- (id)_createUploadBatchesFromEvent:(id)arg1;
- (void)_deactivateCPLLibrary;
- (id)_debugNameForMode:(unsigned int)arg1;
- (id)_debugPrintAlbumOrderForAssets:(id)arg1;
- (void)_doPause;
- (void)_doResetSync:(BOOL)arg1;
- (void)_doUnpause;
- (void)_fetchChangesFromEvent:(id)arg1 insertedAssets:(id)arg2 updatedAssets:(id)arg3 adjustedAssets:(id)arg4 deletedAssets:(id)arg5 albumInserts:(id)arg6 albumChanges:(id)arg7 albumsToDelete:(id)arg8 updatedRelationship:(id)arg9 sendAssetContainerChange:(BOOL*)arg10;
- (unsigned long long)_fetchLastEventIndexFromChangeHub;
- (id)_fetchPendingEventsFromIndex:(unsigned long long)arg1;
- (id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleAssetRecords:(id)arg1 inLibrary:(id)arg2 withChangeBatch:(id)arg3;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1;
- (void)_linkFileFrom:(id)arg1 to:(id)arg2;
- (id)_numberOfOtherItemsDownloaded;
- (id)_numberOfOtherItemsToPush;
- (id)_numberOfPhotosDownloaded;
- (id)_numberOfPhotosToPush;
- (id)_numberOfVideosDownloaded;
- (id)_numberOfVideosToPush;
- (short)_placeHolderKindFromCPLResourceType:(unsigned int)arg1;
- (void)_processNextTransaction;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned int)arg1;
- (void)_recoverFromPauseUnderDiskPressureIfNeeded;
- (void)_resetCPLLibrary;
- (void)_runBlockOnIsolationQueue:(id /* block */)arg1;
- (void)_runOnIsolationQueueAfterDelayInSeconds:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)_setNumberOfOtherItemsDownloaded:(id)arg1;
- (void)_setNumberOfOtherItemsToPush:(id)arg1;
- (void)_setNumberOfPhotosDownloaded:(id)arg1;
- (void)_setNumberOfPhotosToPush:(id)arg1;
- (void)_setNumberOfVideosDownloaded:(id)arg1;
- (void)_setNumberOfVideosToPush:(id)arg1;
- (BOOL)_setupTimerForUnpause;
- (void)_stopUnpauseTimer;
- (void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2;
- (void)_updateTransferCounts;
- (void)_updateWithCPLResource:(id)arg1;
- (void)addLogMark:(id)arg1;
- (BOOL)asset:(id)arg1 isIn:(id)arg2;
- (void)cancelResourceTransferTaskWithIdentifier:(id)arg1;
- (void)closeCPLLibrary;
- (BOOL)createPathIfNeeded:(id)arg1;
- (void)deactivateCPLLibrary;
- (void)dealloc;
- (void)deleteCPLPlist;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)diskSpaceLevel;
- (void)doSoftResetSync;
- (void)downloadAsset:(id)arg1 resourceType:(unsigned int)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 clientBundleID:(id)arg5 taskDidBeginHandler:(id /* block */)arg6 progressBlock:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)downloadFromCloud;
- (void)downloadResource:(id)arg1 forAssetUuid:(id)arg2 highPriority:(BOOL)arg3 clientBundleID:(id)arg4 taskDidBeginHandler:(id /* block */)arg5 progressBlock:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (void)dumpStatusIncludingDaemon:(BOOL)arg1;
- (void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDeletionEventsFromChangeHub;
- (void)fetchNewEventsFromChangeHub;
- (void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(BOOL)arg2 context:(id)arg3;
- (id)getCPLState;
- (id)init;
- (BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1;
- (id)lastKnownCloudVersionFromDisk;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
- (void)libraryManagerDidStartSynchronization:(id)arg1;
- (void)libraryManagerHasChangesToPull:(id)arg1;
- (void)libraryManagerStatusDidChange:(id)arg1;
- (BOOL)needResetSyncErrorType:(id)arg1;
- (void)notifyCPLLibraryOnReset;
- (unsigned int)numberOfOtherItemsToDownload;
- (unsigned int)numberOfOtherItemsToUpload;
- (unsigned int)numberOfPhotosToDownload;
- (unsigned int)numberOfPhotosToUpload;
- (unsigned int)numberOfPushedItems;
- (unsigned int)numberOfVideosToDownload;
- (unsigned int)numberOfVideosToUpload;
- (void)openCPLLibrary;
- (void)pause;
- (void)prepareDBForInitialUpload;
- (void)processDownloadBatchWithSession:(id)arg1;
- (void)processUploadBatch;
- (id)readCPLPlist;
- (unsigned int)registerToChangeHubNotification;
- (void)resetFlags;
- (void)resume;
- (void)saveCPLPlistVersion:(id)arg1 forVersionKey:(id)arg2;
- (void)saveLastKnownIndexFromChangeHubToDisk;
- (void)saveStoreUUID:(id)arg1;
- (void)sendAlbums:(id)arg1 toBatchManager:(id)arg2;
- (void)sendAssets:(id)arg1 toBatchManager:(id)arg2;
- (void)setupHubConnection;
- (BOOL)shouldProcessDuringInitialUpload:(id)arg1;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
- (void)sortData:(id)arg1 withMode:(int)arg2 forAssets:(id)arg3 adjustedAssets:(id)arg4 andAlbums:(id)arg5 inManagedObjectContext:(id)arg6;
- (void)sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)stop;
- (void)stopAll;
- (void)sync;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)transitionToState:(unsigned int)arg1;
- (void)unpause;
- (void)unregisterToChangeHubNotification;
- (void)updateLastKnownIndexFromChangeHub;
- (void)uploadFullPhotoLibraryToCloud;
- (void)uploadToCloudForEvents:(id)arg1;

@end
