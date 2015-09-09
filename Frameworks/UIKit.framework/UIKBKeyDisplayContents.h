/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyDisplayContents : NSObject {
    int _displayPathType;
    NSString *_displayString;
    NSString *_displayStringImage;
    UIKBKeyDisplayContents *_fallbackContents;
    BOOL _fillPath;
    BOOL _force1xImages;
    NSArray *_highlightedVariantsList;
    BOOL _isCustomGlyph;
    NSString *_secondaryDisplayString;
    NSString *_secondaryDisplayStringImage;
    BOOL _secondaryIsCustomGlyph;
    BOOL _stringKeycapOverImage;
    NSArray *_variantDisplayContents;
}

@property (nonatomic) int displayPathType;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) NSString *displayStringImage;
@property (nonatomic, retain) UIKBKeyDisplayContents *fallbackContents;
@property (nonatomic) BOOL fillPath;
@property (nonatomic) BOOL force1xImages;
@property (nonatomic, retain) NSArray *highlightedVariantsList;
@property (nonatomic) BOOL isCustomGlyph;
@property (nonatomic, retain) NSString *secondaryDisplayString;
@property (nonatomic, retain) NSString *secondaryDisplayStringImage;
@property (nonatomic) BOOL secondaryIsCustomGlyph;
@property (nonatomic) BOOL stringKeycapOverImage;
@property (nonatomic, retain) NSArray *variantDisplayContents;

+ (id)displayContents;

- (void)dealloc;
- (id)description;
- (int)displayPathType;
- (id)displayString;
- (id)displayStringImage;
- (id)fallbackContents;
- (BOOL)fillPath;
- (BOOL)force1xImages;
- (id)highlightedVariantsList;
- (BOOL)isCustomGlyph;
- (id)secondaryDisplayString;
- (id)secondaryDisplayStringImage;
- (BOOL)secondaryIsCustomGlyph;
- (void)setDisplayPathType:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayStringImage:(id)arg1;
- (void)setFallbackContents:(id)arg1;
- (void)setFillPath:(BOOL)arg1;
- (void)setForce1xImages:(BOOL)arg1;
- (void)setHighlightedVariantsList:(id)arg1;
- (void)setIsCustomGlyph:(BOOL)arg1;
- (void)setSecondaryDisplayString:(id)arg1;
- (void)setSecondaryDisplayStringImage:(id)arg1;
- (void)setSecondaryIsCustomGlyph:(BOOL)arg1;
- (void)setStringKeycapOverImage:(BOOL)arg1;
- (void)setVariantDisplayContents:(id)arg1;
- (BOOL)stringKeycapOverImage;
- (id)variantDisplayContents;

@end
