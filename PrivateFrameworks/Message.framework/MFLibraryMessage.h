/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryMessage : MFMailMessage {
    unsigned long long _conversationFlags;
    id /* block */ _deallocationHandler;
    unsigned int _libraryID;
    unsigned int _mailboxID;
    NSString *_messageID;
    NSMutableDictionary *_metadata;
    NSMutableSet *_metadataChangedKeys;
    MFLock *_metadataLock;
    unsigned int _originalMailboxID;
    NSString *_remoteID;
    unsigned int _size;
    unsigned long _uid;
    unsigned long long _uniqueRemoteId;
}

@property (nonatomic, copy) id /* block */ deallocationHandler;

+ (id)messageWithLibraryID:(unsigned int)arg1;

- (id)_attachmentStorageLocation;
- (void)_initializeMetadata;
- (void)_updateUID;
- (id)account;
- (id)attachmentStorageLocation;
- (BOOL)canBeDeleted;
- (void)commit;
- (int)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (void)dealloc;
- (id /* block */)deallocationHandler;
- (id)description;
- (BOOL)hasTemporaryUid;
- (unsigned int)hash;
- (id)initWithLibraryID:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLibraryMessage;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)isPartial;
- (id)library;
- (unsigned int)libraryID;
- (id)mailbox;
- (unsigned int)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned int)messageSize;
- (id)messageStore;
- (id)metadataValueForKey:(id)arg1;
- (unsigned int)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (id)remoteID;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDeallocationHandler:(id /* block */)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (void)setIsPartial:(BOOL)arg1;
- (void)setLibraryID:(unsigned int)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned int)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned long)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned long)uid;
- (unsigned long long)uniqueRemoteId;

@end
