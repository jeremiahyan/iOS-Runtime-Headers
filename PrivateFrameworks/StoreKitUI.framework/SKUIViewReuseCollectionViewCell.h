/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {
    NSMapTable *_allViewTextProperties;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    SKUIViewReusePool *_viewPool;
    NSArray *_views;
}

@property (nonatomic, readonly) NSArray *allExistingViews;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;

- (void).cxx_destruct;
- (id)allExistingViews;
- (void)applyLayoutAttributes:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)existingViewForIndex:(int)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)modifyUsingBlock:(id /* block */)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)textPropertiesForView:(id)arg1;

@end
