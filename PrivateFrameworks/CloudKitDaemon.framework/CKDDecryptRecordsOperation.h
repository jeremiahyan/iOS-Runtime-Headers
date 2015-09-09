/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {
    BOOL _forcePCSDecrypt;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    id /* block */ _recordDecryptedBlock;
    NSArray *_recordsToDecrypt;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (nonatomic) BOOL forcePCSDecrypt;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *recordDecryptGroup;
@property (nonatomic, copy) id /* block */ recordDecryptedBlock;
@property (nonatomic, retain) NSArray *recordsToDecrypt;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)_decryptRecord:(id)arg1;
- (void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProtectionDataForRecord:(id)arg1;
- (void)_handleShareProtectionDataForRecord:(id)arg1;
- (void)_handleZoneProtectionDataForRecord:(id)arg1;
- (void)_recordWasDecrypted:(id)arg1 withError:(id)arg2;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (BOOL)forcePCSDecrypt;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)operationShouldBeFlowControlled;
- (id)recordDecryptGroup;
- (id /* block */)recordDecryptedBlock;
- (id)recordsToDecrypt;
- (void)setForcePCSDecrypt:(BOOL)arg1;
- (void)setRecordDecryptGroup:(id)arg1;
- (void)setRecordDecryptedBlock:(id /* block */)arg1;
- (void)setRecordsToDecrypt:(id)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (BOOL)shouldCheckAppVersion;
- (id)webSharingIdentityDataByRecordID;

@end