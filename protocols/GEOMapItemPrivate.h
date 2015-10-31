/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItemPrivate <GEOMapItem>

@required

- (BOOL)_acceptsApplePay;
- (NSArray *)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (double)_areaInMeters;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (GEOMapItemPlaceAttribution *)_attribution;
- (GEOPDBusinessClaim *)_businessClaim;
- (NSString *)_businessURL;
- (GEOMapItemClientAttributes *)_clientAttributes;
- (unsigned long long)_customIconID;
- (NSString *)_disambiguationName;
- (GEOMapItemAttribution *)_encyclopedicAttribution;
- (NSArray *)_factoids;
- (GEOPDFlyover *)_flyover;
- (NSString *)_flyoverAnnouncementMessage;
- (BOOL)_goodForKids;
- (BOOL)_hasAcceptsApplePayAmenity;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasAreaInMeters;
- (BOOL)_hasBusinessClaim;
- (BOOL)_hasCurrentOperatingHours;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasFlyover;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPairOfFactoids;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasTelephone;
- (BOOL)_hasTextBlock;
- (BOOL)_hasTransit;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (BOOL)_hasUserRatingScore;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (<GEOMapItemPrivate> *)_mapItemByStrippingOptionalData;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned int)_openingHoursOptions;
- (NSArray *)_operatingHours;
- (NSArray *)_photos;
- (GEOMapItemPhotosAttribution *)_photosAttribution;
- (GEOPlace *)_place;
- (GEOPDPlace *)_placeData;
- (NSData *)_placeDataAsData;
- (int)_placeType;
- (NSString *)_poiSurveyURLString;
- (unsigned int)_priceRange;
- (NSURL *)_providerURL;
- (int)_recommendedTransportType;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (NSString *)_resultSnippetLocationString;
- (NSArray *)_reviews;
- (GEOMapItemReviewsAttribution *)_reviewsAttribution;
- (NSArray *)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
- (GEOFeatureStyleAttributes *)_styleAttributes;
- (BOOL)_takesReservations;
- (NSString *)_telephone;
- (NSString *)_textBlockText;
- (NSString *)_textBlockTitle;
- (<GEOMapItemTransitAttribution> *)_transitAttribution;
- (<GEOMapItemTransitInfo> *)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (NSString *)_vendorID;
- (NSURL *)_webURL;

@end
