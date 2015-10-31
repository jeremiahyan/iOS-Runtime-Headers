/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformGenerator : NSObject {
    RCExtAudioFilePipe *_activeExtAudioFile;
    BOOL _canceled;
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    unsigned int _framesConsumedSinceLastFlush;
    int _framesNeededForNextDB;
    int _framesNeededForNextFlush;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    BOOL _isSampleRateKnown;
    NSError *_loadingError;
    NSOperationQueue *_loadingQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _overviewUnitsPerSecond;
    unsigned int _pauseCount;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    } _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    unsigned int _powerLevelsConsumedSinceLastFlush;
    NSObject<OS_dispatch_queue> *_queue;
    struct PowerMeter { 
        bool mInstantaneousMode; 
        double mSampleRate; 
        double mPeakDecay1; 
        double mPeakDecay; 
        double mDecay1; 
        double mDecay; 
        int mPrevBlockSize; 
        int mPeakHoldCount; 
        double mPeak; 
        double mAveragePowerPeak; 
        double mMaxPeak; 
        struct AudioUnitMeterClipping { 
            float peakValueSinceLastCall; 
            unsigned char sawInfinity; 
            unsigned char sawNotANumber; 
        } mClipping; 
        double mAveragePowerF; 
        float m_vAvePower[16]; 
        int mAveragePowerI; 
    } _samplePowerMeter;
    double _segmentFlushInterval;
    int _state;
    double _totalDigestedTime;
    double _totalFlushedTime;
    NSHashTable *_weakObservers;
}

@property (nonatomic, readonly) BOOL canceled;
@property (nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) BOOL idle;
@property (nonatomic, readonly) BOOL loadable;
@property (nonatomic) int overviewUnitsPerSecond;
@property (nonatomic) BOOL paused;
@property (nonatomic, readonly) double segmentFlushInterval;
@property (nonatomic, readonly) int state;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg4;
- (void)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_finishLoadingByTerminating:(BOOL)arg1 loadingFinishedBlockTimeoutDate:(id)arg2 loadingFinishedBlock:(id /* block */)arg3;
- (BOOL)_isCanceled;
- (void)_onLoadingQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(int)arg2 format:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 isPredigest:(BOOL)arg4;
- (void)_onLoadingQueue_appendSegment:(id)arg1;
- (void)_onLoadingQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onLoadingQueue_flushRemainingData;
- (void)_onLoadingQueue_flushWaveformSegment:(id)arg1;
- (void)_onLoadingQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(BOOL)arg2;
- (void)_onLoadingQueue_pushAveragePowerLevel:(float)arg1;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x1; double x2; })arg1 inExtAudioFile:(id)arg2 sourceFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg4;
- (void)_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_performLoadingFinishedBlock:(id /* block */)arg1 internalBlockUUID:(id)arg2 isTimeout:(BOOL)arg3;
- (void)_performObserversBlock:(id /* block */)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (BOOL)appendAveragePowerLevel:(float)arg1;
- (BOOL)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(id /* block */)arg2;
- (BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (BOOL)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)beginLoading;
- (BOOL)canceled;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)finished;
- (void)flushPendingCapturedSampleBuffers;
- (BOOL)idle;
- (id)init;
- (id)initWithSamplingParametersFromGenerator:(id)arg1;
- (id)initWithSegmentFlushInterval:(double)arg1;
- (BOOL)loadable;
- (int)overviewUnitsPerSecond;
- (BOOL)paused;
- (void)removeSegmentOutputObserver:(id)arg1;
- (double)segmentFlushInterval;
- (void)setOverviewUnitsPerSecond:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (int)state;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(struct { double x1; double x2; })arg2;
- (void)terminateLoadingImmediately;
- (double)totalDigestedTime;
- (double)totalFlushedTime;

@end
