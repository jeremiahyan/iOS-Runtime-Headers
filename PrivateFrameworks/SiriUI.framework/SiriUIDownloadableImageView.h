/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIDownloadableImageView : UIView {
    NSURL *_imageURL;
    UIImageView *_imageView;
    NSBundle *_placeHolderImageBundle;
    NSString *_placeHolderImageName;
    float _placeHolderVerticalOffset;
    BOOL _showingPlaceHolderImage;
}

- (void).cxx_destruct;
- (void)_setImage:(id)arg1 isPlaceHolder:(BOOL)arg2;
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;
- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (void)setPlaceHolderImageName:(id)arg1;
- (void)setPlaceHolderVerticalOffset:(float)arg1;
- (void)showPlaceHolderImage;

@end
