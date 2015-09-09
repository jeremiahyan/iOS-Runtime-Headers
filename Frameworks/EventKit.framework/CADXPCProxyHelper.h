/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CADXPCProxyHelper : NSObject {
    NSXPCConnection *_connection;
    Protocol *_protocol;
}

- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
