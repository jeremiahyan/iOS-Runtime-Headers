/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying> {
    NSData *_dateForRequestingMoreMessages;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int syncedMailboxType : 1; 
    } _has;
    NSMutableArray *_initialMessages;
    NSString *_syncedMailboxAccountId;
    NSString *_syncedMailboxCustomName;
    unsigned int _syncedMailboxType;
    NSString *_syncedMailboxURL;
}

@property (nonatomic, retain) NSData *dateForRequestingMoreMessages;
@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) BOOL hasDateForRequestingMoreMessages;
@property (nonatomic, readonly) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic, readonly) BOOL hasSyncedMailboxAccountId;
@property (nonatomic, readonly) BOOL hasSyncedMailboxCustomName;
@property (nonatomic) BOOL hasSyncedMailboxType;
@property (nonatomic, readonly) BOOL hasSyncedMailboxURL;
@property (nonatomic, retain) NSMutableArray *initialMessages;
@property (nonatomic, retain) NSString *syncedMailboxAccountId;
@property (nonatomic, retain) NSString *syncedMailboxCustomName;
@property (nonatomic) unsigned int syncedMailboxType;
@property (nonatomic, retain) NSString *syncedMailboxURL;

- (void).cxx_destruct;
- (void)addInitialMessage:(id)arg1;
- (void)clearInitialMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForRequestingMoreMessages;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasDateForRequestingMoreMessages;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (BOOL)hasSyncedMailboxAccountId;
- (BOOL)hasSyncedMailboxCustomName;
- (BOOL)hasSyncedMailboxType;
- (BOOL)hasSyncedMailboxURL;
- (unsigned int)hash;
- (id)initialMessageAtIndex:(unsigned int)arg1;
- (id)initialMessages;
- (unsigned int)initialMessagesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDateForRequestingMoreMessages:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setHasSyncedMailboxType:(BOOL)arg1;
- (void)setInitialMessages:(id)arg1;
- (void)setSyncedMailboxAccountId:(id)arg1;
- (void)setSyncedMailboxCustomName:(id)arg1;
- (void)setSyncedMailboxType:(unsigned int)arg1;
- (void)setSyncedMailboxURL:(id)arg1;
- (id)syncedMailboxAccountId;
- (id)syncedMailboxCustomName;
- (unsigned int)syncedMailboxType;
- (id)syncedMailboxURL;
- (void)writeTo:(id)arg1;

@end
