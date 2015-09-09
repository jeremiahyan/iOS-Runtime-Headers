/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureCache : NSObject {
    unsigned int *alphaMap;
    struct CGSize { 
        float width; 
        float height; 
    } alphaMapSize;
    struct CGImage { } *collisionMask;
    int filteringMode;
    BOOL hasAlpha;
    BOOL isLoaded;
    BOOL isPOT;
    int lock;
    char *pixelData;
    struct CGSize { 
        float width; 
        float height; 
    } pixelSize;
    struct CGSize { 
        float width; 
        float height; 
    } size;
    int state;
    unsigned int texFormat;
    unsigned int texId;
    int texInternalFormat;
    unsigned int texType;
    int wrapMode;
}

@property (nonatomic) unsigned int*alphaMap;
@property (nonatomic) struct CGSize { float x1; float x2; } alphaMapSize;
@property (nonatomic) int filteringMode;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL isPOT;
@property (getter=getLock, nonatomic, readonly) int*lock;
@property (nonatomic) char *pixelData;
@property (nonatomic) struct CGSize { float x1; float x2; } pixelSize;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) int state;
@property (nonatomic) unsigned int texFormat;
@property (nonatomic) unsigned int texId;
@property (nonatomic) int texInternalFormat;
@property (nonatomic) unsigned int texType;
@property (nonatomic) int wrapMode;

- (id).cxx_construct;
- (unsigned int*)alphaMap;
- (struct CGSize { float x1; float x2; })alphaMapSize;
- (void)dealloc;
- (int)filteringMode;
- (int*)getLock;
- (BOOL)hasAlpha;
- (id)init;
- (BOOL)isLoaded;
- (BOOL)isPOT;
- (char *)pixelData;
- (struct CGSize { float x1; float x2; })pixelSize;
- (void)setAlphaMap:(unsigned int*)arg1;
- (void)setAlphaMapSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFilteringMode:(int)arg1;
- (void)setHasAlpha:(BOOL)arg1;
- (void)setIsLoaded:(BOOL)arg1;
- (void)setIsPOT:(BOOL)arg1;
- (void)setPixelData:(char *)arg1;
- (void)setPixelSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setState:(int)arg1;
- (void)setTexFormat:(unsigned int)arg1;
- (void)setTexId:(unsigned int)arg1;
- (void)setTexInternalFormat:(int)arg1;
- (void)setTexType:(unsigned int)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)state;
- (unsigned int)texFormat;
- (unsigned int)texId;
- (int)texInternalFormat;
- (unsigned int)texType;
- (int)wrapMode;

@end
