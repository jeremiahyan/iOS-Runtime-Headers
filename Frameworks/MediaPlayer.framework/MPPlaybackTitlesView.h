/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackTitlesView : UIControl {
    UIView *_contentView;
    NSArray *_labels;
    unsigned int _marqueeScrollableIndex;
    BOOL _marqueeScrollingActive;
    BOOL _showingLoadingUI;
    NSArray *_titles;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) unsigned int marqueeScrollableIndex;
@property (nonatomic) BOOL marqueeScrollingActive;
@property (nonatomic) BOOL showingLoadingUI;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (id)_addLabel:(unsigned int)arg1;
- (id)_addLoadingLabel;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_layoutLabels;
- (void)_layoutLoadingUI;
- (void)_tearDownLabels;
- (void)_updateLabelMarqueeScrolling;
- (id)contentView;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned int)marqueeScrollableIndex;
- (BOOL)marqueeScrollingActive;
- (void)setMarqueeScrollableIndex:(unsigned int)arg1;
- (void)setMarqueeScrollingActive:(BOOL)arg1;
- (void)setShowingLoadingUI:(BOOL)arg1;
- (void)setTitles:(id)arg1;
- (BOOL)showingLoadingUI;
- (id)titles;

@end
