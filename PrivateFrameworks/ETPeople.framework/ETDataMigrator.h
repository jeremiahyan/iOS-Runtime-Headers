/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ETPeople.framework/ETPeople
 */

@interface ETDataMigrator : DataClassMigrator {
    BOOL _done;
}

+ (id)_normalizedFriendListForFriendList:(id)arg1;
+ (BOOL)normalizeFriendListIfNeeded;

- (BOOL)_performDatabaseUpgradeIfNeeded;
- (id)dataClassName;
- (float)estimatedDuration;
- (float)migrationProgress;
- (BOOL)performMigration;

@end
