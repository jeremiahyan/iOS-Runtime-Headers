/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADToPointPathElement : OADPathElement {
    BOOL mRelative;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mToPoint;
}

- (id).cxx_construct;
- (id)initWithToPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg1;
- (BOOL)relative;
- (void)setRelative:(BOOL)arg1;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })toPoint;

@end
