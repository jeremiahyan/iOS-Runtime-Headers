/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (nonatomic) int adjustmentType;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, copy) NSString *filterName;
@property (nonatomic, copy) NSDictionary *filterSettings;

+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { float x1; float x2; })arg2 effectFilterCount:(unsigned int*)arg3;
+ (id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(struct CGSize { float x1; float x2; })arg2 withOriginalImageSize:(struct CGSize { float x1; float x2; })arg3 effectFilterCount:(unsigned int*)arg4;
+ (void)convertAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 andCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toStraightenAngle:(float*)arg3 andCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromImageSize:(struct CGSize { float x1; float x2; })arg2 toImageSize:(struct CGSize { float x1; float x2; })arg3;
+ (void)convertStraightenAngle:(float)arg1 andCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg3 andCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
+ (void)fixupAssetSizeFromAdjustments:(id)arg1;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (int)adjustmentType;
- (id)metadataProperties;
- (void)setAdjustmentType:(int)arg1;

@end
