/* Generated by RuntimeBrowser.
 */

@protocol GEODirectionServiceTicket <NSObject>

@required

- (void)cancel;
- (BOOL)isReroute;
- (GEOComposedRoute *)originalRoute;
- (GEODirectionsRouteRequest *)request;
- (NSDictionary *)responseUserInfo;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODirectionsRouteResponse *, NSError *, struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*, void*, id /* block */, void*, void, id /* block */, BOOL, void*

@end
