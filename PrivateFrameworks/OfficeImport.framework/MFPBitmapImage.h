/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPBitmapImage : MFPImage {
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize { 
        float width; 
        float height; 
    } mPixelSize;
    struct CGSize { 
        float width; 
        float height; 
    } mPointSize;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithBitmapData:(id)arg1;
- (id)phoneImage;
- (struct CGSize { float x1; float x2; })pixelSize;
- (struct CGSize { float x1; float x2; })pointSize;

@end
