/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOperation : NSOperation {
    NSError *_error;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    int _status;
}

@property (readonly) NSError *error;
@property (readonly) int status;

+ (void)initialize;
+ (int)statusOfOperations:(id)arg1 error:(id*)arg2;

- (BOOL)_setStatus:(int)arg1 error:(id)arg2 resultingStatus:(int*)arg3 failureReason:(id*)arg4;
- (void)dealloc;
- (void)didEnterTerminalState;
- (id)error;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;
- (void)finalize;
- (id)init;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)markAsCancelled;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;
- (int)status;

@end
