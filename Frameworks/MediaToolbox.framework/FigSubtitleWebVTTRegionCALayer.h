/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleWebVTTRegionCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal { id x1; struct OpaqueFigSubtitleRenderer {} *x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct __CFDictionary {} *x4; struct __CFArray {} *x5; unsigned int x6; } *layerInternal;
}

- (void)dealloc;
- (void)finalize;
- (struct __CFString { }*)getContentID;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (void)layoutSublayers;
- (void)setContent:(struct __CFDictionary { }*)arg1;
- (void)setNeedsDisplay;
- (void)setReLayout;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer { }*)arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
