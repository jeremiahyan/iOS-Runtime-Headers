/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIObservingLabel : UILabel {
    NSString *_keyPath;
    id _object;
}

@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) id object;

- (void).cxx_destruct;
- (void)bindAttributesToObject:(id)arg1 keyPath:(id)arg2;
- (void)dealloc;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;
- (void)unbind;

@end
