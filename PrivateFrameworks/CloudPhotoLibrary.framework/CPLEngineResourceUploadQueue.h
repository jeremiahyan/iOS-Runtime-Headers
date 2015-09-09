/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceUploadQueue : CPLEngineStorage <CPLAbstractObject> {
    BOOL _immediateUploads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (BOOL)_markResourcesAsStaleForItemWithIdentifier:(id)arg1 withResources:(id)arg2 includePending:(BOOL)arg3 error:(id*)arg4;
- (id)_uploadTaskForResource:(id)arg1 foreground:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned int)availabilityOfResource:(id)arg1;
- (unsigned int)countOfOriginalImages;
- (unsigned int)countOfOriginalOthers;
- (unsigned int)countOfOriginalVideos;
- (unsigned int)countOfQueuedUploadTasks;
- (id)dequeueBackgroundUploadTaskForResourceType:(unsigned int)arg1 foreground:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)discardResourceForUpload:(id)arg1 error:(id*)arg2;
- (BOOL)enqueueResourceForBackgroundUpload:(id)arg1 error:(id*)arg2;
- (BOOL)enqueueResourcesForUploadForBatch:(id)arg1 error:(id*)arg2;
- (BOOL)isResourceInQueue:(id)arg1;
- (BOOL)markResourceAsSuccessfullyUploaded:(id)arg1 uploadURL:(id)arg2 error:(id*)arg3;
- (BOOL)markResourcesAsStaleForItemWithIdentifier:(id)arg1 withResources:(id)arg2 error:(id*)arg3;
- (BOOL)noteMedataWasUploadedForStaleOrNotAvailableResource:(id)arg1 error:(id*)arg2;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)prepareCloudResourceForUpload:(id)arg1 fromLocalResource:(id)arg2 error:(id*)arg3;
- (BOOL)reenqueueResource:(id)arg1 uploadURL:(id)arg2 failedToUploadWithUploadError:(id)arg3 error:(id*)arg4;
- (BOOL)resetDequeuedBackgroundUploadTasksWithError:(id*)arg1;
- (BOOL)resetWithError:(id*)arg1;
- (BOOL)shouldUploadResourceWithMetadata:(id)arg1;

@end
