/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordMetadata : NSObject {
    NSError *_error;
    NSString *_etag;
    BOOL _isDelete;
    CKDProgressTracker *_progressTracker;
    CKRecord *_record;
    CKRecordID *_recordID;
    CKRecord *_serverRecord;
    unsigned int _uploadState;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) BOOL isDelete;
@property (nonatomic, retain) CKDProgressTracker *progressTracker;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) CKRecord *serverRecord;
@property (nonatomic) unsigned int uploadState;

+ (id)_stringForUploadState:(unsigned int)arg1;
+ (id)modifyMetadataForDeleteWithRecordID:(id)arg1;
+ (id)modifyMetadataWithRecord:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)etag;
- (BOOL)isDelete;
- (id)progressTracker;
- (id)record;
- (id)recordID;
- (id)serverRecord;
- (void)setError:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setIsDelete:(BOOL)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setServerRecord:(id)arg1;
- (void)setUploadState:(unsigned int)arg1;
- (unsigned int)uploadState;

@end
