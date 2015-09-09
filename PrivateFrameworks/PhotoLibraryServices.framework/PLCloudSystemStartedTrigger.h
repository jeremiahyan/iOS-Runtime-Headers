/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSystemStartedTrigger : PLCloudTrigger {
    BOOL _activated;
    PLCloudPhotoLibraryManager *_cloudLibraryManager;
}

@property (nonatomic, readonly, retain) PLCloudPhotoLibraryManager *cloudLibraryManager;

+ (id)sharedInstance;
+ (void)triggerWithCloudLibraryManager:(id)arg1;

- (void)activate;
- (id)cloudLibraryManager;
- (void)setCloudLibraryManager:(id)arg1;
- (void)start;

@end
