/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
    int _directionalFailureCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _lastLocation;
    double _lastTime;
    struct CGPoint { 
        float x; 
        float y; 
    } _startLocation;
    UIDelayedAction *_swipeFailureDelay;
}

- (void)_processNewLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)dealloc;
- (void)enoughTimeElapsed:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
