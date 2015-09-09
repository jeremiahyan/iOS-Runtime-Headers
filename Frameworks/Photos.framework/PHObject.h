/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObject : NSObject <NSCopying> {
    BOOL _deleted;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned int _propertyHint;
    NSString *_uuid;
}

@property (getter=isDeleted, readonly) BOOL deleted;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property unsigned int propertyHint;
@property (getter=isTransient, readonly) BOOL transient;
@property (readonly) NSString *uuid;

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(id /* block */)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsCloudSharedType;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsPhotoStreamType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (BOOL)managedObjectSupportsWallpaperType;
+ (BOOL)managedObjectSupportsiTunesSyncType;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_identifier;
- (id)_shortObjectIDURI;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTransient;
- (id)localIdentifier;
- (id)objectID;
- (id)photoLibrary;
- (unsigned int)propertyHint;
- (void)setPropertyHint:(unsigned int)arg1;
- (id)uuid;

@end
