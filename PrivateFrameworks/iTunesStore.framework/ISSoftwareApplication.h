/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    BOOL _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    BOOL _hasMIDBasedSINF;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    BOOL _missingRequiredSINF;
    BOOL _placeholder;
    BOOL _profileValidated;
    NSDate *_receiptExpirationDate;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    unsigned int _vppStateFlags;
}

@property (nonatomic, retain) NSNumber *accountDSID;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (getter=isBeta, nonatomic) BOOL beta;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleShortVersionString;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, copy) NSString *containerPath;
@property (nonatomic, copy) SSItemContentRating *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifierForVendor;
@property (nonatomic, copy) NSNumber *familyAccountIdentifier;
@property (nonatomic) BOOL hasMIDBasedSINF;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSNumber *itemIdentifier;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic) BOOL missingRequiredSINF;
@property (getter=isPlaceholder, nonatomic) BOOL placeholder;
@property (getter=isProfileValidated, nonatomic) BOOL profileValidated;
@property (nonatomic, readonly) NSDate *receiptExpirationDate;
@property (nonatomic, copy) NSString *softwareType;
@property (nonatomic, retain) NSNumber *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorName;
@property (nonatomic, retain) NSNumber *versionIdentifier;
@property (nonatomic, copy) NSArray *versionOrdering;
@property (nonatomic, readonly) unsigned int vppStateFlags;

- (id)ITunesMetadataDictionary;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)accountDSID;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (id)containerPath;
- (id)contentRating;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifierForVendor;
- (id)familyAccountIdentifier;
- (BOOL)hasMIDBasedSINF;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isBeta;
- (BOOL)isPlaceholder;
- (BOOL)isProfileValidated;
- (id)itemIdentifier;
- (id)itemName;
- (BOOL)missingRequiredSINF;
- (id)receiptExpirationDate;
- (void)resetVPPStateFlags;
- (void)setAccountDSID:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBeta:(BOOL)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setDeviceIdentifierForVendor:(id)arg1;
- (void)setFamilyAccountIdentifier:(id)arg1;
- (void)setHasMIDBasedSINF:(BOOL)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setMissingRequiredSINF:(BOOL)arg1;
- (void)setPlaceholder:(BOOL)arg1;
- (void)setProfileValidated:(BOOL)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setVendorName:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setVersionOrdering:(id)arg1;
- (id)softwareType;
- (id)storeFrontIdentifier;
- (id)vendorName;
- (id)versionIdentifier;
- (id)versionOrdering;
- (unsigned int)vppStateFlags;

@end
