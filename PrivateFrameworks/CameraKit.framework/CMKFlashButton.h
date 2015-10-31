/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFlashButton : CMKExpandableMenuButton {
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic, readonly) UIImageView *_warningIndicatorView;
@property (nonatomic) BOOL allowsAutomaticFlash;
@property (nonatomic) int flashMode;
@property (getter=isUnavailable, nonatomic) BOOL unavailable;

- (void).cxx_destruct;
- (void)_commonCMKFlashButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)_warningIndicatorView;
- (BOOL)allowsAutomaticFlash;
- (int)flashMode;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (int)indexForMode:(int)arg1;
- (id)initWithExpansionOrientation:(int)arg1;
- (BOOL)isUnavailable;
- (int)modeForIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setUnavailable:(BOOL)arg1;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(int)arg1;
- (BOOL)wantsSelectedItemToBeVisible;

@end
