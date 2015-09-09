/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUState : NSObject <NSKeyedUnarchiverDelegate> {
    BOOL _autodownloadNeedsOneTimeRetry;
    SUDownload *_lastDownload;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastProductVersion;
    NSString *_lastReleaseType;
    SUDescriptor *_lastScannedDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
}

@property (nonatomic) BOOL autodownloadNeedsOneTimeRetry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) SUDownload *lastDownload;
@property (nonatomic, retain) NSString *lastProductBuild;
@property (nonatomic, retain) NSString *lastProductType;
@property (nonatomic, retain) NSString *lastProductVersion;
@property (nonatomic, retain) NSString *lastReleaseType;
@property (nonatomic, copy) SUDescriptor *lastScannedDescriptor;
@property (nonatomic, retain) NSDate *lastScannedDescriptorTime;
@property (nonatomic, retain) NSDate *scheduledAutodownloadPolicyChangeTime;
@property (nonatomic, retain) NSDate *scheduledAutodownloadWifiPeriodEndTime;
@property (nonatomic, retain) NSDate *scheduledManualDownloadWifiPeriodEndTime;
@property (readonly) Class superclass;

+ (id)currentState;
+ (id)statePath;

- (id)_stateAsDictionary;
- (BOOL)autodownloadNeedsOneTimeRetry;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)lastDownload;
- (id)lastProductBuild;
- (id)lastProductType;
- (id)lastProductVersion;
- (id)lastReleaseType;
- (id)lastScannedDescriptor;
- (id)lastScannedDescriptorTime;
- (void)load;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (void)save;
- (id)scheduledAutodownloadPolicyChangeTime;
- (id)scheduledAutodownloadWifiPeriodEndTime;
- (id)scheduledManualDownloadWifiPeriodEndTime;
- (void)setAutodownloadNeedsOneTimeRetry:(BOOL)arg1;
- (void)setLastDownload:(id)arg1;
- (void)setLastProductBuild:(id)arg1;
- (void)setLastProductType:(id)arg1;
- (void)setLastProductVersion:(id)arg1;
- (void)setLastReleaseType:(id)arg1;
- (void)setLastScannedDescriptor:(id)arg1;
- (void)setLastScannedDescriptorTime:(id)arg1;
- (void)setScheduledAutodownloadPolicyChangeTime:(id)arg1;
- (void)setScheduledAutodownloadWifiPeriodEndTime:(id)arg1;
- (void)setScheduledManualDownloadWifiPeriodEndTime:(id)arg1;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end
