/* Generated by RuntimeBrowser.
 */

@protocol CKSMSCompose <NSObject>

@required

+ (BOOL)acceptsMIMEType:(NSString *)arg1;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForVideo;

- (void)disableCameraAttachments;
- (void)forceCancelComposition;
- (void)forceMMS;
- (BOOL)insertAttachmentWithURL:(NSURL *)arg1 andDescription:(NSString *)arg2;
- (BOOL)insertData:(NSData *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3;
- (BOOL)insertFilename:(NSString *)arg1 MIMEType:(NSString *)arg2 exportedFilename:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)setPendingAddresses:(NSArray *)arg1;
- (void)setText:(NSString *)arg1 subject:(NSString *)arg2 addresses:(NSArray *)arg3;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setUICustomizationData:(NSData *)arg1;

@end
