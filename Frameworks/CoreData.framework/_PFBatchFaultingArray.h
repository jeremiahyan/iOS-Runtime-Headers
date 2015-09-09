/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFBatchFaultingArray : NSArray {
    unsigned int *_LRUBatches;
    _PFArray *_array;
    unsigned int _batchSize;
    int _cd_rc;
    unsigned int _count;
    unsigned int *_entryFlags;
    struct _PFBatchFaultingArrayFlags { 
        unsigned int _LRUIndex : 8; 
        unsigned int _uniformEntity : 1; 
        unsigned int _RESERVED : 23; 
    } _flags;
    NSManagedObjectContext *_moc;
    NSFetchRequest *_request;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (void)_internalDealloc;
- (BOOL)_isDeallocating;
- (id)_newSubArrayInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 asMutable:(BOOL)arg2;
- (BOOL)_tryRetain;
- (void)_turnAllBatchesIntoFaults;
- (void)_turnAllBatchesIntoObjects;
- (id)arrayFromObjectIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id /* block */)arg3;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)initWithPFArray:(id)arg1 andRequest:(id)arg2 andContext:(id)arg3;
- (BOOL)isEqualToArray:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned int)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id /* block */)arg2;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
