/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLMediaLibraryService : NSObject <MLMediaLibraryServiceClientProtocol> {
    NSMutableDictionary *_progressBlocksByUUID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_serviceConnection;
    <MLMediaLibraryServiceProtocol> *_serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)_setDaemonProcessInfo:(id)arg1;
+ (id)sharedMediaLibraryService;

- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned int)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelImportOperation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)getDeviceSharedLibraryPath:(id /* block */)arg1;
- (void)getLanguageResourcesWithCompletion:(id /* block */)arg1;
- (void)importOperationWithIdentifier:(id)arg1 didUpdateWithProgress:(float)arg2;
- (id)init;
- (void)lockDatabaseForReason:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)performDatabaseOperation:(unsigned int)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performImport:(id)arg1 fromSource:(unsigned int)arg2 withProgressBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(id)arg1 error:(id)arg2;
- (void)setDeviceSharedLibraryPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setOptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)unlockDatabaseWithCompletion:(id /* block */)arg1;
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
