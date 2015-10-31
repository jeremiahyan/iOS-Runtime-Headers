/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditProtoSettings : PUSettings {
    BOOL _allowAnyPlugin;
    BOOL _autoCropEnabled;
    BOOL _cropMaskBlurred;
    double _cropRecomposeDelay;
    float _cropSideMargins;
    float _cropWheelSize;
    BOOL _showLevelIndicator;
    BOOL _showResetToolButton;
    BOOL _simulateDownload;
    BOOL _simulateDownloadFailure;
}

@property (nonatomic) BOOL allowAnyPlugin;
@property (nonatomic) BOOL autoCropEnabled;
@property (nonatomic) BOOL cropMaskBlurred;
@property (nonatomic) double cropRecomposeDelay;
@property (nonatomic) float cropSideMargins;
@property (nonatomic) float cropWheelSize;
@property (nonatomic) BOOL showLevelIndicator;
@property (nonatomic) BOOL showResetToolButton;
@property (nonatomic) BOOL simulateDownload;
@property (nonatomic) BOOL simulateDownloadFailure;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)allowAnyPlugin;
- (BOOL)autoCropEnabled;
- (BOOL)cropMaskBlurred;
- (double)cropRecomposeDelay;
- (float)cropSideMargins;
- (float)cropWheelSize;
- (void)setAllowAnyPlugin:(BOOL)arg1;
- (void)setAutoCropEnabled:(BOOL)arg1;
- (void)setCropMaskBlurred:(BOOL)arg1;
- (void)setCropRecomposeDelay:(double)arg1;
- (void)setCropSideMargins:(float)arg1;
- (void)setCropWheelSize:(float)arg1;
- (void)setDefaultValues;
- (void)setShowLevelIndicator:(BOOL)arg1;
- (void)setShowResetToolButton:(BOOL)arg1;
- (void)setSimulateDownload:(BOOL)arg1;
- (void)setSimulateDownloadFailure:(BOOL)arg1;
- (BOOL)showLevelIndicator;
- (BOOL)showResetToolButton;
- (BOOL)simulateDownload;
- (BOOL)simulateDownloadFailure;

@end
