/* Generated by RuntimeBrowser.
 */

@protocol HDSyncEntity <NSObject>

@required

+ (<HDSyncCodable> *)decodeSyncObjectWithData:(NSData *)arg1;
+ (long long)nextSyncAnchorWithStore:(id <HDSyncStore>)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 error:(id*)arg4;
+ (BOOL)receiveSyncObjects:(NSArray *)arg1 syncStore:(id <HDSyncStore>)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 error:(id*)arg4;
+ (NSSet *)syncEntityDependencies;
+ (int)syncEntityType;
+ (NSArray *)syncObjectsWithStore:(id <HDSyncStore>)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id <HDHealthDaemon>)arg4 error:(id*)arg5;

@end
