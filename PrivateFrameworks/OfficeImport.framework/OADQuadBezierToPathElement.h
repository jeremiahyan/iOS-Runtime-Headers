/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADQuadBezierToPathElement : OADPathElement 
{
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mControlPoint;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            NSInteger value; 
        } y; 
    } mToPoint;
}


- (id)initWithControlPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg1 toPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })arg2;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })controlPoint;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; NSInteger x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; NSInteger x_2_1_2; } x2; })toPoint;

@end