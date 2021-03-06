/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteDisplayHints : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _availablePrioritizations;
    struct { 
        unsigned int showTransitSchedules : 1; 
    } _has;
    BOOL _showTransitSchedules;
}

@property (nonatomic, readonly) int*availablePrioritizations;
@property (nonatomic, readonly) unsigned int availablePrioritizationsCount;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (nonatomic) BOOL showTransitSchedules;

- (void)addAvailablePrioritization:(int)arg1;
- (int)availablePrioritizationAtIndex:(unsigned int)arg1;
- (int*)availablePrioritizations;
- (unsigned int)availablePrioritizationsCount;
- (void)clearAvailablePrioritizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShowTransitSchedules;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailablePrioritizations:(int*)arg1 count:(unsigned int)arg2;
- (void)setHasShowTransitSchedules:(BOOL)arg1;
- (void)setShowTransitSchedules:(BOOL)arg1;
- (BOOL)showTransitSchedules;
- (void)writeTo:(id)arg1;

@end
