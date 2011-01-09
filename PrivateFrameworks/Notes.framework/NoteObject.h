/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */



@interface NoteObject : NSManagedObject 
{
}

@property(retain) NSNumber *deletedFlag;
@property(retain) NSNumber *externalServerIntId;
@property(retain) NSNumber *externalFlags;
@property(retain) NSString *content;
@property(readonly) NSString *contentAsPlainText;
@property BOOL isPlainText;
@property(readonly) NSURL *noteId;
@property(readonly) BOOL isMarkedForDeletion;
@property(readonly) BOOL hasValidServerIntId;
@property long long serverIntId;
@property unsigned long long flags;
@property(retain) NSData *externalRepresentation;
@property(retain) NSString *externalContentRef;
@property(retain) NSNumber *isBookkeepingEntry;
@property(retain) NSString *guid;
@property(retain) NSString *serverId;
@property(retain) NSNumber *integerId;
@property(retain) NoteStoreObject *store;
@property(retain) NoteBodyObject *body;
@property(retain) NSNumber *containsCJK;
@property(retain) NSNumber *contentType;
@property(retain) NSString *title;
@property(retain) NSDate *creationDate;
@property(retain) NSDate *modificationDate;
@property(retain) NSString *author;
@property(retain) NSString *summary;


- (id)noteId;
- (id)externalContentRef;
- (void)setExternalContentRef:(id)arg1;
- (void)markForDeletion;
- (id)contentAsPlainText;
- (void)setFlags:(unsigned long long)arg1;
- (BOOL)isPlainText;
- (void)setIsPlainText:(BOOL)arg1;
- (unsigned long long)flags;
- (id)content;
- (id)externalRepresentation;
- (BOOL)isMarkedForDeletion;
- (void)setExternalRepresentation:(id)arg1;
- (BOOL)hasValidServerIntId;
- (long long)serverIntId;
- (void)setServerIntId:(long long)arg1;
- (void)setContent:(id)arg1;

@end