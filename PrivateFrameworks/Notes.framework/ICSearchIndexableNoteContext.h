/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexableNoteContext : NSObject <ICSearchIndexableNoteContext> {
    ICThreadBlockDispatcher *_confinementDispatcher;
}

@property (nonatomic, retain) ICThreadBlockDispatcher *confinementDispatcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)confinementConcurrency;
- (id)confinementDispatcher;
- (id)contextIdentifier;
- (void)enumerateAllObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)evaluateObjectWithIdentifier:(id)arg1 refreshObject:(BOOL)arg2 includeDeleted:(BOOL)arg3 usingBlock:(id /* block */)arg4;
- (id)init;
- (void)invalidateContext;
- (BOOL)isMainContext;
- (id)managedObjectContext;
- (id)noteForIntegerID:(id)arg1;
- (id)objectForIdentifier:(id)arg1 includeDeleted:(BOOL)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)setConfinementDispatcher:(id)arg1;

@end
