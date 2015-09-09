/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionMove : SCNAction {
    struct SCNCActionMove { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; float x7; float x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; int x14; float x15; float x16; float x17; float x18; float x19; BOOL x20; BOOL x21; } *_mycaction;
}

+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
