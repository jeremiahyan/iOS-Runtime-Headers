/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAssetChange : CPLItemChange {
    NSDate *_addedDate;
    CPLAdjustments *_adjustments;
    NSDate *_assetDate;
    unsigned int _assetHDRType;
    unsigned int _assetSubtype;
    unsigned int _burstFlags;
    NSString *_burstIdentifier;
    NSString *_caption;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    int _duration;
    NSString *_extendedDescription;
    BOOL _favorite;
    BOOL _hidden;
    NSArray *_keywords;
    NSDate *_lastSharedDate;
    CLLocation *_location;
    NSString *_masterIdentifier;
    NSString *_mediaGroupIdentifier;
    NSString *_momentIdentifier;
    NSString *_momentName;
    int _orientation;
    unsigned int _originalChoice;
    NSArray *_people;
    CPLPlaceAnnotation *_placeAnnotation;
    NSArray *_resources;
    NSString *_timeZoneName;
    NSNumber *_timeZoneOffset;
    int _videoComplementDurationTimescale;
    int _videoComplementDurationValue;
    int _videoComplementImageDisplayTimescale;
    int _videoComplementImageDisplayValue;
    unsigned int _videoComplementVisibilityState;
}

@property (nonatomic, copy) NSDate *addedDate;
@property (nonatomic, retain) CPLAdjustments *adjustments;
@property (nonatomic, copy) NSDate *assetDate;
@property (nonatomic) unsigned int assetHDRType;
@property (nonatomic) unsigned int assetSubtype;
@property (nonatomic) unsigned int burstFlags;
@property (nonatomic, copy) NSString *burstIdentifier;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic, copy) NSString *collectionName;
@property (nonatomic) int duration;
@property (nonatomic, copy) NSString *extendedDescription;
@property (getter=isFavorite, nonatomic) BOOL favorite;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, copy) NSDate *lastSharedDate;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *masterIdentifier;
@property (nonatomic, copy) NSString *mediaGroupIdentifier;
@property (nonatomic, copy) NSString *momentIdentifier;
@property (nonatomic, copy) NSString *momentName;
@property (nonatomic) int orientation;
@property (nonatomic) unsigned int originalChoice;
@property (nonatomic, copy) NSArray *people;
@property (nonatomic, retain) CPLPlaceAnnotation *placeAnnotation;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic, copy) NSString *timeZoneName;
@property (nonatomic, copy) NSNumber *timeZoneOffset;
@property (nonatomic) int videoComplementDurationTimescale;
@property (nonatomic) int videoComplementDurationValue;
@property (nonatomic) int videoComplementImageDisplayTimescale;
@property (nonatomic) int videoComplementImageDisplayValue;
@property (nonatomic) unsigned int videoComplementVisibilityState;

- (void).cxx_destruct;
- (BOOL)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3;
- (id)addedDate;
- (id)adjustments;
- (id)assetDate;
- (unsigned int)assetHDRType;
- (unsigned int)assetSubtype;
- (void)awakeFromStorage;
- (unsigned int)burstFlags;
- (id)burstIdentifier;
- (id)caption;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)collectionIdentifier;
- (id)collectionName;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3;
- (int)dequeueOrder;
- (int)duration;
- (id)extendedDescription;
- (id)identifiersForMapping;
- (id)init;
- (BOOL)isFavorite;
- (BOOL)isHidden;
- (id)keywords;
- (id)lastSharedDate;
- (id)location;
- (id)masterIdentifier;
- (id)mediaGroupIdentifier;
- (id)momentIdentifier;
- (id)momentName;
- (int)orientation;
- (unsigned int)originalChoice;
- (id)people;
- (id)placeAnnotation;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (id)proposedCloudIdentifierWithError:(id*)arg1;
- (id)relatedIdentifier;
- (id)resources;
- (void)setAddedDate:(id)arg1;
- (void)setAdjustments:(id)arg1;
- (void)setAssetDate:(id)arg1;
- (void)setAssetHDRType:(unsigned int)arg1;
- (void)setAssetSubtype:(unsigned int)arg1;
- (void)setBurstFlags:(unsigned int)arg1;
- (void)setBurstIdentifier:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setExtendedDescription:(id)arg1;
- (void)setFavorite:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLastSharedDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMasterIdentifier:(id)arg1;
- (void)setMediaGroupIdentifier:(id)arg1;
- (void)setMomentIdentifier:(id)arg1;
- (void)setMomentName:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOriginalChoice:(unsigned int)arg1;
- (void)setPeople:(id)arg1;
- (void)setPlaceAnnotation:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (void)setTimeZoneOffset:(id)arg1;
- (void)setVideoComplementDurationTimescale:(int)arg1;
- (void)setVideoComplementDurationValue:(int)arg1;
- (void)setVideoComplementImageDisplayTimescale:(int)arg1;
- (void)setVideoComplementImageDisplayValue:(int)arg1;
- (void)setVideoComplementVisibilityState:(unsigned int)arg1;
- (BOOL)supportsResources;
- (id)timeZoneName;
- (id)timeZoneOffset;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (int)videoComplementDurationTimescale;
- (int)videoComplementDurationValue;
- (int)videoComplementImageDisplayTimescale;
- (int)videoComplementImageDisplayValue;
- (unsigned int)videoComplementVisibilityState;

@end
