/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSquishTransition : UIKeyboardKeyplaneTransition {
    unsigned int _animationType;
    NSArray *_commonVisibleKeys;
    BOOL _disableMeshOptimization;
    NSArray *_endGeometries;
    BOOL _nonoverlappingCrossfade;
    float _offsetX;
    NSArray *_startGeometries;
    BOOL _transitionNeedsUpdate;
    float _widthRatio;
}

@property (nonatomic) unsigned int animationType;
@property (nonatomic, retain) NSArray *commonVisibleKeys;
@property (nonatomic) BOOL disableMeshOptimization;
@property (nonatomic, retain) NSArray *endGeometries;
@property (nonatomic) BOOL nonoverlappingCrossfade;
@property (nonatomic, retain) NSArray *startGeometries;
@property (nonatomic, readonly) float transitionOverlapDelta;

- (void)_updateTransition;
- (unsigned int)animationType;
- (void)commitTransitionRebuild;
- (id)commonVisibleKeys;
- (void)dealloc;
- (BOOL)disableMeshOptimization;
- (id)endGeometries;
- (id)geometriesForKeyplane:(id)arg1;
- (id)meshTransformForKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (BOOL)nonoverlappingCrossfade;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setAnimationType:(unsigned int)arg1;
- (void)setCommonVisibleKeys:(id)arg1;
- (void)setDisableMeshOptimization:(BOOL)arg1;
- (void)setEndGeometries:(id)arg1;
- (void)setNonoverlappingCrossfade:(BOOL)arg1;
- (void)setStartGeometries:(id)arg1;
- (id)sortedCommonVisibleKeys;
- (id)startGeometries;
- (id)symmetricMeshTransformForKeyplane:(id)arg1;
- (float)transitionOverlapDelta;
- (void)updateTransitionIfNeeded;
- (void)updateWithProgress:(float)arg1;

@end
