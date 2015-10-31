/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitInfoLabelView : UILabel {
    BOOL _containsText;
    BOOL _hasCustomFont;
    BOOL _hasCustomShieldSize;
    NSArray *_labelItems;
    MKMapItem *_mapItem;
    float _maxImageY;
    float _maxWidth;
    int _shieldSize;
    float _spaceBetweenShields;
}

@property (nonatomic, readonly) BOOL containsText;
@property (nonatomic, retain) NSArray *labelItems;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) int shieldSize;
@property (nonatomic) float spaceBetweenShields;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setFont:(id)arg1 custom:(BOOL)arg2;
- (void)_setupLabelInfo;
- (int)_shieldSizeForContentSizeCategory:(id)arg1;
- (BOOL)containsText;
- (void)dealloc;
- (id)font;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(float)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)labelItems;
- (id)mapItem;
- (void)setFont:(id)arg1;
- (void)setLabelItems:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setShieldSize:(int)arg1;
- (void)setSpaceBetweenShields:(float)arg1;
- (int)shieldSize;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)spaceBetweenShields;

@end
