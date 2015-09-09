/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudDownloadAgent : PLCloudScenarioProducer {
    NSObject<OS_dispatch_queue> *_agentQueue;
    BOOL _initialDownloadDone;
    PLPhotoLibrary *_localLibrary;
    PLCloudPhotoLibraryManager *_remoteLibrary;
    BOOL _waitingForInitialDownloadDone;
    struct { 
        int retries; 
        int state; 
    } _walkStatus;
}

@property (retain) PLPhotoLibrary *localLibrary;
@property (retain) PLCloudPhotoLibraryManager *remoteLibrary;

- (void)_beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned int)arg3 then:(id /* block */)arg4;
- (void)_checkWalkStatusIfNeeded;
- (void)_waitForDownloadDoneIfNeeded;
- (void)activate;
- (void)appInForeground:(id)arg1;
- (unsigned int)batchSize;
- (void)beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 then:(id /* block */)arg3;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned int)arg2 startingAtOffset:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)downloadResources:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)localLibrary;
- (void)metadataChanged:(id)arg1;
- (void)metadataStable:(id)arg1;
- (void)prefetchAllThumbnails;
- (void)prefetchLastWeeksFull;
- (void)prefetchLastWeeksOriginals;
- (void)prefetchResources;
- (id)remoteLibrary;
- (void)resetWalkStatus;
- (void)setLocalLibrary:(id)arg1;
- (void)setRemoteLibrary:(id)arg1;
- (void)systemStarted:(id)arg1;
- (int)typeToIndex:(unsigned int)arg1;

@end