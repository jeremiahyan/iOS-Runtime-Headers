/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataProvider : NSObject {
    id /* block */ _errorHandler;
    id /* block */ _finishedHandler;
    BOOL _isLoading;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (nonatomic) BOOL isLoading;

- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id /* block */)finishedHandler;
- (BOOL)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(int)arg1 userInfo:(id)arg2;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id /* block */)arg3 error:(id /* block */)arg4;

@end
