/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherHTTPRequest : NSObject <NSURLConnectionDataDelegate> {
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    NSMutableURLRequest *_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;

- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (id)init;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (void)request:(id)arg1 receivedResponseData:(id)arg2;

@end
