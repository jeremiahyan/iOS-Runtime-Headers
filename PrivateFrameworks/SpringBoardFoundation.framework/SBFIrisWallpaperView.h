/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFIrisWallpaperView : SBFStaticWallpaperView {
    unsigned int _currentMode;
    UIImageView *_imageView;
    BOOL _playerPrepared;
    ISPlayerView *_playerView;
    BOOL _prewireMemory;
    ISAVPlayer *_prewiredAVPlayer;
    double _stillTimeInVideo;
    BOOL _useRewindPlaybackStyle;
    AVAsset *_video;
    NSURL *_videoFileURL;
}

@property (nonatomic, readonly) unsigned int currentMode;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) ISPlayerView *playerView;

+ (void)initialize;

- (void)_populateContentView;
- (void)_setImage:(id)arg1;
- (void)_setupContentView;
- (BOOL)_setupContentViewForMode:(unsigned int)arg1;
- (unsigned int)currentMode;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 wallpaperVideo:(id)arg3 stillTimeInVideo:(double)arg4 treatWallpaper:(BOOL)arg5 variant:(int)arg6 prewireMemory:(BOOL)arg7 useRewindPlaybackStyle:(BOOL)arg8;
- (id)irisGestureRecognizer;
- (BOOL)isPlaying;
- (id)playerView;
- (void)switchToMode:(unsigned int)arg1;

@end
