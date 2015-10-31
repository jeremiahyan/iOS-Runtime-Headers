/* Generated by RuntimeBrowser.
 */

@protocol ISPlayerOutput <NSObject>

@required

- (ISCrossfadeLayer *)crossfadeLayer;
- (CALayer *)photoLayer;
- (float)photoScale;
- (void)playerDidEndTransitionToPlaybackState:(int)arg1;
- (void)playerDidPlayVideoToEnd;
- (void)playerWillBeginTransitionToPlaybackState:(int)arg1;
- (void)playerWillPlayVideoToEnd;
- (void)setPhotoScale:(float)arg1;
- (AVPlayerLayer *)videoLayer;

@end
