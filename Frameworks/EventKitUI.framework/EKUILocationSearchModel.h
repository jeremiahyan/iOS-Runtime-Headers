/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILocationSearchModel : NSObject <ABSearchOperationDelegate, CLLocationManagerDelegate, MKSearchCompleterDelegate> {
    ABSearchOperation *_abSearchOperation;
    NSOperationQueue *_abSearchQueue;
    MKLocalSearchCompleter *_completer;
    NSMutableDictionary *_conferenceRoomAddressesToConferenceRooms;
    NSOperationQueue *_conferenceRoomOperationQueue;
    NSObject<OS_dispatch_queue> *_conferenceRoomProcessingQueue;
    NSMutableArray *_contactsSearchResults;
    EKStructuredLocation *_currentLocation;
    <EKUILocationSearchModelDelegate> *_delegate;
    EKEventStore *_eventStore;
    NSObject<OS_dispatch_queue> *_eventsQueue;
    EKOccurrenceCacheLocationSearch *_eventsSearch;
    NSMutableArray *_eventsSearchResults;
    NSMutableArray *_frequentsSearchResults;
    NSMutableArray *_geocodedSearchResults;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CLInUseAssertion *_locationAssertion;
    CLLocationManager *_locationManager;
    NSArray *_mapCompletionSearchResults;
    NSMutableArray *_mutableConferenceRoomSearchResults;
    NSObject<OS_dispatch_queue> *_recentsQueue;
    NSMutableArray *_recentsSearchResults;
    NSTimer *_timer;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
}

@property (nonatomic, readonly) NSArray *conferenceRoomSearchResults;
@property (nonatomic, readonly) NSArray *contactsSearchResults;
@property (nonatomic, retain) EKStructuredLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKUILocationSearchModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eventsSearchResults;
@property (nonatomic, readonly) NSArray *frequentsSearchResults;
@property (nonatomic, readonly) NSArray *geocodedSearchResults;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *mapCompletionSearchResults;
@property (nonatomic, readonly) NSArray *recentsSearchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CLLocationForDictionary:(id)arg1;
- (void)_addDiscoveredConferenceRooms:(id)arg1;
- (void)_handleAvailabilityResults:(id)arg1 forOperation:(id)arg2;
- (void)_processDirectorySearchResultSet:(id)arg1 forOperation:(id)arg2;
- (void)addLocationToRecents:(id)arg1 addressString:(id)arg2;
- (void)beginSearchForTerm:(id)arg1;
- (void)cancelSearch;
- (void)cancelTimer;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (id)conferenceRoomSearchResults;
- (id)contactsSearchResults;
- (id)currentLocation;
- (void)dealloc;
- (void)dedupeResults;
- (id)delegate;
- (id)dictionaryForCLLocation:(id)arg1;
- (id)eventsSearchResults;
- (id)frequentsSearchResults;
- (void)geocodeFallback:(id)arg1;
- (id)geocodedSearchResults;
- (void)getCurrentLocation;
- (id)initWithEventStore:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)mapCompletionSearchResults;
- (id)recentsSearchResults;
- (void)resetConferenceRoomSearchResults;
- (void)resetContactsSearchResults;
- (void)resetEventsSearchResults;
- (void)resetSearchResults:(BOOL)arg1;
- (void)searchConferenceRooms:(id)arg1;
- (void)searchFrequentLocations:(id)arg1;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)selectCurrentLocation;
- (void)selectLocation:(id)arg1;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)setCurrentLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopUpdatingLocation;
- (void)timerFired:(id)arg1;
- (void)updateEventLocations:(id)arg1;
- (void)updateRecents:(id)arg1;

@end
