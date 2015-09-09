/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMap : NSObject {
    ML3DatabaseConnection *_connection;
    NSMutableArray *_entries;
    ML3MusicLibrary *_library;
    NSData *_maxSortKey;
    NSData *_minSortKey;
    NSMutableDictionary *_nameOrders;
    BOOL _preloadNames;
    long long _smallestNameDelta;
}

- (void).cxx_destruct;
- (BOOL)_insertSortedNameEntriesIntoSortMap:(id)arg1;
- (long long)_maxNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (id)_maxSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_minNameOrderForSortMapEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (id)_minSortKeyForEntry:(id)arg1 iPhoneSortKeyBuilder:(struct iPhoneSortKeyBuilder { }*)arg2;
- (long long)_sortKeyDistance:(id)arg1 sortKey2:(id)arg2 offset:(unsigned int)arg3;
- (id)_sortKeyString:(id)arg1;
- (id)_sortedNameEntriesToInsertForNames:(id)arg1;
- (BOOL)attemptInsertStringsIntoSortMap:(id)arg1;
- (BOOL)commitFailedInsertedStrings:(id)arg1;
- (BOOL)commitUpdates;
- (id)initWithConnection:(id)arg1 library:(id)arg2 preloadNames:(BOOL)arg3;
- (BOOL)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2;
- (BOOL)loadExistingSortedEntries;
- (id)nameOrders;

@end
