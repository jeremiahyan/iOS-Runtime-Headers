/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVResolvedCaptureOptions : NSObject {
    NSMutableDictionary *baseCaptureOptions;
    BOOL captureSessionPresetChanging;
    NSString *faceDetectionMode;
    BOOL faceDetectionNotificationsEnabled;
    BOOL hasStillImageOutput;
    NSMutableDictionary *optionsOverrides;
    struct __CFDictionary { } *outputSettingsOverrides;
    BOOL resetsVideoZoomFactorToDefaultValue;
    NSMutableDictionary *resolvedCaptureOptions;
    NSMutableDictionary *resolvedVideoCompressionProperties;
    AVCaptureDeviceFormat_FigRecorder *resolvedVideoDeviceFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } resolvedVideoMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } resolvedVideoMinFrameDuration;
    BOOL resolvesFrameRatesUsingDefaultValues;
    NSString *sessionPreset;
    BOOL usePreviewSizedCaptureBuffers;
    BOOL useStabilizationIfAvailable;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoConnectionMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoConnectionMinFrameDuration;
}

@property (nonatomic) BOOL hasStillImageOutput;
@property BOOL resetsVideoZoomFactorToDefaultValue;
@property BOOL resolvesFrameRatesUsingDefaultValues;
@property (readonly) NSString *sessionPreset;

+ (void)initialize;
+ (id)resolvedCaptureOptionsWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;

- (void)addFaceDetectionMode:(id)arg1 forConnection:(id)arg2;
- (void)addMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forConnection:(id)arg2;
- (void)addMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forConnection:(id)arg2;
- (void)addOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)applyInputPriorityOverridesToCaptureOptions:(id)arg1 forCamera:(id)arg2;
- (id)baseCaptureOptions;
- (id)cameraForCaptureOptions:(id)arg1;
- (void)dealloc;
- (id)deviceFormatForCamera:(id)arg1 captureOptions:(id)arg2;
- (void)enableFaceDetectionNotificationsForConnection:(id)arg1;
- (BOOL)hasHeightOverrideInResolvedOptions:(id)arg1;
- (BOOL)hasOverridesAffectingCaptureFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (BOOL)hasOverridesAffectingPreviewFormatInResolvedOptions:(id)arg1 withScalingMode:(id)arg2;
- (BOOL)hasStillImageOutput;
- (BOOL)hasWidthOverrideInResolvedOptions:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 captureOptionsDictionary:(id)arg2;
- (int)rankForFaceDetectionMode:(id)arg1;
- (BOOL)resetsVideoZoomFactorToDefaultValue;
- (void)resolveFrameRatesToCaptureOptions:(id)arg1 withCamera:(id)arg2 activeFormat:(id)arg3;
- (void)resolveOutputSettingsToCaptureOptions:(id)arg1 resolvedScalingMode:(id*)arg2;
- (id)resolvedCaptureOptionsDictionary;
- (id)resolvedVideoCompressionProperties;
- (id)resolvedVideoDeviceFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resolvedVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })resolvedVideoMinFrameDuration;
- (id)resolvedVideoSettingsForAssetWriter;
- (id)resolvedVideoSettingsForMovieFileOutput;
- (id)resolvedVideoSettingsWithScalingAllowed:(BOOL)arg1;
- (BOOL)resolvesFrameRatesUsingDefaultValues;
- (id)sessionPreset;
- (void)setBestCaptureResolutionForAVScalingMode:(id)arg1 captureOptions:(id)arg2;
- (void)setBestPreviewResolutionForCaptureOptions:(id)arg1;
- (void)setHasStillImageOutput:(BOOL)arg1;
- (void)setResetsVideoZoomFactorToDefaultValue:(BOOL)arg1;
- (void)setResolvesFrameRatesUsingDefaultValues:(BOOL)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)usePreviewSizedCaptureBuffersForConnection:(id)arg1;
- (void)useStabilizationIfAvailableForConnection:(id)arg1;

@end
