/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
    NSString *_artKey;
    struct { 
        unsigned int isDiscarded : 1; 
        unsigned int useCount; 
    } _flags;
    NSArray *_images;
}

@property (nonatomic, readonly) NSString *artKey;
@property (nonatomic, retain) NSArray *images;

- (id)artKey;
- (BOOL)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (unsigned int)hash;
- (id)images;
- (id)initWithArtKey:(id)arg1;
- (BOOL)isContentDiscarded;
- (void)setImages:(id)arg1;

@end
