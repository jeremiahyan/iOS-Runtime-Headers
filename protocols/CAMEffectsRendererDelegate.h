/* Generated by RuntimeBrowser.
 */

@protocol CAMEffectsRendererDelegate <NSObject>

@required

- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didSelectFilterType:(int)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CAMEffectsRenderer *)arg1;

@end
