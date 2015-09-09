/* Generated by RuntimeBrowser.
 */

@protocol TSKRenderingExporter <TSKExporter>

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRect;
- (BOOL)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 createPage:(BOOL)arg4;
- (BOOL)exportToURL:(NSURL *)arg1 pageNumber:(unsigned int)arg2 delegate:(id <TSKImportExportDelegate>)arg3 error:(id*)arg4;
- (BOOL)hasMoreThanOnePageToPrint;
- (TSDImager *)imager;
- (BOOL)incrementPage;
- (unsigned int)pageCount;
- (BOOL)paginate;
- (BOOL)preparePage:(unsigned int)arg1;
- (double)progressForCurrentPage;
- (BOOL)setInfosToCurrentPage;
- (void)setPaginate:(BOOL)arg1;
- (void)setup;
- (void)teardown;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRect;

@end
