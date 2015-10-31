/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)isRecordWithIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)resetWithError:(id*)arg1;

@end
