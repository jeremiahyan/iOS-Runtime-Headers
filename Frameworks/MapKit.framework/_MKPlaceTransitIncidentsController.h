/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceTransitIncidentsController : NSObject {
    NSSet *_blockedLines;
    NSMutableDictionary *_dominantIncidentForLine;
    MKMapItem *_mapItem;
    NSDate *_nextIncidentChangeDate;
    NSArray *_validIncidents;
}

- (void).cxx_destruct;
- (id)_blockedLinesAtDate:(id)arg1;
- (id)_dominantIncidentForLine:(id)arg1 atDate:(id)arg2;
- (id)_validIncidentsAtDate:(id)arg1;
- (void)_validateCacheForDate:(id)arg1;
- (id)blockedLinesAtDate:(id)arg1;
- (id)dominantIncidentForLine:(id)arg1 atDate:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (void)resetCache;
- (id)validIncidentsAtDate:(id)arg1;

@end
