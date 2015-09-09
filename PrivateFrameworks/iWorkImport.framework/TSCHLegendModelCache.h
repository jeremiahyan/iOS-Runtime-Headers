/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModelCache : NSObject {
    unsigned int mCellCount;
    NSArray *mCells;
    float mEffectiveStrokeWidth;
    id mFill;
    float mHorizontalCellSpacing;
    struct CGSize { 
        float width; 
        float height; 
    } mLargestCellSize;
    TSCHLegendViewCache *mLastLegendViewCache;
    float mLastLegendWidth;
    BOOL mLegendOn;
    TSCHLegendCellMetrics *mMetrics;
    float mOpacity;
    TSWPParagraphStyle *mParagraphStyle;
    BOOL mReverseSingleColumnLegendOrder;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    float mSymbolGap;
    float mVerticalCellSpacing;
}

@property (readonly) unsigned int cellCount;
@property (readonly) NSArray *cells;
@property (readonly) float effectiveStrokeWidth;
@property (readonly) id fill;
@property (readonly) float horizontalCellSpacing;
@property (readonly) struct CGSize { float x1; float x2; } largestCellSize;
@property (readonly) BOOL legendOn;
@property (readonly) float opacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) BOOL reverseSingleColumnLegendOrder;
@property (readonly) TSDShadow *shadow;
@property (readonly) TSDStroke *stroke;
@property (readonly) float symbolGap;
@property (readonly) float verticalCellSpacing;

- (unsigned int)cellCount;
- (id)cellForSeriesIndex:(unsigned int)arg1 cellType:(int)arg2;
- (id)cells;
- (void)dealloc;
- (float)effectiveStrokeWidth;
- (id)fill;
- (float)horizontalCellSpacing;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;
- (struct CGSize { float x1; float x2; })largestCellSize;
- (BOOL)legendOn;
- (float)opacity;
- (id)paragraphStyle;
- (BOOL)reverseSingleColumnLegendOrder;
- (id)shadow;
- (id)stroke;
- (float)symbolGap;
- (float)verticalCellSpacing;
- (id)viewCacheForWidth:(float)arg1;

@end
