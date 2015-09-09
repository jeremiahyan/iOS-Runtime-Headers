/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDCallout2Path : GQDPath {
    double mCornerRadius;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mTailAtCenter;
    struct CGPoint { 
        float x; 
        float y; 
    } mTailPosition;
    double mTailSize;
}

- (id).cxx_construct;
- (double)cornerRadius;
- (struct CGPath { }*)createBezierPath;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)tailAtCenter;
- (struct CGPoint { float x1; float x2; })tailCenter;
- (struct CGPoint { float x1; float x2; })tailPosition;
- (double)tailSize;

@end
