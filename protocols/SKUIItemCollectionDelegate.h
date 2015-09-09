/* Generated by RuntimeBrowser.
 */

@protocol SKUIItemCollectionDelegate <NSObject>

@required

- (SKUIItemCellLayout *)itemCollectionController:(SKUIItemCollectionController *)arg1 cellLayoutForItemIndex:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })itemCollectionController:(SKUIItemCollectionController *)arg1 itemPageRangeForOffset:(struct CGPoint { float x1; float x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })visibleItemRangeForItemCollectionController:(SKUIItemCollectionController *)arg1;

@optional

- (void)itemCollectionController:(SKUIItemCollectionController *)arg1 applyScreenshotImage:(UIImage *)arg2 toCellLayout:(SKUIItemCellLayout *)arg3;
- (SKUIScreenshot *)itemCollectionController:(SKUIItemCollectionController *)arg1 screenshotForItem:(SKUIItem *)arg2;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(SKUIItemCollectionController *)arg1;

@end
