/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    double _absDepartureTime;
    struct { 
        unsigned int absDepartureTime : 1; 
    } _has;
    NSString *_vehicleNumber;
}

@property (nonatomic) double absDepartureTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAbsDepartureTime;
@property (nonatomic, readonly) BOOL hasVehicleNumber;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vehicleIdentifier;
@property (nonatomic, retain) NSString *vehicleNumber;

- (double)absDepartureTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbsDepartureTime;
- (BOOL)hasVehicleNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAbsDepartureTime:(double)arg1;
- (void)setHasAbsDepartureTime:(BOOL)arg1;
- (void)setVehicleNumber:(id)arg1;
- (id)vehicleIdentifier;
- (id)vehicleNumber;
- (void)writeTo:(id)arg1;

@end
