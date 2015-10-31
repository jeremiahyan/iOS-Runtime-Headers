/* Generated by RuntimeBrowser.
 */

@protocol HDSyncEngine <NSObject>

@required

- (BOOL)applyAcknowledgedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 resetNext:(BOOL)arg3 error:(id*)arg4;
- (BOOL)applySyncChange:(id <HDSyncChange>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (BOOL)applySyncObjectCollection:(id <HDSyncObjectCollection>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (BOOL)getReceivedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id <HDSyncStore>)arg2;
- (void)resetStore:(id <HDSyncStore>)arg1;
- (BOOL)synchronizeStore:(id <HDSyncStore>)arg1 withContext:(id)arg2 error:(id*)arg3;

@end
