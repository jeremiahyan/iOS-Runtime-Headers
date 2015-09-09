/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerMux : NSObject {
    NSMutableArray *_clients;
    <_UIIVCResponseDelegateImpl> *_responseDelegate;
    <TIKeyboardInputManager> *_systemInputManager;
}

@property (nonatomic, readonly) BOOL hasSystemInputManager;
@property (nonatomic, retain) <_UIIVCResponseDelegateImpl> *responseDelegate;
@property (nonatomic, retain) <TIKeyboardInputManager> *systemInputManager;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;

- (BOOL)_systemHasKbd;
- (void)addClient:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasSystemInputManager;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)releaseConnectedClients;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)responseDelegate;
- (void)setResponseDelegate:(id)arg1;
- (void)setSystemInputManager:(id)arg1;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1;
- (id)systemInputManager;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;

@end
