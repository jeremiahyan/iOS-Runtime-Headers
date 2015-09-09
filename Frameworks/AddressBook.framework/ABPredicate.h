/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABPredicate : NSPredicate

+ (id)newQueryFromABPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
+ (id)newQueryFromCompoundPredicate:(id)arg1 withSortOrder:(unsigned int)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
+ (id)newQueryWithProperties:(id)arg1 joins:(id)arg2 whereString:(id)arg3 sortOrder:(unsigned int)arg4 groupByProperties:(id)arg5 addressBook:(void*)arg6 propertyIndices:(const struct __CFDictionary {}**)arg7;
+ (id)personPredicateWithAnyValueForProperty:(int)arg1;
+ (id)personPredicateWithGroup:(void*)arg1 source:(void*)arg2 account:(id)arg3;
+ (id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 group:(void*)arg2 source:(void*)arg3 account:(id)arg4 includeSourceInResults:(BOOL)arg5 addressBook:(void*)arg6;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(BOOL)arg4 addressBook:(void*)arg5;
+ (id)personPredicateWithNameLike:(id)arg1 groups:(id)arg2 sources:(id)arg3 includeSourceInResults:(BOOL)arg4 includePhotosInResults:(BOOL)arg5 addressBook:(void*)arg6;
+ (id)personPredicateWithNameOnly:(id)arg1 account:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3;
+ (id)personPredicateWithValue:(id)arg1 comparison:(long)arg2 forProperty:(int)arg3;
+ (void)searchPeopleWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;

- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)bindDouble:(double)arg1 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg2 withBindingOffset:(int*)arg3;
- (void)bindString:(id)arg1 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg2 withBindingOffset:(int*)arg3;
- (void*)callbackContext;
- (void)dealloc;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(int)arg4;
- (BOOL)hasCallback;
- (id)init;
- (BOOL)isValid;
- (id)predicateFormat;
- (id)queryGroupByProperties;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (id)querySelectProperties;
- (id)queryWhereString;

@end
