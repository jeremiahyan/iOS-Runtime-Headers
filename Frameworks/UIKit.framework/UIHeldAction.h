/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHeldAction : UIDelayedAction {
    double _baseDelay;
    NSDate *_holdBegan;
    BOOL _holding;
    double _timeBalance;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)hold;
- (BOOL)isHolding;
- (void)resume;
- (void)touchWithDelay:(double)arg1;
- (void)unschedule;

@end
