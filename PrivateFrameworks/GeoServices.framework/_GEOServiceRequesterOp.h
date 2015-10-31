/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {
    NSData *_auditToken;
    BOOL _cancelled;
    id /* block */ _completionHandler;
    NSString *_debugRequestName;
    int _experimentDispatcherRequestType;
    int _experimentType;
    PBRequest *_request;
    GEORequester *_requester;
    NSNumber *_serviceTypeNumber;
    BOOL _shouldThrottleRequests;
    NSString *_throttleKey;
    double _timeout;
    unsigned int _urlType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_cleanup;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned int)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(int)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8 shouldThrottleRequests:(BOOL)arg9 throttleKey:(id)arg10;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
