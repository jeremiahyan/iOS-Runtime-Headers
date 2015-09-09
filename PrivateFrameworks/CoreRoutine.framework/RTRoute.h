/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoute : NSObject <NSSecureCoding> {
    NSUUID *_uuid;
    NSArray *_waypoints;
    NSData *_zilchPoints;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *waypoints;
@property (nonatomic, readonly) NSData *zilchPoints;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 andZilchPoints:(id)arg2;
- (void)updateWithNewZilchPoints:(id)arg1;
- (id)uuid;
- (id)waypoints;
- (id)zilchPoints;

@end