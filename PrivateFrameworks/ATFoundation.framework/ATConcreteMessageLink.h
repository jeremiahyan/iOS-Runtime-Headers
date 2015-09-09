/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteMessageLink : NSObject <ATMessageLink, ATSocketDelegate> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_completionHandlersByRequestID;
    NSMutableDictionary *_completionHandlersByResponseID;
    int _endpointType;
    NSString *_guid;
    NSObject<OS_dispatch_queue> *_handlerAccessQueue;
    int _idleTimeoutExceptionCount;
    BOOL _initialized;
    int _keepAliveExceptionCount;
    double _lastActivityTime;
    NSString *_libraryIdentifier;
    unsigned int _nextMessageID;
    NSHashTable *_observers;
    BOOL _open;
    NSMapTable *_outputStreamsToInputStreams;
    ATMessageParser *_parser;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_receivedRequestsByID;
    NSMutableDictionary *_receivedResponsesByID;
    NSMutableDictionary *_requestHandlersByDataClass;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSMutableDictionary *_requestWritersByID;
    NSMutableDictionary *_responseWritersByID;
    NSMutableDictionary *_sentRequestsByID;
    ATSignatureProvider *_signatureProvider;
    ATSocket *_socket;
    NSMutableSet *_streamReaders;
    NSMutableSet *_streamWriters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpointType;
@property (nonatomic, readonly, copy) NSString *guid;
@property (readonly) unsigned int hash;
@property (getter=isInitialized, nonatomic) BOOL initialized;
@property (nonatomic) double lastActivityTime;
@property (nonatomic, copy) NSString *libraryIdentifier;
@property (nonatomic, retain) NSHashTable *observers;
@property (getter=isOpen, nonatomic, readonly) BOOL open;
@property (nonatomic, retain) ATSignatureProvider *signatureProvider;
@property (nonatomic, readonly) ATSocket *socket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeCompletionHandlerForResponseID:(unsigned int)arg1 withError:(id)arg2;
- (unsigned int)_nextRequestID;
- (void)_prepareStreamReaderForMessage:(id)arg1;
- (void)_processIncomingDataRequest:(id)arg1;
- (void)_processIncomingDataResponse:(id)arg1;
- (void)_processIncomingMessage:(id)arg1;
- (void)_processIncomingPartialResponse:(id)arg1;
- (void)_processIncomingRequest:(id)arg1;
- (void)_processIncomingResponse:(id)arg1;
- (void)_queue_checkMessageTimeouts;
- (BOOL)_sendMessage:(id)arg1 error:(id*)arg2;
- (void)addKeepAliveException;
- (void)addObserver:(id)arg1;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)addTimeoutException;
- (void)close;
- (void)dealloc;
- (id)description;
- (int)endpointType;
- (id)guid;
- (BOOL)idleTimeoutEnabled;
- (id)initWithSocket:(id)arg1;
- (BOOL)isInitialized;
- (BOOL)isOpen;
- (double)lastActivityTime;
- (id)libraryIdentifier;
- (id)observers;
- (BOOL)open;
- (void)removeKeepAliveException;
- (void)removeObserver:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)removeTimeoutException;
- (void)sendPartialResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setEndpointType:(int)arg1;
- (void)setInitialized:(BOOL)arg1;
- (void)setLastActivityTime:(double)arg1;
- (void)setLibraryIdentifier:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSignatureProvider:(id)arg1;
- (id)signatureProvider;
- (id)socket;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long)arg3;
- (void)socketDidClose:(id)arg1;

@end
