/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutput_FigRecorder : AVCaptureOutput_FigRecorder {
    AVCaptureMetadataOutputInternal_FigRecorder *_internal;
}

@property (nonatomic, readonly) NSArray *availableMetadataObjectTypes;
@property (nonatomic, copy) NSArray *metadataObjectTypes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *metadataObjectsCallbackQueue;
@property (nonatomic, readonly) <AVCaptureMetadataOutputObjectsDelegate_FigRecorder> *metadataObjectsDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rectOfInterest;

+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (BOOL)_faceMetadataIsActive;
- (id)_input;
- (void)applyLiveSourceProperties;
- (id)availableMetadataObjectTypes;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStartForSessionWithoutGraphRebuild:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)metadataObjectTypes;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterest;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
