/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXPresentationState : OCXReadState {
    CXNamespace *_PXPresentationMLNamespace;
    <TCCancelDelegate> *mCancel;
    NSMutableDictionary *mModelObjects;
    OAVReadState *mOAVState;
    OAXDrawingState *mOfficeArtState;
    NSMutableDictionary *mSlideURLToIndexMap;
    OAXTableStyleCache *mTableStyleCache;
    PDPresentation *mTgtPresentation;
}

@property (nonatomic, retain) CXNamespace *PXPresentationMLNamespace;
@property (nonatomic, retain) <TCCancelDelegate> *cancelDelegate;

- (id)PXPresentationMLNamespace;
- (id)cancelDelegate;
- (void)dealloc;
- (id)init;
- (BOOL)isCancelled;
- (id)modelObjectForLocation:(id)arg1;
- (id)oavState;
- (id)officeArtState;
- (void)resetOfficeArtState;
- (void)setCancelDelegate:(id)arg1;
- (void)setModelObject:(id)arg1 forLocation:(id)arg2;
- (void)setPXPresentationMLNamespace:(id)arg1;
- (void)setSlideIndex:(int)arg1 forSlideURL:(id)arg2;
- (void)setTgtPresentation:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (int)slideIndexForSlideURL:(id)arg1;
- (id)tableStyleCache;
- (id)tgtPresentation;

@end
