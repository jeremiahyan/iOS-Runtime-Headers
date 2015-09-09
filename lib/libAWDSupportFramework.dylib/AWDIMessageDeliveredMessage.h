/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMessageDeliveredMessage : PBCodable <NSCopying> {
    unsigned int _deliveryDuration;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deliveryDuration : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int deliveryDuration;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasDeliveryDuration;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deliveryDuration;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasDeliveryDuration;
- (BOOL)hasGuid;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeliveryDuration:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeliveryDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
