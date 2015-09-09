/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    NSNumber *inputOrigI;
    NSNumber *inputOrigQ;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputOrigI;
@property (nonatomic, retain) NSNumber *inputOrigQ;
@property (nonatomic, retain) NSNumber *inputStrength;
@property (nonatomic, retain) NSNumber *inputWarmth;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (BOOL)_isIdentity;
- (id)_kernel;
- (id)_outputProperties;
- (id)inputImage;
- (id)inputOrigI;
- (id)inputOrigQ;
- (id)inputStrength;
- (id)inputWarmth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputOrigI:(id)arg1;
- (void)setInputOrigQ:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWarmth:(id)arg1;

@end
