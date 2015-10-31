/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFileCoordinatorNode : BWNode {
    long long _currSettingsID;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    BOOL _firstAudioHasBeenProcessed;
    BOOL _flagsLastFrameForVideoCompressor;
    const struct opaqueCMFormatDescription {} **_formatDescriptionsForInputs;
    BOOL _haveSeenAudioWhenStarting;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _inputOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _largestMetadataPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _largestStagedSupportingAudioVideoStagedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterEndingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastMasterPTS;
    BOOL _lowLatencyCanTossExtraVideoWhenStopping;
    BOOL _lowLatencyCanTransitionEarlyToRecording;
    BOOL _lowLatencyModeEnabled;
    BWNodeInput *_masterInput;
    unsigned int _masterInputIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _masterStartingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _masterStoppingPTS;
    unsigned int _numActionOnlyOutputs;
    unsigned int _numAudioInputs;
    unsigned int _numInputs;
    unsigned int _numMetadataInputs;
    unsigned int _numOutputs;
    unsigned int _numVideoInputs;
    int _recordingState;
    BOOL _sendFlushMarkerWhenStopping;
    FigCaptureRecordingSettings *_settings;
    NSArray *_stagingQueues;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _stopRecordingPTS;
    long _terminationErrorCode;
}

+ (void)initialize;

- (struct opaqueCMSampleBuffer { }*)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned int)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct opaqueCMSampleBuffer { }*)_createEmptyMetadataSBufWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned int)arg2;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned int)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned int)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString { }*)arg1 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settings:(id)arg3 errorCode:(long)arg4;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_emitStagedBufferForIndex:(unsigned int)arg1;
- (void)_finishStoppingOrPausing:(BOOL)arg1 withErrorCode:(long)arg2;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned int)arg2;
- (void)_stopRecordingWithErrorCode:(long)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (BOOL)flagsLastFrameForVideoCompressor;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfVideoInputs:(unsigned int)arg1 numberOfAudioInputs:(unsigned int)arg2 numberOfMetadataInputs:(unsigned int)arg3 numberOfActionOnlyOutputs:(unsigned int)arg4 allowLowLatencyWhenPossible:(BOOL)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)pauseRecording;
- (void)recordingTerminated:(unsigned long long)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resumeRecording;
- (void)setFlagsLastFrameForVideoCompressor:(BOOL)arg1;
- (long)startRecordingWithSettings:(id)arg1 stopAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stopRecordingWithErrorCode:(long)arg1;
- (BOOL)updateStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 previousStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;

@end
