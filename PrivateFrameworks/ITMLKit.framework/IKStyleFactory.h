/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleFactory : NSObject {
    NSMutableDictionary *_styleListsByClassSelector;
    IKStylesGroup *_stylesGroup;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *styleListsByClassSelector;
@property (nonatomic, readonly, retain) IKStylesGroup *stylesGroup;

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2;

- (void).cxx_destruct;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (id)initWithStylesGroup:(id)arg1;
- (id)styleListForClassSelector:(id)arg1;
- (id)styleListsByClassSelector;
- (id)stylesGroup;

@end
