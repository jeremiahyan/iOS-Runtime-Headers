/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualLibraryUpdateAlertAction : MusicContextualAlertAction {
    BOOL _isAddAction;
    BOOL _isDeleteLibraryUpdate;
    BOOL _isKeepLocalAction;
}

@property (nonatomic, readonly) BOOL isAddAction;
@property (nonatomic, readonly) BOOL isDeleteLibraryUpdate;
@property (nonatomic, readonly) BOOL isKeepLocalAction;

+ (void)_showDeleteConfirmationActionAlertControllerWithTitle:(id)arg1 deleteActionTitle:(id)arg2 additionalPresentationHandler:(id /* block */)arg3 deletionHandler:(id /* block */)arg4 didDismissHandler:(id /* block */)arg5;
+ (void)getContextualLibraryAddRemoveAction:(id*)arg1 keepLocalAction:(id*)arg2 forEntityValueContext:(id)arg3 overrideItemEntityProvider:(id)arg4 shouldDismissHandler:(id /* block */)arg5 additionalPresentationHandler:(id /* block */)arg6 didDismissHandler:(id /* block */)arg7;
+ (id)notificationTokenForOverrideItemEntityProvider:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;

- (BOOL)isAddAction;
- (BOOL)isDeleteLibraryUpdate;
- (BOOL)isKeepLocalAction;

@end
