/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private> {
    PLMomentNameInfo *_cachedNameInfo;
    BOOL _loadedNameInfo;
    BOOL didRegisteredWithUserInterfaceContext;
    BOOL isRegisteredForChanges;
}

@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, retain) CLLocation *approximateLocation;
@property (nonatomic, retain) NSData *approximateLocationData;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) short generationType;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic) BOOL isRegisteredForChanges;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) PLMomentList *megaMomentList;
@property (nonatomic, retain) PLMomentLibrary *momentLibrary;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, retain) NSDate *representativeDate;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic) BOOL reverseLocationDataIsValid;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *title2;
@property (nonatomic, retain) NSString *title3;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic, retain) NSArray *userTitles;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;
@property (nonatomic, retain) PLMomentList *yearMomentList;

+ (id)allAssetsIncludedInMomentsInLibrary:(id)arg1;
+ (id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 IDsOnly:(BOOL)arg2 error:(id*)arg3;
+ (id)allMomentsInLibrary:(id)arg1;
+ (id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2;

- (void)_updateCachedNameInfoIfNeeded;
- (BOOL)_validateForInsertOrUpdate:(id*)arg1;
- (void)addAssets:(id)arg1;
- (void)addAssetsObject:(id)arg1;
- (unsigned int)approximateCount;
- (id)approximateLocation;
- (unsigned int)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (void)didTurnIntoFault;
- (id)groupURL;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned int)arg2;
- (void)invalidateNameInfo;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isRegisteredForChanges;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (unsigned int)photosCount;
- (struct CGImage { }*)posterImage;
- (void)registerForChanges;
- (void)removeAssetData:(id)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeAssetsObject:(id)arg1;
- (void)removeObjectFromAssetsAtIndex:(unsigned int)arg1;
- (void)replaceAssetDataAtIndex:(unsigned int)arg1 withAssetData:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)replaceObjectInAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)secondaryKeyAsset;
- (void)setApproximateLocation:(id)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUserTitles:(id)arg1;
- (BOOL)supportsDiagnosticInformation;
- (id)tertiaryKeyAsset;
- (id)uniqueObjectID;
- (void)unregisterForChanges;
- (id)userTitles;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (unsigned int)videosCount;
- (void)willSave;
- (void)willTurnIntoFault;

@end
