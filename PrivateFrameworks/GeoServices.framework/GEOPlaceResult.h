/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceResult : PBCodable <NSCopying> {
    NSMutableArray *_additionalPlaces;
    int _cacheControl;
    NSMutableArray *_disambiguationLabels;
    unsigned long long _flyoverTourMuid;
    struct { 
        unsigned int flyoverTourMuid : 1; 
        unsigned int cacheControl : 1; 
        unsigned int travelDistance : 1; 
        unsigned int travelTime : 1; 
    } _has;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
}

@property (nonatomic, retain) NSMutableArray *additionalPlaces;
@property (nonatomic) int cacheControl;
@property (nonatomic, retain) NSMutableArray *disambiguationLabels;
@property (nonatomic) unsigned long long flyoverTourMuid;
@property (nonatomic) BOOL hasCacheControl;
@property (nonatomic) BOOL hasFlyoverTourMuid;
@property (nonatomic, readonly) BOOL hasQuad;
@property (nonatomic, readonly) BOOL hasRevgeoRequestTemplate;
@property (nonatomic, readonly) BOOL hasSuggestedQuery;
@property (nonatomic, readonly) BOOL hasTokenEntity;
@property (nonatomic) BOOL hasTravelDistance;
@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic, retain) NSMutableArray *matchedTokens;
@property (nonatomic, retain) NSMutableArray *namedFeatures;
@property (nonatomic, retain) GEOPlace *place;
@property (nonatomic, retain) NSString *quad;
@property (nonatomic, retain) GEOPlaceSearchRequest *revgeoRequestTemplate;
@property (nonatomic, retain) NSString *suggestedQuery;
@property (nonatomic, retain) GEOAddress *tokenEntity;
@property (nonatomic) unsigned int travelDistance;
@property (nonatomic) unsigned int travelTime;
@property (nonatomic, retain) NSMutableArray *unmatchedStrings;

- (void)addAdditionalPlace:(id)arg1;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addMatchedToken:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (id)additionalPlaces;
- (unsigned int)additionalPlacesCount;
- (int)cacheControl;
- (void)clearAdditionalPlaces;
- (void)clearDisambiguationLabels;
- (void)clearMatchedTokens;
- (void)clearNamedFeatures;
- (void)clearUnmatchedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned int)arg1;
- (id)disambiguationLabels;
- (unsigned int)disambiguationLabelsCount;
- (unsigned long long)flyoverTourMuid;
- (id)geoMapItem;
- (BOOL)hasCacheControl;
- (BOOL)hasFlyoverTourMuid;
- (BOOL)hasQuad;
- (BOOL)hasRevgeoRequestTemplate;
- (BOOL)hasSuggestedQuery;
- (BOOL)hasTokenEntity;
- (BOOL)hasTravelDistance;
- (BOOL)hasTravelTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)matchedTokenAtIndex:(unsigned int)arg1;
- (id)matchedTokens;
- (unsigned int)matchedTokensCount;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (id)namedFeatures;
- (unsigned int)namedFeaturesCount;
- (id)place;
- (id)quad;
- (BOOL)readFrom:(id)arg1;
- (id)revgeoRequestTemplate;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setCacheControl:(int)arg1;
- (void)setDisambiguationLabels:(id)arg1;
- (void)setFlyoverTourMuid:(unsigned long long)arg1;
- (void)setHasCacheControl:(BOOL)arg1;
- (void)setHasFlyoverTourMuid:(BOOL)arg1;
- (void)setHasTravelDistance:(BOOL)arg1;
- (void)setHasTravelTime:(BOOL)arg1;
- (void)setMatchedTokens:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setRevgeoRequestTemplate:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setTravelDistance:(unsigned int)arg1;
- (void)setTravelTime:(unsigned int)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (id)suggestedQuery;
- (id)tokenEntity;
- (unsigned int)travelDistance;
- (unsigned int)travelTime;
- (id)unmatchedStringAtIndex:(unsigned int)arg1;
- (id)unmatchedStrings;
- (unsigned int)unmatchedStringsCount;
- (void)writeTo:(id)arg1;

@end
