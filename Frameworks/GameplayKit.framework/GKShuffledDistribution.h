/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKShuffledDistribution : GKRandomDistribution {
    int _delta;
    int _lastInt;
    int *_nextInts;
    int _nextIntsCapacity;
    int _nextIntsCount;
    float _uniformDistance;
}

- (void)dealloc;
- (id)initWithRandomSource:(id)arg1 lowestValue:(int)arg2 highestValue:(int)arg3;
- (id)initWithRandomSource:(id)arg1 lowestValue:(int)arg2 highestValue:(int)arg3 delta:(int)arg4;
- (int)nextInt;
- (void)setUniformDistance:(float)arg1;
- (float)uniformDistance;

@end
