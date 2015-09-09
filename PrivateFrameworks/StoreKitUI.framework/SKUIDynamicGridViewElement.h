/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicGridViewElement : SKUIGridViewElement {
    BOOL _hasValidTemplateDefinitionMap;
    int _minimumEntityCountForSections;
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;
}

@property (nonatomic, readonly) BOOL hasSectionHeaders;
@property (getter=isMalformed, nonatomic, readonly) BOOL malformed;
@property (nonatomic, readonly) int minimumEntityCountForSections;

- (void).cxx_destruct;
- (id)_templateDefinitionTypeToModeValueMap;
- (void)_unfilteredEnumerateChildrenUsingBlock:(id /* block */)arg1;
- (BOOL)allowsMultipleSelectionDuringEditing;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;
- (BOOL)hasSectionHeaders;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isDynamicContainer;
- (BOOL)isMalformed;
- (int)minimumEntityCountForSections;
- (int)pageComponentType;
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;

@end
