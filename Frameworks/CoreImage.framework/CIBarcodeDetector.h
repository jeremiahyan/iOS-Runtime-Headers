/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBarcodeDetector : CIDetector {
    float _height;
    float _width;
    CIContext *context;
    NSMutableDictionary *featureOptions;
}

@property (nonatomic, retain) CIContext *context;

- (id)context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (void)setContext:(id)arg1;

@end
