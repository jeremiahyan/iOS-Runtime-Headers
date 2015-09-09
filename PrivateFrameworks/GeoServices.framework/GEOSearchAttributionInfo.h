/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
    NSString *_displayName;
    NSString *_identifier;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    unsigned int _version;
    NSString *_webBaseActionURL;
}

@property (nonatomic, retain) NSArray *attributionApps;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned int requirementsMask;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSString *webBaseActionURL;

+ (BOOL)supportsSecureCoding;

- (void)addLogoPath:(id)arg1;
- (id)attributionApps;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (id)logoPathForScale:(float)arg1;
- (unsigned int)requirementsMask;
- (void)setAttributionApps:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequirementsMask:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWebBaseActionURL:(id)arg1;
- (id)snippetLogoPathForScale:(float)arg1;
- (BOOL)supportsActionURLs;
- (unsigned int)version;
- (id)webBaseActionURL;

@end
