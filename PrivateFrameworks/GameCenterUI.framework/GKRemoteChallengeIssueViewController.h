/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteChallengeIssueViewController : GKRemoteViewController <ChallengeIssueServiceViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithPlayerInternals:(id)arg1 message:(id)arg2;
- (void)remoteViewControllerIsCanceling;
- (void)setChallenge:(id)arg1 withPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(BOOL)arg4;
- (void)setupRemoteView;

@end
