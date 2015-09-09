/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridDownloadHelper : NSObject {
    id /* block */ _currentDownloadSuccessHandler;
    NSString *_currentGridProgressIdentifier;
    PUResourceDownloadRequest *_currentResourceDownloadRequest;
    PUPhotosGridViewController *_gridViewController;
}

@property (nonatomic, readonly) PUPhotosGridViewController *gridViewController;

- (void).cxx_destruct;
- (void)_downloadForRequest:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 canceled:(BOOL)arg3 error:(id)arg4;
- (void)_startDownloadingRequiredResourcesForRequest:(id)arg1 inCollection:(id)arg2;
- (void)_updateDownloadProgress;
- (void)cancelCurrentAssetDownload;
- (id)gridViewController;
- (void)handleDownloadOfAsset:(id)arg1 inCollection:(id)arg2 withSuccessHandler:(id /* block */)arg3;
- (id)initWithGridViewController:(id)arg1;

@end
