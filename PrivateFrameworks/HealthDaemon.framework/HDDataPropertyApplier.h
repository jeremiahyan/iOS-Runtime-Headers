/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataPropertyApplier : NSObject {
    id /* block */ _authorizationFilter;
    HDSQLiteDatabase *_database;
    HDMetadataValueStatement *_metadataValueStatement;
    NSArray *_propertyOrder;
    NSDictionary *_propertySetters;
    NSMutableDictionary *_sourceByPersistentIDCache;
    unsigned int _sourcePropertyIndex;
}

@property (nonatomic, readonly, copy) id /* block */ authorizationFilter;
@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, retain) HDMetadataValueStatement *metadataValueStatement;
@property (nonatomic, readonly, copy) NSArray *propertyOrder;
@property (nonatomic, readonly, copy) NSDictionary *propertySetters;
@property (nonatomic, retain) NSMutableDictionary *sourceByPersistentIDCache;
@property (nonatomic) unsigned int sourcePropertyIndex;

- (void).cxx_destruct;
- (id)_sourceForPersistentID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
- (void)applyPropertiesToObject:(id)arg1 entity:(id)arg2 values:(id*)arg3 healthDaemon:(id)arg4;
- (id /* block */)authorizationFilter;
- (id)database;
- (void)finish;
- (id)initWithPropertyOrder:(id)arg1 propertySetters:(id)arg2 authorizationFilter:(id /* block */)arg3 database:(id)arg4;
- (id)metadataValueStatement;
- (id)propertyOrder;
- (id)propertySetters;
- (void)setMetadataValueStatement:(id)arg1;
- (void)setSourceByPersistentIDCache:(id)arg1;
- (void)setSourcePropertyIndex:(unsigned int)arg1;
- (id)sourceByPersistentIDCache;
- (unsigned int)sourcePropertyIndex;

@end
