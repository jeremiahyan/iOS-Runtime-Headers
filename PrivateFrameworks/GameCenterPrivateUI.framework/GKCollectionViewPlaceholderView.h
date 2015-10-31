/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <_GKStateMachineDelegate> {
    int _alignment;
    NSArray *_cachedConstraints;
    NSString *_errorMessage;
    NSString *_errorTitle;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    SEL _noContentButtonAction;
    id _noContentButtonTarget;
    NSString *_noContentButtonTitle;
    NSString *_noContentMessage;
    NSString *_noContentTitle;
    GKPlaceholderView *_placeholderView;
}

@property (nonatomic) int alignment;
@property (nonatomic, retain) NSArray *cachedConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, retain) NSString *errorTitle;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicatorView;
@property (nonatomic, retain) GKPlaceholderContentStateMachine *loadingMachine;
@property (nonatomic, retain) NSString *loadingState;
@property (nonatomic) SEL noContentButtonAction;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic, retain) NSString *noContentButtonTitle;
@property (nonatomic, retain) NSString *noContentMessage;
@property (nonatomic, retain) NSString *noContentTitle;
@property (nonatomic, retain) GKPlaceholderView *placeholderView;
@property (readonly) Class superclass;

- (int)alignment;
- (void)buttonPressed;
- (id)cachedConstraints;
- (void)dealloc;
- (void)delayedShowLoadingIndicator;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitErrorState;
- (void)didExitLoadingState;
- (void)didExitNoContentState;
- (id)errorMessage;
- (id)errorTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)loadingIndicatorView;
- (id)loadingMachine;
- (id)loadingState;
- (SEL)noContentButtonAction;
- (id)noContentButtonTarget;
- (id)noContentButtonTitle;
- (id)noContentMessage;
- (id)noContentTitle;
- (id)placeholderView;
- (void)setAlignment:(int)arg1;
- (void)setCachedConstraints:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setNoContentButtonAction:(SEL)arg1;
- (void)setNoContentButtonTarget:(id)arg1;
- (void)setNoContentButtonTitle:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)updateConstraints;

@end
