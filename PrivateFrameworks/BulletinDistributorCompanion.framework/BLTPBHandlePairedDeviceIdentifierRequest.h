/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBHandlePairedDeviceIdentifierRequest : PBRequest <NSCopying> {
    BOOL _carry;
    struct { 
        unsigned int carry : 1; 
    } _has;
    NSString *_identifier;
}

@property (nonatomic) BOOL carry;
@property (nonatomic) BOOL hasCarry;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)carry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCarry;
- (BOOL)hasIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCarry:(BOOL)arg1;
- (void)setHasCarry:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
