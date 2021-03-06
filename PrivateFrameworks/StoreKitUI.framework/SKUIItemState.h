/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemState : NSObject <NSCopying> {
    unsigned int _downloadContentFlags;
    NSString *_downloadPhase;
    float _downloadProgress;
    NSNumber *_itemIdentifier;
    unsigned int _libraryContentFlags;
    int _mediaCategory;
    unsigned int _state;
    SKUIStoreIdentifier *_storeIdentifier;
    NSString *_variantIdentifier;
}

@property (nonatomic, readonly) BOOL activeStateIsPreview;
@property (nonatomic, readonly) unsigned int allContentFlags;
@property (nonatomic) unsigned int downloadContentFlags;
@property (nonatomic, copy) NSString *downloadPhase;
@property (nonatomic) float downloadProgress;
@property (nonatomic, copy) NSNumber *itemIdentifier;
@property (nonatomic) unsigned int libraryContentFlags;
@property (nonatomic) int mediaCategory;
@property (nonatomic) unsigned int state;
@property (nonatomic, copy) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, copy) NSString *variantIdentifier;

- (void).cxx_destruct;
- (BOOL)activeStateIsPreview;
- (unsigned int)allContentFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)downloadContentFlags;
- (id)downloadPhase;
- (float)downloadProgress;
- (id)itemIdentifier;
- (unsigned int)libraryContentFlags;
- (int)mediaCategory;
- (void)setDownloadContentFlags:(unsigned int)arg1;
- (void)setDownloadPhase:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLibraryContentFlags:(unsigned int)arg1;
- (void)setMediaCategory:(int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (unsigned int)state;
- (id)storeIdentifier;
- (id)variantIdentifier;

@end
