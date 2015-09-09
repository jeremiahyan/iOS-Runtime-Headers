/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    long _formatReaderOnce;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (getter=_figAsset, nonatomic, readonly) struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (getter=_formatReader, nonatomic, readonly) struct OpaqueFigFormatReader { }*formatReader;
@property (nonatomic, readonly) BOOL hasProtectedContent;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (getter=_isStreaming, nonatomic, readonly) BOOL streaming;

- (id)SHA1Digest;
- (id)URL;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)_isStreaming;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (BOOL)canContainMovieFragments;
- (id)commonMetadata;
- (BOOL)containsMovieFragments;
- (id)creationDate;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (void)finalize;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)mediaSelectionGroups;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (BOOL)providesPreciseDurationAndTiming;
- (id)resolvedURL;
- (long)trackCount;
- (id)trackReferences;

@end
