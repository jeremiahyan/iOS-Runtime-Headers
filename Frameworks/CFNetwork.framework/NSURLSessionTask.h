/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTask : NSObject <NSCopying> {
    double __loadingPriority;
    NSURL *_currentRequest_URL;
    NSURL *_currentRequest_mainDocumentURL;
    float _priority;
}

@property unsigned long _allowedProtocolTypes;
@property BOOL _allowsCellular;
@property (nonatomic, copy) NSDictionary *_backgroundTaskTimingData;
@property (copy) NSString *_boundInterfaceIdentifier;
@property long long _bytesPerSecondLimit;
@property BOOL _cacheOnly;
@property int _cachePolicy;
@property (retain) struct _CFURLCache { }*_cfCache;
@property (retain) struct OpaqueCFHTTPCookieStorage { }*_cfCookies;
@property (retain) struct _CFURLCredentialStorage { }*_cfCreds;
@property (retain) struct _CFHSTSPolicy { }*_cfHSTS;
@property (setter=_setConnectionIsCellular:) BOOL _connectionIsCellular;
@property (copy) NSArray *_contentDispositionFallbackArray;
@property int _cookieAcceptPolicy;
@property (retain) struct _CFURLRequest { }*_currentCFURLRequest;
@property unsigned int _darkWakePowerAssertion;
@property BOOL _disallowCellular;
@property long long _expectedWorkload;
@property (copy) NSURL *_ledBellyFallbackURL;
@property (copy) NSString *_ledBellyServiceIdentifier;
@property (copy) NSDictionary *_legacySocketStreamProperties;
@property double _loadingPriority;
@property double _loadingPriorityValue;
@property int _networkServiceType;
@property (nonatomic, retain) struct __PerformanceTiming { }*_performanceTiming;
@property unsigned int _powerAssertion;
@property BOOL _preventsIdleSystemSleep;
@property long long _priority;
@property long long _priorityValue;
@property BOOL _prohibitAuthUI;
@property (nonatomic) id _protocolForTask;
@property (copy) NSDictionary *_proxySettings;
@property long _requestPriority;
@property BOOL _shouldHandleCookies;
@property BOOL _shouldPipelineHTTP;
@property (nonatomic) BOOL _shouldReportTimingDataToAWD;
@property BOOL _shouldSkipPipelineProbe;
@property BOOL _shouldSkipPreferredClientCertificateLookup;
@property BOOL _shouldUsePipelineHeuristics;
@property (copy) NSDictionary *_sslSettings;
@property BOOL _strictContentLength;
@property long long _suspensionThreshhold;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property double _timeoutInterval;
@property (copy) NSString *_uniqueIdentifier;
@property (copy) NSURLSessionTaskHTTPAuthenticator *authenticator;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (copy) NSURLRequest *currentRequest;
@property (readonly, retain) NSURL *currentRequest_URL;
@property (readonly, retain) NSURL *currentRequest_mainDocumentURL;
@property (copy) NSError *error;
@property (copy) NSURLRequest *originalRequest;
@property float priority;
@property (copy) NSURLResponse *response;
@property (retain) NSURLSession *session;
@property double startTime;
@property int state;
@property (copy) NSString *taskDescription;
@property unsigned int taskIdentifier;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)taskForWrappedRequest:(id)arg1;

- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (double)_loadingPriority;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (void)cancel;
- (void)cleanupAndBreakCycles;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentRequest_URL;
- (id)currentRequest_mainDocumentURL;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned int)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (void)initializeHTTPAuthenticatorWithSessionConfiguration:(id)arg1;
- (float)priority;
- (void)resume;
- (void)setPriority:(float)arg1;
- (void)set_loadingPriority:(double)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)suspend;
- (void)updateCurrentRequest:(id)arg1;

@end
