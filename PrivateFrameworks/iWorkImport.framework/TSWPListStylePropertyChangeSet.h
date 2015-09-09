/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet {
    BOOL _definedFontColor;
    BOOL _definedFontName;
    BOOL _definedListClassicTextIndentArray;
    BOOL _definedListLabelGeometryArray;
    BOOL _definedListLabelImageDataArray;
    BOOL _definedListLabelIndentArray;
    BOOL _definedListLabelNumberArray;
    BOOL _definedListLabelStringArray;
    BOOL _definedListLabelTieredNumberArray;
    BOOL _definedListLabelTypeArray;
    BOOL _definedListTextIndentArray;
    BOOL _definedTextShadow;
    BOOL _definedWritingDirection;
    TSSSpecColor *_fontColor;
    TSSSpecString *_fontName;
    TSWPSpecListStyleFloatArray *_listClassicTextIndentArray;
    TSWPSpecListStyleListLabelGeometryArray *_listLabelGeometryArray;
    TSWPSpecListStyleImageDataArray *_listLabelImageDataArray;
    TSWPSpecListStyleFloatArray *_listLabelIndentArray;
    TSWPSpecListStyleListNumberTypeArray *_listLabelNumberArray;
    TSWPSpecListStyleStringArray *_listLabelStringArray;
    TSWPSpecListStyleBoolArray *_listLabelTieredNumberArray;
    TSWPSpecListStyleListLabelTypeArray *_listLabelTypeArray;
    TSWPSpecListStyleFloatArray *_listTextIndentArray;
    TSDSpecShadow *_textShadow;
    TSSSpecInteger *_writingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;

@end
