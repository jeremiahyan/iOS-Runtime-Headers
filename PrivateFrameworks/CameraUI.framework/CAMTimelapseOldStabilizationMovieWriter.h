/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseOldStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol> {
    id /* block */ __completion;
    struct __CVBuffer { } *__firstSourceFrame;
    NSArray *__frameFilePaths;
    int __framesPerSecond;
    int __framesWrittenCount;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    int __sourceFramesReadCount;
    AVOfflineVideoStabilizer *__stabilizer;
    struct opaqueCMFormatDescription { } *__videoFormatDescription;
    AVAssetWriterInput *__videoInput;
    NSArray *__visMetadataFilePaths;
    AVAssetWriter *__writer;
    BOOL _suspended;
}

@property (nonatomic, readonly, copy) id /* block */ _completion;
@property (nonatomic, readonly) struct __CVBuffer { }*_firstSourceFrame;
@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) int _framesPerSecond;
@property (nonatomic, readonly) int _framesWrittenCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) int _sourceFramesReadCount;
@property (nonatomic, readonly) AVOfflineVideoStabilizer *_stabilizer;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*_videoFormatDescription;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) NSArray *_visMetadataFilePaths;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) BOOL suspended;

- (void).cxx_destruct;
- (BOOL)_appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id /* block */)_completion;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferForAssetWriter;
- (struct __CVBuffer { }*)_copySourcePixelBufferForFrameNumber:(int)arg1;
- (struct CGSize { float x1; float x2; })_desiredOutputSizeForFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg1;
- (struct __CVBuffer { }*)_firstSourceFrame;
- (id)_frameFilePaths;
- (int)_framesPerSecond;
- (int)_framesWrittenCount;
- (id)_movieWritingQueue;
- (id)_pixelBufferAdaptor;
- (void)_reset;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (int)_sourceFramesReadCount;
- (id)_stabilizer;
- (BOOL)_startWritingWithOutputPath:(id)arg1 width:(int)arg2 height:(int)arg3 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 framesPerSecond:(int)arg6 frameCount:(int)arg7 visMetadataCount:(int)arg8 videoMetadata:(id)arg9;
- (struct opaqueCMFormatDescription { }*)_videoFormatDescription;
- (id)_videoInput;
- (id)_visMetadataFilePaths;
- (void)_writeMovieAsynchronously;
- (id)_writer;
- (struct __CVBuffer { }*)copySourcePixelBufferForFrameNumber:(int)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(id)arg3;
- (id)copySourceStabilizationMetadataForFrameNumber:(int)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(id)arg3;
- (id)init;
- (BOOL)isSuspended;
- (void)setSuspended:(BOOL)arg1;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6 framesPerSecond:(int)arg7 completionHandler:(id /* block */)arg8;

@end
