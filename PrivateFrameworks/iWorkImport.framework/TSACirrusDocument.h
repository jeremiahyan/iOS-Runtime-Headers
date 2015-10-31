/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {
    NSURL *_URL;
    TSPObjectContext *_context;
    NSString *_documentPasswordHint;
    BOOL _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, readonly) BOOL areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (nonatomic, readonly) TSKCollaborationState *collaborationState;
@property (nonatomic, retain) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentCachePath;
@property (nonatomic, readonly) NSString *documentPasswordHint;
@property (nonatomic, readonly) TSADocumentRoot *documentRoot;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL ignoreDocumentSupport;
@property (nonatomic, readonly) BOOL isDocumentSupportTemporary;
@property (nonatomic, readonly) BOOL isInCollaborationMode;
@property (nonatomic, readonly) BOOL isInReadOnlyMode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TSAUbiquitousRefreshQueue *refreshQueue;
@property (nonatomic, readonly) BOOL skipDocumentUpgrade;
@property (readonly) Class superclass;

- (id)URL;
- (void)close;
- (id)context;
- (void)dealloc;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentPasswordHint;
- (id)documentPasswordHintForWrite;
- (id)documentRoot;
- (id)initWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 error:(id*)arg4 passphrase:(id)arg5;
- (id)name;
- (void)presentPersistenceError:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setURL:(id)arg1;
- (BOOL)skipDocumentUpgrade;
- (id)supportDirectoryURL;

@end
