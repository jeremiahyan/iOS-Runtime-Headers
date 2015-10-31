/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellRangeIterator : NSObject {
    TSTCellIterator *mCellIterator;
    BOOL mCellValidForDelegate;
    <TSTCellRangeIteratorDelegate> *mDelegate;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mPreviousCellID; 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mCellID; 
        TSTCell *mCell; 
        struct TSTCellStorage {} *mCellRef; 
        struct TSUColumnRowRect { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } origin; 
            struct { 
                unsigned short numberOfColumns; 
                unsigned short numberOfRows; 
            } size; 
        } mMergeRange; 
        BOOL mStyleOnly; 
        BOOL mCommentStorageOnly; 
        BOOL mHidden; 
        BOOL mHiddenRow; 
        BOOL mHiddenColumn; 
    } mIterData;
    BOOL mIterDataValid;
}

@property (nonatomic, readonly) BOOL cellValid;

- (BOOL)cellValid;
- (void)dealloc;
- (id)initWithTableModel:(id)arg1 delegate:(id)arg2;
- (id)initWithTableModel:(id)arg1 range:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 delegate:(id)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3;
- (BOOL)processRange;

@end
