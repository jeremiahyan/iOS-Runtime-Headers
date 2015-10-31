/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet {
    BOOL _actionsReversed;
    UIView *_headerView;
    _UIDimmingKnockoutBackdropView *_inlineBackgroundView;
    UIVisualEffectView *_revealEffectView;
    _UIPreviewPresentationEffectView *_sourceViewSnapshot;
}

@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) _UIDimmingKnockoutBackdropView *inlineBackgroundView;
@property (nonatomic, retain) UIVisualEffectView *revealEffectView;
@property (nonatomic, retain) _UIPreviewPresentationEffectView *sourceViewSnapshot;

- (void).cxx_destruct;
- (float)_actionDescriptiveTextFontSize;
- (float)_actionTitleFontSize;
- (BOOL)_shouldReverseActions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2;
- (id)actionContentColorForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (float)actionHorizontalContentMargin;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })actionImageMarginForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (float)backgroundCornerRadius;
- (id)backgroundView;
- (id)backgroundViewForAction:(id)arg1 withViewRepresentation:(id)arg2 inAlertController:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)descriptiveFontForAction:(id)arg1 inAlertController:(id)arg2;
- (id)dimmingViewForAlertController:(id)arg1;
- (id)headerView;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)inlineBackgroundView;
- (id)interactionProgressForTransitionOfType:(int)arg1 forAlertController:(id)arg2;
- (float)minimumActionHeight;
- (float)minimumWidth;
- (int)permittedActionLayoutDirection;
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)preferredActionFont;
- (id)regularActionFont;
- (id)revealEffectView;
- (void)setHeaderView:(id)arg1;
- (void)setInlineBackgroundView:(id)arg1;
- (void)setRevealEffectView:(id)arg1;
- (void)setSourceViewSnapshot:(id)arg1;
- (BOOL)shouldOccludeDuringPresentation;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (id)sourceViewSnapshot;
- (id)tintColorForAlertController:(id)arg1;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;
- (BOOL)transitionOfType:(int)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end