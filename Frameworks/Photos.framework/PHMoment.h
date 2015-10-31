/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMoment : PHAssetCollection {
    NSData *_approximateLocationData;
    short _generationType;
    NSDate *_representativeDate;
    NSData *_reverseLocationData;
    BOOL _reverseLocationDataIsValid;
}

@property (nonatomic, readonly) short generationType;
@property (nonatomic, readonly) NSDate *representativeDate;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_decodeTitlesIfNeeded;
- (id)approximateLocation;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canShowAvalancheStacks;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (short)generationType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)representativeDate;

@end
