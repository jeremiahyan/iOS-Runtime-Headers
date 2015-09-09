/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSQLiteConnection : NSObject {
    int _cacheSize;
    NSString *_cachedClassName;
    struct sqlite3 { } *_dbConnection;
    NSString *_dbLock;
    NSString *_filePath;
    NSMutableDictionary *_preparedDynamicStatements;
    NSMutableDictionary *_preparedStatements;
    NSMutableDictionary *_preparedUpdateStatements;
    int _transactionInProgress;
    NSString *_transactionLock;
}

@property int cacheSize;
@property (retain) NSString *cachedClassName;
@property struct sqlite3 { }*dbConnection;
@property (nonatomic, retain) NSString *dbLock;
@property (nonatomic, copy) NSString *filePath;
@property (retain) NSMutableDictionary *preparedDynamicStatements;
@property (retain) NSMutableDictionary *preparedStatements;
@property (retain) NSMutableDictionary *preparedUpdateStatements;
@property int transactionInProgress;
@property (retain) NSString *transactionLock;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)masterTableForTable:(id)arg1 andType:(id)arg2;
+ (void)removeDBAtFilePath:(id)arg1;
+ (id)sharedSQLiteConnection;
+ (id)versionForTable:(id)arg1;

- (void).cxx_destruct;
- (void)beginTransaction;
- (int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3;
- (void)buildColumnInsert:(id*)arg1 andValueInsert:(id*)arg2 forEntry:(id)arg3;
- (int)cacheSize;
- (id)cachedClassName;
- (void)checkPointDB;
- (void)closeConnection;
- (BOOL)copyDatabaseToPath:(id)arg1;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5;
- (BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5 withCacheSize:(int)arg6;
- (void)createCoveringIndexOnTable:(id)arg1 forColumns:(id)arg2;
- (void)createIndexOnTable:(id)arg1 forColumn:(id)arg2;
- (void)createTableName:(id)arg1 withColumns:(id)arg2;
- (struct sqlite3 { }*)dbConnection;
- (id)dbLock;
- (void)dealloc;
- (void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2;
- (void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2;
- (void)displaySchema:(id)arg1;
- (void)dropTable:(id)arg1;
- (void)dropTables:(id)arg1;
- (void)endTransaction;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (void)enumerateAllTablesWithBlock:(id /* block */)arg1;
- (id)filePath;
- (void)hashEntryKeyKeys:(id)arg1;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFilePath:(id)arg1 withCacheSize:(int)arg2;
- (BOOL)isTransactionInProgress;
- (void)loadArrayValuesIntoEntry:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)loadLookupTableValuesIntoEntry:(id)arg1;
- (void)lockDatabaseWithBlock:(id /* block */)arg1;
- (id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3;
- (id)mergeDataFromOtherDBFile:(id)arg1;
- (BOOL)openCurrentFile;
- (BOOL)openCurrentFileWithCacheSize:(int)arg1;
- (BOOL)passesIntegrityCheck;
- (id)performQuery:(id)arg1;
- (id)performStatement:(id)arg1;
- (id)preparedDynamicStatements;
- (id)preparedStatements;
- (id)preparedUpdateStatements;
- (void)printDBStatusString;
- (void)releaseMemory;
- (void)removeEmptyOldTables;
- (void)removeIDIndexes;
- (void)removeTableNameFromMergeDB:(id)arg1;
- (int)rowCountForTable:(id)arg1;
- (void)runTrimQuery:(id)arg1;
- (double)schemaVersionForTable:(id)arg1;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)setCacheSize:(int)arg1;
- (void)setCachedClassName:(id)arg1;
- (void)setDbConnection:(struct sqlite3 { }*)arg1;
- (void)setDbLock:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setJournalMode:(short)arg1;
- (void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3 withStringValue:(id)arg4;
- (void)setPreparedDynamicStatements:(id)arg1;
- (void)setPreparedStatements:(id)arg1;
- (void)setPreparedUpdateStatements:(id)arg1;
- (void)setSchemaVersion:(double)arg1 forTableName:(id)arg2;
- (void)setTransactionInProgress:(int)arg1;
- (void)setTransactionLock:(id)arg1;
- (id)sqlFormatedColumnNamesForTable:(id)arg1 withQuoteChar:(BOOL)arg2;
- (id)sqlFormatedColumnNamesForTableInsert:(id)arg1;
- (id)sqlFormatedColumnNamesForTableSelect:(id)arg1;
- (BOOL)tableExistsForTableName:(id)arg1;
- (BOOL)tableHasTimestampColumn:(id)arg1;
- (id)tableInfo:(id)arg1;
- (int)transactionInProgress;
- (id)transactionLock;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2;
- (void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3;
- (void)trimTable:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withFilter:(id)arg4;
- (void)updateEntry:(id)arg1;
- (void)vacuum;
- (id)workQueue;
- (void)writeAggregateEntry:(id)arg1;
- (void)writeArrayEntries:(id)arg1;
- (void)writeDynamicEntries:(id)arg1;
- (id)writeEntries:(id)arg1;
- (long long)writeEntry:(id)arg1;

@end
