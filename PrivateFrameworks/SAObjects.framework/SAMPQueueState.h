/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAMPMediaItem *listeningToItem;
@property (nonatomic, retain) SANPCommandInfo *nowPlayingCommandInfo;
@property (nonatomic, retain) SAMPNowPlayingQueuePosition *playbackQueuePosition;
@property (nonatomic, copy) NSNumber *playbackRate;
@property (nonatomic, copy) NSString *source;
@property (nonatomic) int state;
@property (readonly) Class superclass;

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listeningToItem;
- (id)nowPlayingCommandInfo;
- (id)playbackQueuePosition;
- (id)playbackRate;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setListeningToItem:(id)arg1;
- (void)setNowPlayingCommandInfo:(id)arg1;
- (void)setPlaybackQueuePosition:(id)arg1;
- (void)setPlaybackRate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (id)source;
- (int)state;

@end
