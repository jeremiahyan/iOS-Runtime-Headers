/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNoteSearchIndexableNoteContext : ICSearchIndexableNoteContext {
    ICNoteContext *_noteContext;
}

@property (nonatomic) ICNoteContext *noteContext;

- (void).cxx_destruct;
- (id)contextIdentifier;
- (void)enumerateAllObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithNoteContext:(id)arg1;
- (void)invalidateContext;
- (BOOL)isMainContext;
- (id)managedObjectContext;
- (id)noteContext;
- (id)noteForIntegerID:(id)arg1;
- (id)objectForIdentifier:(id)arg1 includeDeleted:(BOOL)arg2;
- (void)setNoteContext:(id)arg1;

@end
