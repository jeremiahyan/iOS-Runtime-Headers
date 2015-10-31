/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    BOOL _showsPlane;
    NSMutableArray *_viewAddedBlock;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (readonly) struct { double x1; double x2; } currentLocation;
@property (nonatomic) float currentProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { double x1; double x2; } endLocation;
@property (readonly) unsigned int hash;
@property (nonatomic) struct { double x1; double x2; } startLocation;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (retain) NSMutableArray *viewAddedBlock;

+ (id)defaultAnotation;
+ (Class)layerClass;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (struct { double x1; double x2; })currentLocation;
- (float)currentProgress;
- (void)didMoveToSuperview;
- (struct { double x1; double x2; })endLocation;
- (id)init;
- (void)notifyWhenIsVisibleWithBlock:(id /* block */)arg1;
- (id)planeLayer;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setEndLocation:(struct { double x1; double x2; })arg1;
- (void)setPlaneImage:(id)arg1;
- (void)setShowsPlane:(BOOL)arg1;
- (void)setStartLatitude:(float)arg1 startLongitude:(float)arg2 endLatitude:(float)arg3 endLongitude:(float)arg4;
- (void)setStartLocation:(struct { double x1; double x2; })arg1;
- (void)setViewAddedBlock:(id)arg1;
- (struct { double x1; double x2; })startLocation;
- (id)viewAddedBlock;

@end
