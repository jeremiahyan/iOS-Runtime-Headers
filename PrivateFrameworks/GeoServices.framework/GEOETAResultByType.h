/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying> {
    unsigned int _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int travelTimeBestEstimate : 1; 
    } _has;
    unsigned int _historicTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) int status;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeBestEstimate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (BOOL)hasDistance;
- (BOOL)hasHistoricTravelTime;
- (BOOL)hasStatus;
- (BOOL)hasTransportType;
- (BOOL)hasTravelTimeBestEstimate;
- (unsigned int)hash;
- (unsigned int)historicTravelTime;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)setHasHistoricTravelTime:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasTravelTimeBestEstimate:(BOOL)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (int)status;
- (int)transportType;
- (unsigned int)travelTimeBestEstimate;
- (void)writeTo:(id)arg1;

@end
