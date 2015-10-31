/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
}

@property (nonatomic, readonly) BOOL hasHighFrequencyFilter;
@property (nonatomic, readonly) BOOL hasLowFrequencyFilter;
@property (nonatomic, readonly) BOOL hasOperatingHoursRange;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHighFrequencyFilter;
- (BOOL)hasLowFrequencyFilter;
- (BOOL)hasOperatingHoursRange;
- (unsigned int)hash;
- (id)highFrequencyFilter;
- (BOOL)isEqual:(id)arg1;
- (id)lowFrequencyFilter;
- (void)mergeFrom:(id)arg1;
- (id)operatingHoursRange;
- (BOOL)readFrom:(id)arg1;
- (void)setHighFrequencyFilter:(id)arg1;
- (void)setLowFrequencyFilter:(id)arg1;
- (void)setOperatingHoursRange:(id)arg1;
- (void)writeTo:(id)arg1;

@end
