/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    UIImage *_actualImage;
    int _onAdaptiveBackground;
    GKPlayer *_player;
    BOOL _selected;
}

@property (nonatomic, retain) UIImage *actualImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isOnAdaptiveBackground, nonatomic) int onAdaptiveBackground;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) BOOL selected;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)actualImage;
- (void)dealloc;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (int)isOnAdaptiveBackground;
- (id)player;
- (void)refreshPhoto;
- (void)refreshPhotoWithCompletionHandler:(id /* block */)arg1;
- (BOOL)selected;
- (void)setActualImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setOnAdaptiveBackground:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSelected:(BOOL)arg1;

@end
