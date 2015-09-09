/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKNearbyPlayersDataSource : GKBasicCollectionViewDataSource {
    BOOL _browsingForNearbyPlayers;
    <GKNearbyBrowserDelegate> *_nearbyDelegate;
    NSMutableArray *_nearbyPlayers;
}

@property (nonatomic) BOOL browsingForNearbyPlayers;
@property (nonatomic) <GKNearbyBrowserDelegate> *nearbyDelegate;
@property (nonatomic, retain) NSMutableArray *nearbyPlayers;

- (BOOL)browsingForNearbyPlayers;
- (void)dealloc;
- (void)didUpdateModel;
- (id)init;
- (id)nearbyDelegate;
- (id)nearbyPlayers;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeAllPlayers;
- (id)sectionTitle;
- (void)setBrowsingForNearbyPlayers:(BOOL)arg1;
- (void)setNearbyDelegate:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)setNearbyPlayers:(id)arg1;

@end
