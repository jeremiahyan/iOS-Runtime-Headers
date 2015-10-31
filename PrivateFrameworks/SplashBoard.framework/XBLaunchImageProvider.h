/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageProvider : NSObject {
    NSMutableDictionary *_clients;
    NSMutableDictionary *_imageCache;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *clients;
@property (nonatomic, retain) NSMutableDictionary *imageCache;

+ (id)sharedInstance;

- (id)_clientForApplicationWithBundleID:(id)arg1;
- (void)_generateLaunchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 generationHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)captureLaunchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequests:(id)arg2 firstImageIsReady:(id /* block */)arg3 withCompletion:(id /* block */)arg4;
- (id)clients;
- (void)configureSnapshot:(id)arg1 withLaunchImageForApplicationWithCompatibilityInfo:(id)arg2 launchRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)imageCache;
- (id)init;
- (void)launchImageForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setClients:(id)arg1;
- (void)setImageCache:(id)arg1;

@end
