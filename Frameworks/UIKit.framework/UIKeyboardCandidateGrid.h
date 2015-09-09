/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateRowViewControllerDelegate> {
    UIKBBackdropView *_backdropView;
    UIImageView *_backgroundView;
    UIView *_bottomBarShadow;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    int _candidatesVisualStyle;
    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;
    NSMutableDictionary *_collectionViewControllers;
    BOOL _drawBottomShadow;
    BOOL _drawTopShadow;
    UIKeyboardCandidateGridHeader *_gridHeader;
    NSString *_inlineText;
    unsigned int _numberOfColumns;
    <UICollectionViewDelegate> *_scrollViewDelegate;
    UIKeyboardCandidateRowViewController *_secondaryCandidatesViewController;
    BOOL _secondaryCandidatesViewIsCurrent;
    UIKeyboardCandidateSortControl *_sortBar;
    NSArray *_sortedCandidates;
    UIView *_topBarShadow;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic, retain) UIKeyboardCandidateGridCollectionViewController *collectionViewController;
@property (nonatomic, readonly) NSMutableDictionary *collectionViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawBottomShadow;
@property (nonatomic) BOOL drawTopShadow;
@property (nonatomic) UIKeyboardCandidateGridHeader *gridHeader;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *inlineText;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) <UICollectionViewDelegate> *scrollViewDelegate;
@property (nonatomic, retain) UIKeyboardCandidateRowViewController *secondaryCandidatesViewController;
@property (nonatomic) BOOL secondaryCandidatesViewIsCurrent;
@property (nonatomic) UIKeyboardCandidateSortControl *sortBar;
@property (nonatomic, retain) NSArray *sortedCandidates;
@property (readonly) Class superclass;

- (id)backdropView;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidateSet;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (void)clearViews;
- (id)collectionViewController;
- (id)collectionViewControllers;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (BOOL)drawBottomShadow;
- (BOOL)drawTopShadow;
- (unsigned int)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned int)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (id)gridHeader;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)hasCandidates;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (void)layout;
- (void)layoutSubviews;
- (unsigned int)numberOfColumns;
- (BOOL)padInlineFloatingViewIsExpanded:(id)arg1;
- (void)revealHiddenCandidates;
- (id)scrollViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondaryCandidatesViewController;
- (BOOL)secondaryCandidatesViewIsCurrent;
- (unsigned int)selectedSortIndex;
- (void)setBackdropView:(id)arg1;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setDrawBottomShadow:(BOOL)arg1;
- (void)setDrawTopShadow:(BOOL)arg1;
- (void)setGridHeader:(id)arg1;
- (void)setInlineText:(id)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setSecondaryCandidatesViewController:(id)arg1;
- (void)setSecondaryCandidatesViewIsCurrent:(BOOL)arg1;
- (void)setSortBar:(id)arg1;
- (void)setSortedCandidates:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)showArrowButton:(BOOL)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)sortBar;
- (void)sortSelectionBarAction:(id)arg1;
- (id)sortedCandidates;
- (id)statisticsIdentifier;
- (void)statusBarFrameWillChange:(id)arg1;

@end
