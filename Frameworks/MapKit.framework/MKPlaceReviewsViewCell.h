/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCell : UITableViewCell {
    UILabel *_authorLabel;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    NSDate *_date;
    UILabel *_dateLabel;
    NSLayoutConstraint *_dateLabelBaselineConstraint;
    UIImageView *_pictureView;
    UILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelBaselineConstraint;
    NSLayoutConstraint *_reviewLabelHeightConstraint;
    NSLayoutConstraint *_reviewLabelToBottomConstraint;
    MKStarRatingAndLabelView *_starView;
}

@property (nonatomic) NSString *author;
@property (nonatomic) NSDate *date;
@property (nonatomic) UIImage *picture;
@property (nonatomic) unsigned int rating;
@property (nonatomic) NSString *reviewText;

+ (float)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)fontForAuthor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)refreshMarginConstraints;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setRating:(unsigned int)arg1;
- (void)setReviewText:(id)arg1;
- (void)updateConstraints;

@end
