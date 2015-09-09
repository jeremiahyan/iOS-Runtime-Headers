/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAbstractSlide : TSPObject <TSDDrawableContainerInfo, TSKDocumentObject, TSKTransformableObject, TSSPropertySource, TSSStyleClient> {
    NSArray *_buildChunks;
    NSSet *_builds;
    KNSlideBackgroundInfo *mBackground;
    KNBodyPlaceholderInfo *mBodyPlaceholder;
    NSOrderedSet *mChildInfos;
    TSUPointerKeyDictionary *mDrawableToGhostInfosMap;
    TSUMutablePointerSet *mDrawablesWithInvalidGhosts;
    BOOL mInDocument;
    BOOL mNeedsSlideNodeEventCountUpdate;
    KNObjectPlaceholderInfo *mObjectPlaceholder;
    NSMutableDictionary *mPlaceholdersForTags;
    BOOL mShouldConsiderAllChunksActive;
    KNSlideNode *mSlideNode;
    KNSlideNumberPlaceholderInfo *mSlideNumberPlaceholder;
    KNSlideStyle *mStyle;
    KNTitlePlaceholderInfo *mTitlePlaceholder;
    KNTransition *mTransition;
}

@property (nonatomic, readonly) NSArray *activeBuildChunks;
@property (getter=isAnchoredToText, nonatomic, readonly) BOOL anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) BOOL attachedToBodyText;
@property (nonatomic, retain) KNSlideBackgroundInfo *background;
@property (nonatomic, readonly) TSDFill *backgroundFill;
@property (nonatomic, retain) KNBodyPlaceholderInfo *bodyPlaceholder;
@property (getter=isBodyVisible, nonatomic, readonly) BOOL bodyVisible;
@property (nonatomic, readonly) unsigned int buildChunkCount;
@property (nonatomic, readonly) NSArray *buildChunks;
@property (nonatomic, readonly) unsigned int buildCount;
@property (nonatomic, copy) NSSet *builds;
@property (nonatomic, readonly) NSArray *buildsGroupedByDeliveryGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int deliveryGroupCount;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) BOOL floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (nonatomic, readonly) BOOL hasFreeformTextPlaceholders;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL inDocument;
@property (nonatomic, readonly) NSArray *infosToDisplay;
@property (getter=isInlineWithText, nonatomic, readonly) BOOL inlineWithText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic, retain) KNObjectPlaceholderInfo *objectPlaceholder;
@property (getter=isObjectVisible, nonatomic, readonly) BOOL objectVisible;
@property (nonatomic, readonly) NSArray *ownedChildInfos;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, copy) NSDictionary *placeholdersForTags;
@property (nonatomic) KNSlideNode *slideNode;
@property (nonatomic, readonly) KNSlideNode *slideNode;
@property (nonatomic, retain) KNSlideNumberPlaceholderInfo *slideNumberPlaceholder;
@property (getter=isSlideNumberVisible, nonatomic, readonly) BOOL slideNumberVisible;
@property (nonatomic, retain) KNSlideStyle *style;
@property (readonly) Class superclass;
@property (nonatomic, retain) KNTitlePlaceholderInfo *titlePlaceholder;
@property (getter=isTitleVisible, nonatomic, readonly) BOOL titleVisible;
@property (nonatomic, retain) KNTransition *transition;

+ (id)buildChunksInDeliveryGroupAtIndex:(unsigned int)arg1 inBuildChunks:(id)arg2;
+ (BOOL)chunk:(id)arg1 isFirstInDeliveryGroupForChunks:(id)arg2;
+ (unsigned int)deliveryGroupCountForBuildChunks:(id)arg1;
+ (unsigned int)deliveryGroupIndexForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
+ (BOOL)needsObjectUUID;
+ (id)newObjectForUnarchiver:(id)arg1;
+ (id)p_firstActiveChunkInChunks:(id)arg1;
+ (id)parentSlideForInfo:(id)arg1;

