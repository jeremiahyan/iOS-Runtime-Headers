/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKApplicationProxy : NSObject {
    LSApplicationProxy *_lsProxy;
    NSDictionary *_metadata;
}

@property (nonatomic, readonly, retain) NSNumber *adamID;
@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, readonly, retain) NSString *bundleVersion;
@property (nonatomic, readonly, retain) NSNumber *externalVersion;
@property (getter=isGameCenterEnabled, nonatomic, readonly) BOOL gameCenterEnabled;
@property (getter=isInstalled, nonatomic, readonly) BOOL installed;
@property (nonatomic, retain) LSApplicationProxy *lsProxy;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly, retain) NSDate *purchaseDate;
@property (getter=isRestricted, nonatomic, readonly) BOOL restricted;

+ (id)metadataForBundleURL:(id)arg1;

- (id)adamID;
- (id)bundle;
- (id)bundleID;
- (id)bundleURL;
- (id)bundleVersion;
- (void)dealloc;
- (id)externalVersion;
- (id)initWithBundleID:(id)arg1;
- (id)initWithProxy:(id)arg1;
- (BOOL)isGameCenterEnabled;
- (BOOL)isInstalled;
- (BOOL)isRestricted;
- (id)lsProxy;
- (id)metadata;
- (id)purchaseDate;
- (void)setLsProxy:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
