/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionPeerConnectionData : NSObject {
    int _encryptionPreference;
    NSData *_gckSessionConnectionData;
    BOOL _hasIdentitySet;
}

@property (nonatomic) int encryptionPreference;
@property (nonatomic, retain) NSData *gckSessionConnectionData;
@property (nonatomic) BOOL hasIdentitySet;

+ (id)connectionDataSegmentWithEncryptionPreference:(int)arg1 identitySet:(BOOL)arg2 gckSessionConnectionDataBytes:(void*)arg3 gckSessionConnectionDataLength:(unsigned long)arg4;

- (void)dealloc;
- (int)encryptionPreference;
- (id)gckSessionConnectionData;
- (BOOL)hasIdentitySet;
- (id)initWithConnectionDataBlob:(id)arg1;
- (BOOL)parseConnectionDataBlob:(id)arg1;
- (void)parseConnectionDataSegmentWithBytes:(char *)arg1 withLength:(unsigned long)arg2;
- (void)setEncryptionPreference:(int)arg1;
- (void)setGckSessionConnectionData:(id)arg1;
- (void)setHasIdentitySet:(BOOL)arg1;

@end