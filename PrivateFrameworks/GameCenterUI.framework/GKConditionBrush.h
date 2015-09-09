/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKConditionBrush : GKBrush {
    GKBrush *_noBrush;
    NSPredicate *_predicate;
    GKBrush *_yesBrush;
}

@property (nonatomic, retain) GKBrush *noBrush;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) GKBrush *yesBrush;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id)noBrush;
- (id)predicate;
- (void)setNoBrush:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setYesBrush:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (id)yesBrush;

@end
