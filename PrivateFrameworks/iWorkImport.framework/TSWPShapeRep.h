/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRep : TSDShapeRep <TSDContainerRep, TSDMagicMoveMatching, TSWPShapeLayoutDelegate> {
    TSWPRep *_containedRep;
    BOOL _editingContainedRep;
    struct CGPoint { 
        float x; 
        float y; 
    } _originalAutosizePositionOffset;
    CALayer *_overflowGlyphLayer;
}

@property (nonatomic, readonly) TSWPRep *containedRep;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isShapeInvisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSWPStorage *textStorageForTexture;

+ (id)magicMoveAnimationMatchesFromMatches:(id)arg1;
+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 textDeliveryType:(int)arg4 repToOpacityTextRangeDictMap:(id)arg5;
+ (void)p_getOutgoingTextureSet:(id*)arg1 incomingTextureSet:(id*)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 incomingRep:(id)arg5 incomingChunkRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 includeListLabels:(BOOL)arg7;
+ (BOOL)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(int)arg2 incomingStorage:(id)arg3 incomingCharIndex:(int)arg4 shouldMatch:(BOOL*)arg5;
+ (unsigned int)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(int)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5;
+ (float)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2;
+ (id)p_potentialMatchesWithChunkLength:(unsigned int)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureContext:(id)arg4 textDeliveryType:(int)arg5;
+ (BOOL)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)arg1 outgoingChunkRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 incomingRep:(id)arg3 incomingChunkRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toString:(id)arg3;
+ (id)p_textureSetFromRep:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 includeListLabel:(BOOL)arg3 desiredContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;

- (id).cxx_construct;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)childReps;
- (id)containedRep;
- (id)containerInfo;
- (void)dealloc;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitReps:(struct CGPoint { float x1; float x2; })arg1 withSlop:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)isShapeInvisible;
- (id)newTextureRenderableForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includeListLabel:(BOOL)arg2 isMagicMove:(BOOL)arg3 desiredContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 includeGroupedShadow:(BOOL)arg5 groupedShadowOnly:(BOOL)arg6;
- (void)p_drawRubyInContext:(struct CGContext { }*)arg1 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)p_getBoundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 applyReflection:(BOOL*)arg4 applyShadow:(BOOL*)arg5 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 includeListLabel:(BOOL)arg7 isMagicMove:(BOOL)arg8;
- (BOOL)p_hasContentForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 labelOnly:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_rectForRubyFields:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (float)p_textureSetOpacity;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)stageChunks;
- (int)stageIndexForStorageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)textStorageForTexture;
- (id)textureForContext:(id)arg1;
- (void)updateChildrenFromLayout;

@end
