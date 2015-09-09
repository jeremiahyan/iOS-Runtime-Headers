/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandBuffer : NSObject {
    unsigned long long _commitTime;
    bool _completedCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } *_completedDispatchList;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _completionInterruptTime;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } _cond;
    unsigned long long _creationTime;
    <MTLCommandEncoder> *_currentCommandEncoder;
    unsigned long long _enqueueTime;
    MTLError *_error;
    unsigned long long _kernelCompleteTime;
    unsigned long long _kernelScheduledTime;
    NSString *_label;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _mutex;
    bool _profilingEnabled;
    NSDictionary *_profilingResults;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    BOOL _retainedReferences;
    bool _scheduledCallbacksDone;
    struct MTLDispatch { struct MTLDispatch {} *x1; id /* block */ x2; } *_scheduledDispatchList;
    bool _skipRender;
    unsigned int _status;
    BOOL _strongObjectReferences;
    unsigned long long _submitToHardwareTime;
    unsigned long long _submitToKernelTime;
    BOOL _synchronousDebugMode;
}

@property (readonly) <MTLCommandQueue> *commandQueue;
@property (readonly) NSError *error;
@property (copy) NSString *label;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned int status;
@property (readonly) BOOL synchronousDebugMode;

+ (void)initialize;

- (void)addCompletedHandler:(id /* block */)arg1;
- (void)addScheduledHandler:(id /* block */)arg1;
- (id)commandQueue;
- (void)commit;
- (void)commitAndReset;
- (void)dealloc;
- (id)description;
- (void)didComplete:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)didSchedule:(unsigned long long)arg1 error:(unsigned int)arg2;
- (void)enqueue;
- (id)error;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;
- (BOOL)isCommitted;
- (BOOL)isProfilingEnabled;
- (void)kernelSubmitTime;
- (id)label;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)profilingResults;
- (BOOL)retainedReferences;
- (void)setCommitted:(BOOL)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setProfilingEnabled:(BOOL)arg1;
- (BOOL)skipRender;
- (unsigned int)status;
- (BOOL)synchronousDebugMode;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
