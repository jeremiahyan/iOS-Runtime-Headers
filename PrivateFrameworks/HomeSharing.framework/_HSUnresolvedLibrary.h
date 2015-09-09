/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface _HSUnresolvedLibrary : NSObject {
    int _browserType;
    id /* block */ _completionHandler;
    NSNetService *_netService;
    struct _DNSServiceRef_t { } *_resolvingDNSService;
}

- (void).cxx_destruct;
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)arg1;
- (void)_netServiceDidNotResolve;
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)arg1 host:(struct hostent { char *x1; char **x2; int x3; int x4; char **x5; }*)arg2 port:(unsigned short)arg3;
- (void)_timeoutResolve;
- (void)dealloc;
- (id)initWithNSNetService:(id)arg1 browserType:(int)arg2;
- (void)resolveWithTimeout:(double)arg1 completionHandler:(id /* block */)arg2;

@end
