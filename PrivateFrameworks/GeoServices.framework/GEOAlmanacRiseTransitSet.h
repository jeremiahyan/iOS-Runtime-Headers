/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAlmanacRiseTransitSet : NSObject {
    double _julianDay;
    struct CAARiseTransitSetDetails { 
        bool bRiseValid; 
        double Rise; 
        bool bTransitAboveHorizon; 
        double Transit; 
        bool bSetValid; 
        double Set; 
    } _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSDate *_transit;
}

@property (nonatomic, readonly) double julianDay;
@property (nonatomic, readonly) struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; double x4; bool x5; double x6; } riseTransitSet;
@property (nonatomic, readonly) NSDate *sunrise;
@property (nonatomic, readonly) NSDate *sunset;
@property (nonatomic, readonly) NSDate *transit;

- (id).cxx_construct;
- (id)_dateFromOffset:(double)arg1 ofJulianDay:(double)arg2;
- (void)dealloc;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; double x4; bool x5; double x6; })arg2;
- (double)julianDay;
- (struct CAARiseTransitSetDetails { bool x1; double x2; bool x3; double x4; bool x5; double x6; })riseTransitSet;
- (id)sunrise;
- (id)sunset;
- (id)transit;

@end
