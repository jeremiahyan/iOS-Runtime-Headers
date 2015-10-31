/* Generated by RuntimeBrowser.
 */

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource>

@required

- (UIViewController *)_inputViewController;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned int)arg1;
- (BOOL)isChangingPlacement;
- (UIInputViewSetPlacement *)placement;
- (float)positionConstraintConstant;
- (void)setInterfaceAutorotationDisabled:(BOOL)arg1;
- (UIView *)view;

@end
