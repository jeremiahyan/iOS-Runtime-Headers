/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingFullSyncSession : SYSession {
    unsigned long long _activity;
    int _state;
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    BOOL canRestart;
    BOOL canRollback;
}

- (void).cxx_destruct;
- (void)_cancelSession;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEndSync:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleError:(id)arg1;
- (void)_installStateListener;
- (void)_notifyErrorAndShutdown;
- (void)_processNextState;
- (void)_sendEndSessionResponse:(id)arg1;
- (void)_sessionComplete;
- (void)_sessionEnded;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)arg1;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (unsigned int)protocolVersion;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)start:(id /* block */)arg1;
- (int)state;

@end
