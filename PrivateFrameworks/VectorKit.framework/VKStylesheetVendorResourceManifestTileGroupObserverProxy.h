/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver> {
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKStylesheetVendor *_vendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithStylesheetVendor:(id)arg1 manifestConfiguration:(id)arg2;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;

@end
