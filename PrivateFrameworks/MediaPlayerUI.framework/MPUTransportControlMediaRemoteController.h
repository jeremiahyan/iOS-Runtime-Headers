/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUTransportControlMediaRemoteController : NSObject {
    BOOL _advertisement;
    NSArray *_allowedTransportControlTypes;
    BOOL _alwaysLive;
    <MPUTransportControlMediaRemoteControllerDelegate> *_delegate;
    double _displayedSkipBackwardInterval;
    double _displayedSkipForwardInterval;
    int _likeControlPresentationStyle;
    int _likedState;
    NSDictionary *_nowPlayingInfo;
    BOOL _playing;
    unsigned int _repeatType;
    unsigned int _runningLongPressCommand;
    BOOL _sharingEnabled;
    unsigned int _shuffleType;
    NSArray *_supportedCommands;
    unsigned int _transportControlsCount;
    MPUTransportControlsView *_transportControlsView;
}

@property (getter=isAdvertisement, nonatomic, readonly) BOOL advertisement;
@property (nonatomic, copy) NSArray *allowedTransportControlTypes;
@property (getter=isAlwaysLive, nonatomic, readonly) BOOL alwaysLive;
@property (nonatomic) <MPUTransportControlMediaRemoteControllerDelegate> *delegate;
@property (nonatomic, readonly) double displayedSkipBackwardInterval;
@property (nonatomic, readonly) double displayedSkipForwardInterval;
@property (nonatomic, readonly) int likeControlPresentationStyle;
@property (nonatomic, readonly) int likedState;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (nonatomic, readonly) unsigned int repeatType;
@property (getter=isSharingEnabled, nonatomic, readonly) BOOL sharingEnabled;
@property (nonatomic, readonly) unsigned int shuffleType;
@property (nonatomic, copy) NSArray *supportedCommands;
@property (nonatomic) unsigned int transportControlsCount;
@property (nonatomic, readonly) MPUTransportControlsView *transportControlsView;

- (void).cxx_destruct;
- (id)_commandOptionsForFeedbackOrPurchase;
- (void)_completeInitializationWithTransportControlsView:(id)arg1;
- (struct __CFString { }*)_nowPlayingInfoActiveKeyForMediaRemoteCommand:(unsigned int)arg1;
- (id)_nowPlayingInfoValueForMediaRemoteNowPlayingInfoKey:(struct __CFString { }*)arg1;
- (void)_presentFirstLoveAlertIfNeeded;
- (void)_presentLikeBanActionSheetForCommand:(unsigned int)arg1;
- (void)_updateForNowPlayingInfoChange;
- (void)_updateForSupportedCommandsChange;
- (id)allowedTransportControlTypes;
- (void)cancelRunningLongPressCommand;
- (id)delegate;
- (double)displayedSkipBackwardInterval;
- (double)displayedSkipForwardInterval;
- (int)handleLongPressBeginOnControlType:(int)arg1;
- (int)handleLongPressEndOnControlType:(int)arg1;
- (void)handlePushingMediaRemoteCommand:(unsigned int)arg1;
- (int)handleTapOnControlType:(int)arg1;
- (id)initWithTransportControlsView:(id)arg1 allowedTransportControlTypes:(id)arg2;
- (id)initWithTransportControlsView:(id)arg1 transportControlsCount:(unsigned int)arg2;
- (BOOL)isAdvertisement;
- (BOOL)isAlwaysLive;
- (BOOL)isPlaying;
- (BOOL)isSharingEnabled;
- (int)likeControlPresentationStyle;
- (int)likedState;
- (id)nowPlayingInfo;
- (unsigned int)repeatType;
- (void)setAllowedTransportControlTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTransportControlsCount:(unsigned int)arg1;
- (unsigned int)shuffleType;
- (id)supportedCommands;
- (unsigned int)transportControlsCount;
- (id)transportControlsView;

@end
