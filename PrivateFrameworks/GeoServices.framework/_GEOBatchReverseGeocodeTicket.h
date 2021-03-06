/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchReverseGeocodeTicket : NSObject <GEOMapServiceTicket> {
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    GEOMapRegion *_resultBoundingRegion;
    BOOL _shiftLocationsIfNeeded;
    GEOMapServiceTraits *_traits;
}

@property (getter=isChainResultSet, nonatomic, readonly) BOOL chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(id /* block */)arg2 networkActivity:(id /* block */)arg3;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (BOOL)isChainResultSet;
- (BOOL)isEqualForHistoryToTicket:(id)arg1;
- (id)responseUserInfo;
- (id)resultBoundingRegion;
- (id)resultSectionHeader;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (id)traits;

@end
