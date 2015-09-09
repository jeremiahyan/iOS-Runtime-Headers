/* Generated by RuntimeBrowser.
 */

@protocol NDBackgroundSessionClient <NSObject>

@required

- (void)backgroundAVAssetDownloadTask:(unsigned int)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned int)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)backgroundDataTask:(void *)arg1 didReceiveData:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 7: unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundDataTaskDidBecomeDownloadTask:(unsigned int)arg1;
- (void)backgroundDownloadTask:(void *)arg1 didFinishDownloadingToURL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 7: unsigned int, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundDownloadTask:(unsigned int)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (void)backgroundDownloadTask:(unsigned int)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundSessionDidFinishAppWake:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundSessionDidStartAppWake:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundTask:(void *)arg1 _willSendRequestForEstablishedConnection:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, NSFileHandle *, void*
- (void)backgroundTask:(void *)arg1 didCompleteWithError:(void *)arg2 timingData:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: unsigned int, NSError *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundTask:(void *)arg1 didReceiveChallenge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSURLCredential *, void*
- (void)backgroundTask:(unsigned int)arg1 didReceiveResponse:(NSURLResponse *)arg2 timingData:(NSDictionary *)arg3;
- (void)backgroundTask:(void *)arg1 didReceiveResponse:(void *)arg2 timingData:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned int, NSURLResponse *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)backgroundTask:(unsigned int)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned int)arg1 hasConnectionWaitingWithError:(NSError *)arg2;
- (void)backgroundTask:(unsigned int)arg1 hasConnectionWaitingWithReason:(long long)arg2;
- (void)backgroundTask:(void *)arg1 needNewBodyStream:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)backgroundTask:(void *)arg1 willPerformHTTPRedirection:(void *)arg2 withNewRequest:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned int, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*
- (void)backgroundTaskDidResume:(unsigned int)arg1;
- (void)backgroundTaskDidSuspend:(unsigned int)arg1;
- (void)backgroundTaskHasConnectionWaiting:(unsigned int)arg1;
- (void)credStorage_allCredentialsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)credStorage_credentialsForProtectionSpace:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURLProtectionSpace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)credStorage_defaultCredentialForProtectionSpace:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURLProtectionSpace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLCredential *, void*
- (void)credStorage_getInitialCredentialDictionariesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)credStorage_removeCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setDefaultCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)openFileAtPath:(void *)arg1 mode:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)willRetryBackgroundDataTask:(unsigned int)arg1 withError:(NSError *)arg2 timingData:(NSDictionary *)arg3;

@end
