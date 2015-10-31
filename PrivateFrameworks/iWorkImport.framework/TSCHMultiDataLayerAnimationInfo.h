/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying> {
    BOOL mAboveIntercept;
    BOOL mAtIntercept;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mChartBodyFrameInRepElementSpace;
    BOOL mCrossesIntercept;
    BOOL mCurrentAboveIntercept;
    BOOL mCurrentAtIntercept;
    float mDuration;
    BOOL mElementUndefined;
    BOOL mHorizontalChart;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mInterceptRect;
    NSArray *mKeyTimes;
    NSMutableArray *mLayerAnimationValues;
    BOOL mShouldAnimate;
    CAMediaTimingFunction *mTimingFunction;
}

@property (nonatomic) BOOL aboveIntercept;
@property (nonatomic) BOOL atIntercept;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } chartBodyFrameInRepElementSpace;
@property (nonatomic) BOOL crossesIntercept;
@property (nonatomic) BOOL currentAboveIntercept;
@property (nonatomic) BOOL currentAtIntercept;
@property (nonatomic) float duration;
@property (nonatomic) BOOL elementUndefined;
@property (nonatomic) BOOL horizontalChart;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } interceptRect;
@property (nonatomic, copy) NSArray *keyTimes;
@property (nonatomic, readonly) NSArray *layerAnimationValues;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

+ (id)animationInfo;

- (BOOL)aboveIntercept;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
- (void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3 keyTimes:(id)arg4;
- (BOOL)atIntercept;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyFrameInRepElementSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)crossesIntercept;
- (BOOL)currentAboveIntercept;
- (BOOL)currentAtIntercept;
- (void)dealloc;
- (float)duration;
- (BOOL)elementUndefined;
- (BOOL)horizontalChart;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })interceptRect;
- (id)keyTimes;
- (id)layerAnimationValues;
- (void)setAboveIntercept:(BOOL)arg1;
- (void)setAtIntercept:(BOOL)arg1;
- (void)setChartBodyFrameInRepElementSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCrossesIntercept:(BOOL)arg1;
- (void)setCurrentAboveIntercept:(BOOL)arg1;
- (void)setCurrentAtIntercept:(BOOL)arg1;
- (void)setDuration:(float)arg1;
- (void)setElementUndefined:(BOOL)arg1;
- (void)setHorizontalChart:(BOOL)arg1;
- (void)setInterceptRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)setTimingFunction:(id)arg1;
- (BOOL)shouldAnimate;
- (id)timingFunction;

@end
