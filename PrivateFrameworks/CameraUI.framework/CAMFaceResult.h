/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFaceResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    int _identifier;
    float _rollAngle;
    AVMetadataFaceObject *_underlyingFaceObject;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) float rollAngle;
@property (nonatomic, readonly) AVMetadataFaceObject *underlyingFaceObject;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)burstMetadataRepresentation;
- (id)description;
- (int)identifier;
- (id)initWithFaceObject:(id)arg1;
- (float)rollAngle;
- (id)underlyingFaceObject;

@end
