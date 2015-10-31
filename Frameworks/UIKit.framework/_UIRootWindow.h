/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRootWindow : UIWindow {
    BOOL _isExternal;
    BOOL _mainDisplay;
}

- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (id)_context;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isWindowServerHostingManaged;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (BOOL)_transformLayerIncludesScreenRotation;
- (BOOL)_wantsSceneAssociation;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)setScreen:(id)arg1;

@end
