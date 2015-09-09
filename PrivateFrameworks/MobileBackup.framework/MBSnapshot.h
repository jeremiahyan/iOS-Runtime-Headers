/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBSnapshot : NSObject <NSCoding, NSCopying> {
    NSDate *_date;
    NSString *_deviceName;
    BOOL _isCompatible;
    unsigned long long _quotaReserved;
    unsigned int _snapshotID;
    int _state;
    NSString *_systemVersion;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) BOOL isCompatible;
@property (nonatomic, readonly) unsigned long long quotaReserved;
@property (nonatomic, readonly) unsigned int snapshotID;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) NSString *systemVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned int)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(BOOL)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7;
- (BOOL)isCompatible;
- (unsigned long long)quotaReserved;
- (unsigned int)snapshotID;
- (int)state;
- (id)systemVersion;

@end
