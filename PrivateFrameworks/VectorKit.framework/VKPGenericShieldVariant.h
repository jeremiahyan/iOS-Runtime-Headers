/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldVariant : PBCodable <NSCopying> {
    NSString *_fontName;
    float _fontSize;
    struct { 
        unsigned int fontSize : 1; 
        unsigned int leftCapWidth : 1; 
        unsigned int leftPadding : 1; 
        unsigned int lineSpacing : 1; 
        unsigned int numberOfLines : 1; 
        unsigned int rightCapWidth : 1; 
        unsigned int rightPadding : 1; 
        unsigned int textBaseline : 1; 
    } _has;
    struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseline;
}

@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic, readonly) BOOL hasFontName;
@property (nonatomic) BOOL hasFontSize;
@property (nonatomic) BOOL hasLeftCapWidth;
@property (nonatomic) BOOL hasLeftPadding;
@property (nonatomic) BOOL hasLineSpacing;
@property (nonatomic) BOOL hasNumberOfLines;
@property (nonatomic) BOOL hasRightCapWidth;
@property (nonatomic) BOOL hasRightPadding;
@property (nonatomic) BOOL hasTextBaseline;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*layers;
@property (nonatomic, readonly) unsigned int layersCount;
@property (nonatomic) float leftCapWidth;
@property (nonatomic) float leftPadding;
@property (nonatomic) float lineSpacing;
@property (nonatomic) unsigned int numberOfLines;
@property (nonatomic) float rightCapWidth;
@property (nonatomic) float rightPadding;
@property (nonatomic) float textBaseline;

- (struct CGSize { float x1; float x2; })_imageSizeWithTextureAtlases:(id)arg1;
- (void)addLayer:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontName;
- (float)fontSize;
- (BOOL)hasFontName;
- (BOOL)hasFontSize;
- (BOOL)hasLeftCapWidth;
- (BOOL)hasLeftPadding;
- (BOOL)hasLineSpacing;
- (BOOL)hasNumberOfLines;
- (BOOL)hasRightCapWidth;
- (BOOL)hasRightPadding;
- (BOOL)hasTextBaseline;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (unsigned int)layersCount;
- (float)leftCapWidth;
- (float)leftPadding;
- (float)lineSpacing;
- (void)mergeFrom:(id)arg1;
- (struct CGImage { }*)newImageWithBackgroundColor:(struct CGColor { }*)arg1 borderColor:(struct CGColor { }*)arg2 textureAtlases:(id)arg3 contentScale:(float)arg4;
- (unsigned int)numberOfLines;
- (BOOL)readFrom:(id)arg1;
- (float)rightCapWidth;
- (float)rightPadding;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasFontSize:(BOOL)arg1;
- (void)setHasLeftCapWidth:(BOOL)arg1;
- (void)setHasLeftPadding:(BOOL)arg1;
- (void)setHasLineSpacing:(BOOL)arg1;
- (void)setHasNumberOfLines:(BOOL)arg1;
- (void)setHasRightCapWidth:(BOOL)arg1;
- (void)setHasRightPadding:(BOOL)arg1;
- (void)setHasTextBaseline:(BOOL)arg1;
- (void)setLayers:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned int)arg2;
- (void)setLeftCapWidth:(float)arg1;
- (void)setLeftPadding:(float)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (void)setRightCapWidth:(float)arg1;
- (void)setRightPadding:(float)arg1;
- (void)setTextBaseline:(float)arg1;
- (float)textBaseline;
- (void)writeTo:(id)arg1;

@end
