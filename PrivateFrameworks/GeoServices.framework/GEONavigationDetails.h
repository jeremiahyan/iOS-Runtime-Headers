/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationDetails : NSObject {
    unsigned int _annoucementStage;
    GEOCompanionRouteDetails *_companionRoute;
    GEOCompanionRouteStatus *_companionStatus;
    NSString *_destinationName;
    double _distanceRemainingOnRoute;
    double _distanceToManeuverEnd;
    double _distanceToManeuverStart;
    double _distanceToRoute;
    GEONavigationGuidanceState *_guidanceState;
    GEOLocation *_location;
    BOOL _locationUnreliable;
    unsigned int _nextAnnoucementStage;
    double _remainingTime;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
    GEONavigationRouteSummary *_routeSummary;
    double _timeUntilNextAnnouncement;
}

@property (nonatomic) unsigned int announcementStage;
@property (nonatomic, readonly) GEOCompanionRouteDetails *companionRoute;
@property (nonatomic, readonly) GEOCompanionRouteStatus *companionStatus;
@property (nonatomic, readonly) NSString *destinationName;
@property (nonatomic) double distanceRemainingOnRoute;
@property (nonatomic) double distanceToManeuverEnd;
@property (nonatomic) double distanceToManeuverStart;
@property (nonatomic) double distanceToRoute;
@property (nonatomic, readonly) GEONavigationGuidanceState *guidanceState;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) BOOL locationUnreliable;
@property (nonatomic) int navigationState;
@property (nonatomic, readonly) unsigned int nextAnnouncementStage;
@property (nonatomic) double remainingTime;
@property (nonatomic, retain) GEOComposedRoute *route;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic, readonly) GEONavigationRouteSummary *routeSummary;
@property (nonatomic, readonly) double timeUntilNextAnnouncement;

- (unsigned int)announcementStage;
- (id)companionRoute;
- (id)companionStatus;
- (void)dealloc;
- (id)destinationName;
- (double)distanceRemainingOnRoute;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)distanceToRoute;
- (id)guidanceState;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (id)location;
- (BOOL)locationUnreliable;
- (int)navigationState;
- (unsigned int)nextAnnouncementStage;
- (double)remainingTime;
- (id)route;
- (id)routeMatch;
- (id)routeSummary;
- (void)setAnnouncementStage:(unsigned int)arg1;
- (void)setDistanceRemainingOnRoute:(double)arg1;
- (void)setDistanceToManeuverEnd:(double)arg1;
- (void)setDistanceToManeuverStart:(double)arg1;
- (void)setDistanceToRoute:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationUnreliable:(BOOL)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned int)arg1 andTime:(double)arg2;
- (void)setRemainingTime:(double)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (double)timeUntilNextAnnouncement;

@end
