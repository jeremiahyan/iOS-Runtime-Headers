/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    PDAnimationInfo *mAnimationInfo;
    BOOL mHasOleChart;
    OADImageRecolorInfo *mImageRecolorInfo;
    int mInheritedTextStylePlaceholderType;
    BOOL mIsComment;
    PDPlaceholder *mPlaceholder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) Class superclass;

- (id)animationInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (BOOL)hasAnimationInfo;
- (BOOL)hasBounds;
- (BOOL)hasOleChart;
- (BOOL)hasPlaceholder;
- (id)imageRecolorInfo;
- (int)inheritedTextStylePlaceholderType;
- (id)init;
- (BOOL)isComment;
- (id)placeholder;
- (void)setAnimationInfo:(id)arg1;
- (void)setHasOleChart:(BOOL)arg1;
- (void)setImageRecolorInfo:(id)arg1;
- (void)setInheritedTextStylePlaceholderType:(int)arg1;
- (void)setIsComment:(BOOL)arg1;
- (void)setPlaceholder:(id)arg1;

@end
