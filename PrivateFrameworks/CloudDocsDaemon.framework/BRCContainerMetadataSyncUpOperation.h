/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BOOL _shouldPerformAnotherBatch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL shouldPerformAnotherBatch;
@property (readonly) Class superclass;

- (id)initWithSession:(id)arg1;
- (void)main;
- (void)performAfterSavingRecords:(id /* block */)arg1;
- (BOOL)shouldPerformAnotherBatch;
- (BOOL)shouldRetryForError:(id)arg1;
- (unsigned long long)startActivity;

@end
