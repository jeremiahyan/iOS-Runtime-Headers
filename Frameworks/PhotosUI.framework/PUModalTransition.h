/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {
    int __operation;
}

@property (setter=_setOperation:, nonatomic) int _operation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)_operation;
- (void)_setOperation:(int)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)cancelInteractiveTransition;
- (void)completeInteractiveDismissTransitionFinished:(BOOL)arg1;
- (void)completeInteractivePresentTransitionFinished:(BOOL)arg1;
- (void)finishInteractiveTransition;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)transitionWillDismissInteractively:(BOOL)arg1;
- (void)transitionWillPresentInteractively:(BOOL)arg1;

@end
