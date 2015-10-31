/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYAtomicFIFO : NSObject {
    struct os_lock_handoff_s { 
        struct _os_lock_type_handoff_s {} *osl_type; 
        unsigned long _osl_handoff_opaque[1]; 
    } _lock;
    NSMutableArray *_store;
}

@property (readonly) id head;
@property (readonly) id tail;

- (void).cxx_destruct;
- (id)dequeue;
- (id)dequeueUntil:(id /* block */)arg1;
- (void)enqueue:(id)arg1;
- (id)head;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeAllObjects;
- (id)tail;

@end
