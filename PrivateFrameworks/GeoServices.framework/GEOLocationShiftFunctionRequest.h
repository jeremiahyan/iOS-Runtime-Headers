/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftFunctionRequest : NSObject {
    GEOLocationShiftRequest *_locationShiftRequest;
    GEOPolyLocationShiftRequest *_polyLocationShiftRequest;
    unsigned short _providerID;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) unsigned short providerID;
@property (nonatomic, readonly) PBRequest *shiftRequest;

- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (unsigned short)providerID;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setProviderID:(unsigned short)arg1;
- (id)shiftRequest;

@end
