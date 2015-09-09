/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {
    SiriUIKeyline *_bottomKeyline;
    UILabel *_cancelledLabel;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UIView *_snippetBackgroundView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _snippetEdgeInsets;
    SiriUIContentButton *_snippetPunchOutButton;
    SiriUISnippetViewController *_snippetViewController;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_snippetEdgeInsets, setter=_setSnippetEdgeInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } snippetEdgeInsets;
@property (nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;

+ (float)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureSubviewsForCurrentInset;
- (float)_heightForFooterView;
- (float)_heightForHeaderView;
- (float)_heightForTransparentFooterView;
- (float)_heightForTransparentHeaderView;
- (void)_setFooterView:(id)arg1;
- (void)_setHeaderView:(id)arg1;
- (void)_setSnippetEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setTransparentFooterView:(id)arg1;
- (void)_setTransparentHeaderView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_snippetEdgeInsets;
- (void)_snippetPunchOutButtonTapped:(id)arg1;
- (void)animateSnippetCancellationWithCompletion:(id /* block */)arg1;
- (void)animateSnippetConfirmationWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSnippetViewController:(id)arg1;
- (id)snippetViewController;

@end
