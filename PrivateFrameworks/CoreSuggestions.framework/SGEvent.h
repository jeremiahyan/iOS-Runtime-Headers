/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEvent : SGObject <SGEventForGeocode> {
    NSDate *_creationDate;
    NSDate *_end;
    NSTimeZone *_endTimeZone;
    NSObject<OS_dispatch_queue> *_geocodeQueue;
    SGEvent *_geocoded;
    BOOL _isAllDay;
    NSDate *_lastModifiedDate;
    NSArray *_locations;
    NSString *_notes;
    NSString *_opaqueKey;
    NSDate *_start;
    NSTimeZone *_startTimeZone;
    NSArray *_tags;
    NSString *_title;
    NSString *_uniqueKey;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;
@property (getter=isGeocodeCandidate, nonatomic, readonly) BOOL geocodeCandidate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isAllDay;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueKey;

+ (id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyTimeRangeToEKEvent:(id)arg1;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(BOOL)arg3;
- (id)creationDate;
- (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)endDateComponents;
- (id)endTimeZone;
- (id)firstLocationForType:(unsigned int)arg1;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (void)geocodeWithCallback:(id /* block */)arg1;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15;
- (BOOL)isAllDay;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (BOOL)isGeocodeCandidate;
- (id)lastModifiedDate;
- (id)locations;
- (void)mergeIntoEKEvent:(id)arg1;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2;
- (void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3;
- (id)notes;
- (id)opaqueKey;
- (id)start;
- (id)startDateComponents;
- (id)startTimeZone;
- (id)tags;
- (id)title;
- (id)toEKEventWithStore:(id)arg1;
- (id)uniqueKey;

@end
