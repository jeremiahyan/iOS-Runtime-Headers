/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUICameraViewController : CAMCameraViewController <UIImagePickerCameraViewController> {
    int _newStatusBarStyle;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _previewViewTransform;
    int _previousStatusBarStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_adjustContentSizeForOrientation:(int)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (int)_cameraCaptureMode;
- (int)_cameraDevice;
- (int)_cameraFlashMode;
- (id)_cameraOverlayView;
- (id)_cameraView;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_cameraViewTransform;
- (BOOL)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (int)_imagePickerStatusBarStyle;
- (void)_setAllowsStillFromVideoMode:(BOOL)arg1;
- (void)_setCameraCaptureMode:(int)arg1;
- (void)_setCameraCaptureMode:(int)arg1 device:(int)arg2;
- (void)_setCameraDevice:(int)arg1;
- (void)_setCameraFlashMode:(int)arg1;
- (void)_setCameraOverlayView:(id)arg1;
- (void)_setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setShowsCameraControls:(BOOL)arg1;
- (BOOL)_showsCameraControls;
- (BOOL)_startVideoCapture;
- (void)_stopVideoCapture;
- (void)_takePicture;
- (void)_updateCameraViewForPopover;
- (void)_windowOrientationWillChange:(id)arg1;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (void)cameraViewCancelled:(id)arg1;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)cameraViewWillPreviewPhoto:(id)arg1;
- (void)cameraViewWillRetakePhoto:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setWantsImageData:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
