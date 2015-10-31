/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDRateAndTotalLimiter : _CDRateLimiter {
    int _currentTotal;
    int _totalCount;
}

@property int currentTotal;
@property (readonly) int totalCount;

- (BOOL)credit;
- (int)currentTotal;
- (BOOL)debited;
- (id)description;
- (id)initWithCount:(int)arg1 perPeriod:(double)arg2;
- (id)initWithCount:(int)arg1 perPeriod:(double)arg2 totalCountLimit:(int)arg3;
- (void)setCurrentTotal:(int)arg1;
- (int)totalCount;

@end
