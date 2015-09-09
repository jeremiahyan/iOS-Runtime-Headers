/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSXPCConnection *_connection;
    <CLLocationManagerDelegate> *_delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _updating;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updating;

- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateLocations:(id)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (id)locationManagerRoutine;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)updating;

@end
