/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgressObserver : NSObject {
    id /* block */ mHandler;
    BOOL mLastHandledIndeterminate;
    double mLastHandledValue;
    NSObject<OS_dispatch_queue> *mQueue;
    double mValueInterval;
}

@property (nonatomic, readonly) double valueInterval;

- (void)dealloc;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (double)valueInterval;

@end
