/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection> {
    TSTCellSelection *mCellSelection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) TSKSelection *selection;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
