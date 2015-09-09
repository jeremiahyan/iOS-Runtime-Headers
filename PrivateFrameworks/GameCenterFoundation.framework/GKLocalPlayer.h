/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayer : GKPlayer <GKSavedGameListener, NSCoding, NSSecureCoding> {
    GKInvite *_acceptedInvite;
    UIViewController *_activeViewController;
    BOOL _appUnrecognized;
    NSDictionary *_authenticateAlertDictionary;
    id /* block */ _authenticateHandler;
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _authenticatingCurrentAccount;
    id /* block */ _authenticationCompletionHandler;
    UIAlertView *_currentAlert;
    NSInvocation *_currentFriendRequestInvocation;
    BOOL _didAuthenticate;
    BOOL _enteringForeground;
    int _environment;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    unsigned int _failedLogins;
    NSString *_lastAccountNameAuthenticated;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    NSString *_lastUsernameAttempted;
    UIAlertView *_loginAlertView;
    BOOL _newToGameCenter;
    UIViewController *_rootViewController;
    UIViewController<GKAuthenticateViewController> *_signInViewController;
    id /* block */ _validateAccountCompletionHandler;
    BOOL _validatingAccount;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) UIViewController *activeViewController;
@property (nonatomic, readonly) BOOL allowNearbyMultiplayer;
@property (getter=isAppUnrecognized, nonatomic) BOOL appUnrecognized;
@property (nonatomic, retain) NSDictionary *authenticateAlertDictionary;
@property (nonatomic, copy) id /* block */ authenticateHandler;
@property (getter=isAuthenticated, nonatomic) BOOL authenticated;
@property (getter=isAuthenticating, nonatomic) BOOL authenticating;
@property (nonatomic) BOOL authenticatingCurrentAccount;
@property (nonatomic, copy) id /* block */ authenticationCompletionHandler;
@property (nonatomic, readonly) BOOL canChangePhoto;
@property (nonatomic) UIAlertView *currentAlert;
@property (nonatomic, retain) NSInvocation *currentFriendRequestInvocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAuthenticate;
@property (nonatomic) BOOL enteringForeground;
@property (nonatomic, readonly) int environment;
@property (nonatomic, retain) GKEventEmitter<GKLocalPlayerListener> *eventEmitter;
@property (nonatomic, readonly) NSString *facebookUserID;
@property (nonatomic) unsigned int failedLogins;
@property (getter=isFindable, nonatomic, readonly) BOOL findable;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *iCloudUserID;
@property (nonatomic, retain) NSString *lastAccountNameAuthenticated;
@property (nonatomic, retain) NSDate *lastAuthDate;
@property (nonatomic, retain) NSString *lastAuthPlayerID;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *lastUsernameAttempted;
@property (nonatomic, retain) UIAlertView *loginAlertView;
@property (getter=isNewToGameCenter, nonatomic) BOOL newToGameCenter;
@property (getter=isPurpleBuddyAccount, nonatomic) BOOL purpleBuddyAccount;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic, retain) UIViewController<GKAuthenticateViewController> *signInViewController;
@property (readonly) Class superclass;
@property (getter=isUnderage, nonatomic, readonly) BOOL underage;
@property (nonatomic, copy) id /* block */ validateAccountCompletionHandler;
@property (nonatomic) BOOL validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)localPlayer;
+ (BOOL)supportsSecureCoding;

- (void)_addEmail:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(id /* block */)arg3;
- (id)acceptedInvite;
- (id)activeViewController;
- (void)addEmail:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)authenticateAlertDictionary;
- (id /* block */)authenticateHandler;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (BOOL)authenticatingCurrentAccount;
- (id /* block */)authenticationCompletionHandler;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)canChangePhoto;
- (id)currentAlert;
- (id)currentFriendRequestInvocation;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)dealloc;
- (void)declineFriendRequestsFromPlayers:(id)arg1 handler:(id /* block */)arg2;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)didAuthenticate;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)enteringForeground;
- (int)environment;
- (id)eventEmitter;
- (unsigned int)failedLogins;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg1;
- (id)friends;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id /* block */)arg1;
- (BOOL)hasEmailAddress:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAppUnrecognized;
- (BOOL)isAuthenticated;
- (BOOL)isAuthenticating;
- (BOOL)isNewToGameCenter;
- (id)lastAccountNameAuthenticated;
- (id)lastAuthDate;
- (id)lastAuthPlayerID;
- (id)lastUsernameAttempted;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id /* block */)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (void)loadFriendRequests:(id /* block */)arg1;
- (void)loadFriendsWithCompletionHandler:(id /* block */)arg1;
- (void)loadGameRecommendationsWithCompletionHandler:(id /* block */)arg1;
- (id)loginAlertView;
- (void)registerListener:(id)arg1;
- (void)removeFriend:(id)arg1 block:(id /* block */)arg2;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)rootViewController;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id /* block */)arg8;
- (void)setAcceptedInvite:(id)arg1;
- (void)setActiveViewController:(id)arg1;
- (void)setAppUnrecognized:(BOOL)arg1;
- (void)setAuthenticateAlertDictionary:(id)arg1;
- (void)setAuthenticateHandler:(id /* block */)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticating:(BOOL)arg1;
- (void)setAuthenticatingCurrentAccount:(BOOL)arg1;
- (void)setAuthenticationCompletionHandler:(id /* block */)arg1;
- (void)setCurrentAlert:(id)arg1;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDidAuthenticate:(BOOL)arg1;
- (void)setEnteringForeground:(BOOL)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)setFailedLogins:(unsigned int)arg1;
- (void)setLastAccountNameAuthenticated:(id)arg1;
- (void)setLastAuthDate:(id)arg1;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setLastUsernameAttempted:(id)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setNewToGameCenter:(BOOL)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setSignInViewController:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setValidateAccountCompletionHandler:(id /* block */)arg1;
- (void)setValidatingAccount:(BOOL)arg1;
- (void)setupForCloudSavedGames;
- (void)setupMultiplayerNotifications;
- (void)showSettings;
- (id)signInViewController;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (id /* block */)validateAccountCompletionHandler;
- (BOOL)validatingAccount;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)accountName;
+ (BOOL)hasAuthenticatedAccount;

- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)cancelAuthentication;
- (void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (void)deletePhoto;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (void)presentError:(id)arg1 forMode:(int)arg2;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showAuthenticateViewController;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)showAuthorizeViewController;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showCreateAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)showSignInAccountRestrictedAlert;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (void)signOutWithCompletionHandler:(id /* block */)arg1;
- (void)startAuthentication;
- (void)startLegacyAuthenticationWithCompletionHandler:(id /* block */)arg1;
- (void)validateAccountWithCompletionHandler:(id /* block */)arg1;

@end