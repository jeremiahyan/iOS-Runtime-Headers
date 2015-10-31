/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSimpleTileRequesterScheduler : NSObject {
    NSMutableArray *_inProgress;
    NSMutableArray *_requesters;
}

+ (id)sharedScheduler;

- (void)addTileRequester:(id)arg1;
- (void)dealloc;
- (void)operationDidStop:(id)arg1;
- (void)removeTileRequester:(id)arg1;
- (void)sendNextRequestIfNecessary;

@end
