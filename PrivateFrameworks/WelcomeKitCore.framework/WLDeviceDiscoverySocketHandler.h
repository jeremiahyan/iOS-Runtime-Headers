/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLDeviceDiscoverySocketHandler : WLSocketHandler <NSXMLParserDelegate> {
    NSString *_bonjourServiceName;
    <WLDeviceDiscoverySocketHandlerDelegate> *_delegate;
    BOOL _handshakeDataSent;
    NSObject<OS_dispatch_source> *_readSource;
    NSNetService *_service;
    int _sockfd;
    WLSourceDevice *_sourceDevice;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property (nonatomic, copy) NSString *bonjourServiceName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLDeviceDiscoverySocketHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSNetService *service;
@property (nonatomic, readonly) int sockfd;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_commandStringWithData:(id)arg1;
- (void)_handleHandshakeData:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_handshakeCommandData;
- (id)_handshakeResponseData;
- (void)_observeDataReadEvent;
- (id)_okResponseData;
- (id)bonjourServiceName;
- (id)delegate;
- (void)handleDataReadEventWithSocket:(int)arg1;
- (void)handleReceivedData:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithService:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 delegate:(id)arg2;
- (void)invalidateWithError:(id)arg1;
- (void)pause;
- (void)resume;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (id)service;
- (void)setBonjourServiceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (int)sockfd;

@end
