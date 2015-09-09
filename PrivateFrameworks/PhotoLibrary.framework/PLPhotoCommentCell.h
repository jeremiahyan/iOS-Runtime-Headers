/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoCommentCell : UITableViewCell {
    PLCloudSharedComment *_comment;
    UILabel *_commentBylineLabel;
    UILabel *_commentContentLabel;
    UIView *_styledSeparatorView;
}

@property (nonatomic, copy) PLCloudSharedComment *comment;
@property (nonatomic, readonly, retain) UILabel *commentBylineLabel;
@property (nonatomic, readonly, retain) UILabel *commentContentLabel;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;

+ (id)_attributionStringForComment:(id)arg1;
+ (id)_commentStringForComment:(id)arg1;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2;
+ (float)heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
+ (Class)layerClass;

- (void)_updateContent;
- (id)comment;
- (id)commentBylineLabel;
- (id)commentContentLabel;
- (void)dealloc;
- (void)delete:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setComment:(id)arg1;
- (id)styledSeparatorView;

@end
