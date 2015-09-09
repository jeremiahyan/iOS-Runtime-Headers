/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoSharingHelper : NSObject

+ (id)_downloadRequestQueue;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (id)_pathToServerConfigurationCache;
+ (id)_phoneInvitationFailureFile;
+ (id)_processPhoneFailuresQueue;
+ (int)_serverLimitValueForKey:(id)arg1 withDefaultResult:(int)arg2;
+ (BOOL)_shouldDownloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)accountMatchesEmail:(id)arg1;
+ (void)accountSettingsChanged;
+ (void)applicationIsInForeground:(BOOL)arg1;
+ (BOOL)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id*)arg2;
+ (BOOL)canCreateStreamInPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (BOOL)canSetUserCloudSharedLiked:(BOOL)arg1 forAssets:(id)arg2 error:(id*)arg3;
+ (void)checkServerModelForAlbum:(id)arg1;
+ (void)clearCachedAccountState;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(id /* block */)arg1;
+ (BOOL)debugAlwaysStreamSharedVideos;
+ (BOOL)debugAutoAcceptInvitation;
+ (BOOL)debugDownloadAllDerivatives;
+ (BOOL)debugDownloadMetadataOnly;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize { float x1; float x2; })derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (float)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (void)downloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)forgetSharingPersonID:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(id /* block */)arg1;
+ (BOOL)hasPhoneInvitationForAlbum:(id)arg1;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (void)initializeMSPlatform;
+ (double)intervalBetweenAlbumPolls;
+ (double)intervalBetweenPolls;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (BOOL)isCellularConnection;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(id /* block */)arg1;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (int)maxAssetsPerStream;
+ (int)maxCharactersPerComment;
+ (int)maxCommentsPerAsset;
+ (int)maxNumDerivativesToDownloadPerPush;
+ (int)maxOwnedStreams;
+ (int)maxSubscribedStreams;
+ (int)maxSubscribersPerStream;
+ (int)maxVideoLengthForPublishing;
+ (void)photosPreferencesChanged;
+ (void)pollForAlbumListUpdates;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int*)arg1 handler:(id /* block */)arg2;
+ (BOOL)removeCloudSharingDirectories:(id*)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 videoType:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (void)resetAllLocalState;
+ (void)retryOutstandingActivities;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (id)serverSideConfigurationDictionary;
+ (BOOL)sharedStreamsEnabled;
+ (BOOL)sharedStreamsExplictlyDisabled;
+ (BOOL)sharedStreamsUIEnabled;
+ (id)sharingEmail;
+ (id)sharingPersonID;
+ (id)streamdVideoCache;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (void)trackUploadBatchSize:(unsigned int)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize { float x1; float x2; })videoPosterFrameDimension;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;

@end
