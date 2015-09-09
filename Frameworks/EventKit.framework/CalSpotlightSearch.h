/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CalSpotlightSearch : NSObject {
    bool _cancelled;
    struct __CFDictionary { } *_closestEventOccurrences;
    <CalSearchDataSink> *_dataSink;
    struct CalDatabase { } *_database;
    NSString *_descriptionString;
    bool _implementsCancellationCallback;
    NSString *_locationString;
    struct __CFSet { } *_matchedEventsSet;
    struct __CFSet { } *_matchedLocationsSet;
    struct __CFSet { } *_matchedParticipantsSet;
    bool _moreResultsAvailable;
    bool _onlySearchEvents;
    struct __CFArray { } *_partialResults;
    NSString *_participantString;
    NSString *_titleString;
}

+ (struct __CFDictionary { }*)newQueryCache;

- (void)_addMatchedLocationIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray { }*)arg1;
- (struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createLocationIdsSearchContext;
- (struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createParticipantIdsSearchContext;
- (struct CalEventSpotlightContext { bool x1; bool x2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool *x7; bool *x8; struct CalDatabase {} *x9; int (*x10)(); void *x11; int x12; int x13; int x14; struct __CFDictionary {} *x15; double x16; double x17; double x18; struct CalSpotlightMatchedEventContext { int x_19_1_1; char *x_19_1_2; char *x_19_1_3; char *x_19_1_4; double x_19_1_5; double x_19_1_6; int x_19_1_7; int x_19_1_8; char *x_19_1_9; char *x_19_1_10; char *x_19_1_11; int x_19_1_12; struct __CFArray {} *x_19_1_13; int x_19_1_14; } x19; }*)_createSpotlightEventsContext;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteSpotlightEventsContext:(struct CalEventSpotlightContext { bool x1; bool x2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool *x7; bool *x8; struct CalDatabase {} *x9; int (*x10)(); void *x11; int x12; int x13; int x14; struct __CFDictionary {} *x15; double x16; double x17; double x18; struct CalSpotlightMatchedEventContext { int x_19_1_1; char *x_19_1_2; char *x_19_1_3; char *x_19_1_4; double x_19_1_5; double x_19_1_6; int x_19_1_7; int x_19_1_8; char *x_19_1_9; char *x_19_1_10; char *x_19_1_11; int x_19_1_12; struct __CFArray {} *x_19_1_13; int x_19_1_14; } x19; }*)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_getSpotlightEvents:(struct CalEventSpotlightContext { bool x1; bool x2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool *x7; bool *x8; struct CalDatabase {} *x9; int (*x10)(); void *x11; int x12; int x13; int x14; struct __CFDictionary {} *x15; double x16; double x17; double x18; struct CalSpotlightMatchedEventContext { int x_19_1_1; char *x_19_1_2; char *x_19_1_3; char *x_19_1_4; double x_19_1_5; double x_19_1_6; int x_19_1_7; int x_19_1_8; char *x_19_1_9; char *x_19_1_10; char *x_19_1_11; int x_19_1_12; struct __CFArray {} *x_19_1_13; int x_19_1_14; } x19; }*)arg1 callback:(id /* block */)arg2;
- (void)_startLoadingResults:(id /* block */)arg1;
- (void)calculateSearchWindow:(struct CalEventSpotlightContext { bool x1; bool x2; struct __CFSet {} *x3; struct __CFSet {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool *x7; bool *x8; struct CalDatabase {} *x9; int (*x10)(); void *x11; int x12; int x13; int x14; struct __CFDictionary {} *x15; double x16; double x17; double x18; struct CalSpotlightMatchedEventContext { int x_19_1_1; char *x_19_1_2; char *x_19_1_3; char *x_19_1_4; double x_19_1_5; double x_19_1_6; int x_19_1_7; int x_19_1_8; char *x_19_1_9; char *x_19_1_10; char *x_19_1_11; int x_19_1_12; struct __CFArray {} *x_19_1_13; int x_19_1_14; } x19; }*)arg1;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 searchString:(struct __CFString { }*)arg2 dataSink:(id)arg3 queryCache:(struct __CFDictionary { }*)arg4;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 titleString:(id)arg2 locationString:(id)arg3 descriptionString:(id)arg4 participantString:(id)arg5 dataSink:(id)arg6 queryCache:(struct __CFDictionary { }*)arg7;
- (id)initWithDatabase:(struct CalDatabase { }*)arg1 titleString:(id)arg2 locationString:(id)arg3 descriptionString:(id)arg4 participantString:(id)arg5 queryCache:(struct __CFDictionary { }*)arg6;
- (void)performWithBlock:(id /* block */)arg1;
- (void)startSearching;
- (void)stopSearching;

@end
