/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWebViewPrintPageHelper : NSObject <QLRemotePrintPageHelper> {
    UIWebBrowserView *_browserView;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    struct CGSize { 
        float width; 
        float height; 
    } _printableSize;
    NSURLRequest *_request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) QLPreviewConverter *previewConverter;
@property (nonatomic) struct CGSize { float x1; float x2; } printableSize;
@property (readonly) Class superclass;

+ (BOOL)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void)_waitForPreview;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (int)numberOfPages;
- (id)pdfDataForPageAtIndex:(int)arg1 printingDone:(BOOL*)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)previewConverter;
- (struct CGSize { float x1; float x2; })printableSize;
- (void)setPreviewConverter:(id)arg1;
- (void)setPrintableSize:(struct CGSize { float x1; float x2; })arg1;

@end
