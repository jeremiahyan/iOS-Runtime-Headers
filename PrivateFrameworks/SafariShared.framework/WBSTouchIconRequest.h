/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSTouchIconRequest : WBSSiteMetadataRequest

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } maximumIconSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } minimumIconSize;
@property (nonatomic, readonly, copy) NSString *monogramTitle;

+ (id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { float x1; float x2; })arg3 maximumIconSize:(struct CGSize { float x1; float x2; })arg4;

- (id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(struct CGSize { float x1; float x2; })arg3 maximumIconSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })maximumIconSize;
- (struct CGSize { float x1; float x2; })minimumIconSize;
- (id)monogramTitle;

@end
