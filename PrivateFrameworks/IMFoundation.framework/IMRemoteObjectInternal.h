/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRemoteObjectInternal : NSObject {
    NSObject<OS_xpc_object> *_connection;
    long _deathPostPredicate;
    NSRecursiveLock *_lock;
    int _pid;
    NSString *_portName;
    NSString *_processName;
    Protocol *_protocol;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _willBeTerminated;
}

@end
