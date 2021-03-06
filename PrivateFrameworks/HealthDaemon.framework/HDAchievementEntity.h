/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementEntity : HDHealthEntity <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_achievementWithProperties:(id)arg1 row:(struct HDSQLiteRow { }*)arg2 propertySetters:(id)arg3;
+ (BOOL)_enumerateAchievementsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
+ (id)_insertAchievement:(id)arg1 provenance:(int)arg2 database:(id)arg3 error:(id*)arg4;
+ (BOOL)_insertAchievements:(id)arg1 provenance:(int)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)_predicateForProvenance:(int)arg1;
+ (id)_predicateForSyncAnchor:(id)arg1;
+ (id)_propertySettersForAchievement;
+ (id)_tableValuesFromAchievement:(id)arg1 provenance:(int)arg2;
+ (id)_unalertedAchievementsPredicate;
+ (id)achievementsWithPredicate:(id)arg1 inHealthDatabase:(id)arg2 error:(id*)arg3;
+ (id)columnsDefinition;
+ (int)countOfUnalertedAchievementsInHealthDatabase:(id)arg1;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (BOOL)insertAchievement:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)insertAchievements:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)markAchievement:(id)arg1 alertedInHealthDatabase:(id)arg2 error:(id*)arg3;
+ (BOOL)markAchievement:(id)arg1 viewedInHealthDatabase:(id)arg2 error:(id*)arg3;
+ (int)nanoSyncObjectType;
+ (long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (int)numberOfUnviewedAchievementsInHealthDatabase:(id)arg1;
+ (id)propertyForSyncProvenance;
+ (int)protectionClass;
+ (BOOL)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)syncEntityDependencies;
+ (int)syncEntityType;
+ (id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)unalertedAchievementsInHealthDatabase:(id)arg1;

@end
