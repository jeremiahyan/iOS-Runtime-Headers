/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMatchLoadingView : UIView {
    UIProgressView *_progressView;
    UILabel *_titleLabel;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

@property (nonatomic, readonly) UIProgressView *progressView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)setTitle:(id)arg1;
- (id)title;

@end
