/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPControlSession : NSObject <RMSDAAPControlSession, RMSDAAPNowPlayingManagerDelegate, RMSDAAPRequestManagerDelegate, RMSDAAPTouchRemoteManagerDelegate> {
    <RMSDAAPControlSessionDelegate> *_delegate;
    RMSDAAPLoginManager *_loginManager;
    RMSNowPlayingInfo *_nowPlayingInfo;
    RMSDAAPNowPlayingManager *_nowPlayingManager;
    RMSDAAPRequestManager *_requestManager;
    RMSService *_service;
    RMSDAAPTouchRemoteManager *_touchRemoteManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSDAAPControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) RMSService *service;
@property (readonly) Class superclass;

+ (id)localControlSession;
+ (id)proxyControlSession;

- (void).cxx_destruct;
- (void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_stringFromRMSPlaybackCommand:(int)arg1;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (id)init;
- (void)logout;
- (void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestManagerFailedWithUnauthorizedError:(id)arg1;
- (void)requestManagerFailedWithUnknownError:(id)arg1;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendNavigationCommand:(int)arg1;
- (void)sendPlaybackCommand:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(int)arg1 repeatCount:(unsigned long)arg2;
- (void)sendTouchMoveWithDirection:(int)arg1 repeatCount:(unsigned long)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(int)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)touchRemoteManagerDidDisconnect:(id)arg1;

@end
