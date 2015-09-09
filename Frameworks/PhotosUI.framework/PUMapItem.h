/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapItem : NSObject {
    NSDate *_dateCreated;
    NSObject<NSCopying> *_itemId;
    CLLocation *_location;
}

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSObject<NSCopying> *itemId;
@property (nonatomic, retain) CLLocation *location;

+ (id /* block */)mapItemSortingComparatorNewestToOldest;
+ (id /* block */)mapItemSortingComparatorOldestToNewest;
+ (id)stringForItemId:(id)arg1;

- (void).cxx_destruct;
- (int)_mapItemSortingCompareWithMapItem:(id)arg1;
- (int)compare:(id)arg1;
- (id)dateCreated;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemId;
- (id)location;
- (void)setDateCreated:(id)arg1;
- (void)setItemId:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)thumbnailImage;

@end