- (float)CGFloatValueForProperty:(int)arg1;
- (id)activeBuildChunks;
- (id)activeChunksForDrawable:(id)arg1;
- (id)activeChunksForDrawable:(id)arg1 animationType:(int)arg2;
- (void)addBuild:(id)arg1;
- (void)addChildInfo:(id)arg1;
- (void)addDrawable:(id)arg1 dolcContext:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)background;
- (id)backgroundFill;
- (id)bodyPlaceholder;
- (id)boxedObjectForProperty:(int)arg1;
- (unsigned int)buildChunkCount;
- (id)buildChunks;
- (id)buildChunksInDeliveryGroupAtIndex:(unsigned int)arg1;
- (unsigned int)buildCount;
- (id)builds;
- (id)buildsForDrawable:(id)arg1;
- (id)buildsForDrawable:(id)arg1 type:(int)arg2;
- (id)buildsForDrawables:(id)arg1;
- (id)buildsGroupedByDeliveryGroup;
- (int)canMoveBuildChunk:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)canMoveDeliveryGroupFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (id)childEnumerator;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)defaultBodyPlaceholder;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultSlideNumberPlaceholder;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholder;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (unsigned int)deliveryGroupCount;
- (unsigned int)deliveryGroupIndexForBuildChunk:(id)arg1;
- (id)deliveryGroupIndexesForBuilds:(id)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)geometry;
- (BOOL)hasComplementForBuildChunk:(id)arg1;
- (BOOL)hasComplementForBuildChunk:(id)arg1 inBuildChunks:(id)arg2;
- (BOOL)hasFreeformTextPlaceholders;
- (void)i_invalidateActiveChunkCache;
- (void)i_primitiveAddBuild:(id)arg1;
- (void)i_primitiveInsertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (id)imageUsingDocumentRoot:(id)arg1;
- (id)inBuildForDrawable:(id)arg1;
- (BOOL)inDocument;
- (id)infoCorrespondingToInfo:(id)arg1;
- (BOOL)infoExistsForTag:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)infoForTag:(id)arg1;
- (BOOL)infoIsPlaceholder:(id)arg1;
- (id)infosToDisplay;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithSlideNode:(id)arg1 context:(id)arg2;
- (void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(BOOL)arg3;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertDrawable:(id)arg1 atIndex:(unsigned int)arg2 dolcContext:(id)arg3;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned int)arg2 dolcContext:(id)arg3;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isAnchoredToText;
- (BOOL)isAttachedToBodyText;
- (BOOL)isBodyVisible;
- (BOOL)isFloatingAboveText;
- (BOOL)isInlineWithText;
- (BOOL)isObjectVisible;
- (BOOL)isSlideNumberVisible;
- (BOOL)isThemeContent;
- (BOOL)isTitleVisible;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; struct GeometryArchive {} *x17; unsigned int x18; unsigned int x19; struct ShapeStylePropertiesArchive {} *x20; struct GeometryArchive {} *x21; unsigned int x22; unsigned int x23; struct ShapeStylePropertiesArchive {} *x24; struct GeometryArchive {} *x25; unsigned int x26; unsigned int x27; struct ShapeStylePropertiesArchive {} *x28; struct Reference {} *x29; struct RepeatedPtrField<TSP::Reference> { void **x_30_1_1; int x_30_1_2; int x_30_1_3; int x_30_1_4; } x30; struct RepeatedPtrField<TSP::Reference> { void **x_31_1_1; int x_31_1_2; int x_31_1_3; int x_31_1_4; } x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; struct Reference {} *x34; struct RepeatedPtrField<TSD::GuideArchive> { void **x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; } x35; struct Reference {} *x36; struct Reference {} *x37; struct RepeatedPtrField<TSP::Reference> { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct Reference {} *x39; bool x40; bool x41; bool x42; bool x43; int x44; }*)arg1 unarchiver:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (id)objectForProperty:(int)arg1;
- (id)objectPlaceholder;
- (id)objectUUIDPath;
- (id)outBuildForDrawable:(id)arg1;
- (id)ownedChildInfos;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (struct _NSRange { unsigned int x1; unsigned int x2; })p_activeChunkRangeForBuild:(id)arg1 inActiveChunks:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 areInOrderForBuild:(id)arg2;
- (BOOL)p_activeChunks:(id)arg1 interleaveChunksForComplementOfBuild:(id)arg2;
- (BOOL)p_areActiveBuildChunksInValidOrder:(id)arg1;
- (void)p_assertChunksInSequenceForBuild:(id)arg1;
- (id)p_calculateActiveBuildChunks;
- (BOOL)p_canMoveDeliveryGroupBuildChunks:(id)arg1 toIndex:(unsigned int)arg2;
- (BOOL)p_canMoveDeliveryGroupBuildChunksFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)p_complementForBuild:(id)arg1;
- (id)p_firstActiveChunkInChunksForBuild:(id)arg1;
- (void)p_insertChildInfos:(id)arg1 atIndex:(unsigned int)arg2 dolcContext:(id)arg3;
- (id)p_invalidBuildsOnDrawable:(id)arg1;
- (void)p_invalidateAllChunkAndBuildCaches;
- (void)p_invalidateCachesForBuildUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateCachesForChunkUpdate:(id)arg1 isForRemoval:(BOOL)arg2;
- (void)p_invalidateSlideNodeBuildEventCountCaches;
- (BOOL)p_isChildPlaceholderInfo:(id)arg1;
- (BOOL)p_isValidToMoveChunk:(id)arg1 toIndex:(unsigned int)arg2;
- (id)p_lastActiveChunkInChunksForBuild:(id)arg1;
- (void)p_setChildInfosAsOrderedSet:(id)arg1 usingDOLC:(BOOL)arg2 dolcContext:(id)arg3;
- (void)p_updateBuildsReplacingPlaceholder:(id)arg1 withPlaceholder:(id)arg2;
- (void)p_updateChartBuildChunksImmediatelyWithoutUndoHistory;
- (void)p_updateOverlappingBuildEventTriggers;
- (void)p_updatePreUFFBuildEffects;
- (id)parentInfo;
- (id)pdfDataUsingDocumentRoot:(id)arg1;
- (void)performBlockOnInfos:(id /* block */)arg1;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(int)arg4 textPresetIndex:(int)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(int)arg4 textPresetStyle:(id)arg5 layoutPropertyMap:(id)arg6 paragraphPropertyMap:(id)arg7 listPropertyMap:(id)arg8 context:(id)arg9;
- (id)placeholderOfClass:(Class)arg1 withGeometry:(id)arg2 stylesheet:(id)arg3 shapePresetIndex:(int)arg4 textPresetStyle:(id)arg5 listStyle:(id)arg6 layoutPropertyMap:(id)arg7 paragraphPropertyMap:(id)arg8 listPropertyMap:(id)arg9 context:(id)arg10;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2;
- (id)placeholderWithPlaceholder:(id)arg1 context:(id)arg2 placeholderClass:(Class)arg3;
- (id)placeholdersForTags;
- (id)referencedStyles;
- (void)removeBuild:(id)arg1;
- (void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(BOOL)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeInvalidBuildsOnDrawable:(id)arg1 usingParentCommand:(id)arg2;
- (void)removeTagForDrawable:(id)arg1;
- (Class)repClass;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (void)saveToArchive:(struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[2]; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct RepeatedPtrField<TSP::Reference> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct TransitionArchive {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x16; struct GeometryArchive {} *x17; unsigned int x18; unsigned int x19; struct ShapeStylePropertiesArchive {} *x20; struct GeometryArchive {} *x21; unsigned int x22; unsigned int x23; struct ShapeStylePropertiesArchive {} *x24; struct GeometryArchive {} *x25; unsigned int x26; unsigned int x27; struct ShapeStylePropertiesArchive {} *x28; struct Reference {} *x29; struct RepeatedPtrField<TSP::Reference> { void **x_30_1_1; int x_30_1_2; int x_30_1_3; int x_30_1_4; } x30; struct RepeatedPtrField<TSP::Reference> { void **x_31_1_1; int x_31_1_2; int x_31_1_3; int x_31_1_4; } x31; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x32; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x33; struct Reference {} *x34; struct RepeatedPtrField<TSD::GuideArchive> { void **x_35_1_1; int x_35_1_2; int x_35_1_3; int x_35_1_4; } x35; struct Reference {} *x36; struct Reference {} *x37; struct RepeatedPtrField<TSP::Reference> { void **x_38_1_1; int x_38_1_2; int x_38_1_3; int x_38_1_4; } x38; struct Reference {} *x39; bool x40; bool x41; bool x42; bool x43; int x44; }*)arg1 archiver:(id)arg2;
- (void)setBackground:(id)arg1;
- (void)setBodyPlaceholder:(id)arg1;
- (void)setBuildChunks:(id)arg1 generateIdentifiers:(BOOL)arg2;
- (void)setBuilds:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (void)setChildInfosWithoutDOLC:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setInfo:(id)arg1 forSageTag:(id)arg2;
- (void)setObjectPlaceholder:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPlaceholdersForTags:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (void)setSlideNode:(id)arg1;
- (void)setSlideNumberPlaceholder:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTitlePlaceholder:(id)arg1;
- (void)setTransition:(id)arg1;
- (id)slideNode;
- (id)slideNumberPlaceholder;
- (id)style;
- (id)tagForInfo:(id)arg1;
- (id)titlePlaceholder;
- (id)transition;
- (int)validateMoveActiveBuildChunks:(id)arg1 toActiveIndex:(unsigned int)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
