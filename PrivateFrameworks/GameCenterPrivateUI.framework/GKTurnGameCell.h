/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTurnGameCell : GKBaseGameCell {
    GKLabel *_activeMatchesLabel;
    NSLayoutConstraint *_iconLeadingConstraint;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _insets;
    GKLabel *_localPlayerTurnsLabel;
    unsigned int _numberOfActiveMatches;
    unsigned int _numberOfLocalPlayerTurns;
    NSLayoutConstraint *_statusImageTrailingConstraint;
    UIImageView *_statusImageView;
    NSLayoutConstraint *_textContainerTrailingConstraint;
    GKContiguousContainerView *_textContainerView;
}

@property (nonatomic, retain) GKLabel *activeMatchesLabel;
@property (nonatomic, retain) NSLayoutConstraint *iconLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property (nonatomic, retain) GKLabel *localPlayerTurnsLabel;
@property (nonatomic) unsigned int numberOfActiveMatches;
@property (nonatomic) unsigned int numberOfLocalPlayerTurns;
@property (nonatomic, retain) NSLayoutConstraint *statusImageTrailingConstraint;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic, retain) GKContiguousContainerView *textContainerView;

+ (float)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (id)activeMatchesLabel;
- (void)dealloc;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)iconLeadingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (id)localPlayerTurnsLabel;
- (unsigned int)numberOfActiveMatches;
- (unsigned int)numberOfLocalPlayerTurns;
- (void)setActiveMatchesLabel:(id)arg1;
- (void)setIconLeadingConstraint:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLocalPlayerTurnsLabel:(id)arg1;
- (void)setNumberOfActiveMatches:(unsigned int)arg1;
- (void)setNumberOfLocalPlayerTurns:(unsigned int)arg1;
- (void)setStatusImageTrailingConstraint:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerTrailingConstraint:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (id)statusImageTrailingConstraint;
- (id)statusImageView;
- (id)textContainerTrailingConstraint;
- (id)textContainerView;
- (void)updateMarginConstraints;

@end
