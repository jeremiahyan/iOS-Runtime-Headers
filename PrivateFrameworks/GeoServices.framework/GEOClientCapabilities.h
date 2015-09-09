/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientCapabilities : PBCodable <NSCopying> {
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_hardwareModel;
    struct { 
        unsigned int maxManeuverTypeSupported : 1; 
        unsigned int internalInstall : 1; 
    } _has;
    BOOL _internalInstall;
    int _maxManeuverTypeSupported;
}

@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic, retain) NSString *hardwareModel;
@property (nonatomic, readonly) BOOL hasAppMajorVersion;
@property (nonatomic, readonly) BOOL hasAppMinorVersion;
@property (nonatomic, readonly) BOOL hasHardwareModel;
@property (nonatomic) BOOL hasInternalInstall;
@property (nonatomic) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic) BOOL internalInstall;
@property (nonatomic) int maxManeuverTypeSupported;

- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareModel;
- (BOOL)hasAppMajorVersion;
- (BOOL)hasAppMinorVersion;
- (BOOL)hasHardwareModel;
- (BOOL)hasInternalInstall;
- (BOOL)hasMaxManeuverTypeSupported;
- (unsigned int)hash;
- (BOOL)internalInstall;
- (BOOL)isEqual:(id)arg1;
- (int)maxManeuverTypeSupported;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasInternalInstall:(BOOL)arg1;
- (void)setHasMaxManeuverTypeSupported:(BOOL)arg1;
- (void)setInternalInstall:(BOOL)arg1;
- (void)setMaxManeuverTypeSupported:(int)arg1;
- (void)writeTo:(id)arg1;

@end
