/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRegion : PBCodable <NSCopying> {
    double _eastLng;
    struct { 
        unsigned int eastLng : 1; 
        unsigned int northLat : 1; 
        unsigned int southLat : 1; 
        unsigned int westLng : 1; 
    } _has;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
}

@property (nonatomic, readonly) double centerLat;
@property (nonatomic, readonly) double centerLng;
@property (nonatomic) double eastLng;
@property (nonatomic) BOOL hasEastLng;
@property (nonatomic) BOOL hasNorthLat;
@property (nonatomic) BOOL hasSouthLat;
@property (nonatomic) BOOL hasWestLng;
@property (nonatomic) double northLat;
@property (nonatomic) double southLat;
@property (nonatomic, readonly) double spanLat;
@property (nonatomic, readonly) double spanLng;
@property (nonatomic, retain) NSMutableArray *vertexs;
@property (nonatomic) double westLng;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)addVertex:(id)arg1;
- (double)centerLat;
- (double)centerLng;
- (void)clearVertexs;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)containsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eastLng;
- (BOOL)hasEastLng;
- (BOOL)hasNorthLat;
- (BOOL)hasSouthLat;
- (BOOL)hasWestLng;
- (unsigned int)hash;
- (id)initWithCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRadialPlace:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)northLat;
- (BOOL)readFrom:(id)arg1;
- (void)setEastLng:(double)arg1;
- (void)setHasEastLng:(BOOL)arg1;
- (void)setHasNorthLat:(BOOL)arg1;
- (void)setHasSouthLat:(BOOL)arg1;
- (void)setHasWestLng:(BOOL)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNorthLat:(double)arg1;
- (void)setSouthLat:(double)arg1;
- (void)setVertexs:(id)arg1;
- (void)setWestLng:(double)arg1;
- (double)southLat;
- (double)spanLat;
- (double)spanLng;
- (id)vertexAtIndex:(unsigned int)arg1;
- (id)vertexs;
- (unsigned int)vertexsCount;
- (double)westLng;
- (void)writeTo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)_initWithCLRegion:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_mapRegionEnclosingAnnotations:(id)arg1;
+ (id)_mapkit_mapRegionForCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_mapkit_mapRegionForGEOCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_mapkit_mapRegionForLatitude:(double)arg1 longitude:(double)arg2 latSpan:(double)arg3 longSpan:(double)arg4;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (BOOL)containsLocationWithAccuracy:(id)arg1;

@end
