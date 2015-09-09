/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSManagedObjectID : NSObject <NSCopying>

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSPersistentStore *persistentStore;
@property (getter=isTemporaryID, readonly) BOOL temporaryID;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (int)version;

- (id)URIRepresentation;
- (BOOL)_isDeallocating;
- (BOOL)_isPersistentStoreAlive;
- (id)_referenceData;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)initWithCoder:(id)arg1;
- (BOOL)isTemporaryID;
- (id)persistentStore;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)pl_shortURI;

@end
