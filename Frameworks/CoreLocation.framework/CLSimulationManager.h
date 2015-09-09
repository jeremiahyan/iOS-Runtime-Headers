/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLSimulationManager : NSObject {
    int _locationDeliveryBehavior;
    double _locationDistance;
    double _locationInterval;
    int _locationRepeatBehavior;
    double _locationSpeed;
}

@property (nonatomic) int locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) int locationRepeatBehavior;
@property (nonatomic) double locationSpeed;

- (void)appendSimulatedLocation:(id)arg1;
- (id)availableScenarios;
- (void)clearSimulatedCells;
- (void)clearSimulatedLocations;
- (void)flush;
- (id)init;
- (void)loadScenarioFromURL:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (int)locationDeliveryBehavior;
- (double)locationDistance;
- (double)locationInterval;
- (int)locationRepeatBehavior;
- (double)locationSpeed;
- (id)scenariosPath;
- (void)selectScenario:(id)arg1;
- (void)setLocationDeliveryBehavior:(int)arg1;
- (void)setLocationDistance:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setLocationRepeatBehavior:(int)arg1;
- (void)setLocationSpeed:(double)arg1;
- (void)setSimulatedCell:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(BOOL)arg1;
- (void)setSimulatedWifiPower:(BOOL)arg1;
- (void)setWifiScanResults:(id)arg1;
- (void)startCellSimulation;
- (void)startLocationSimulation;
- (void)startWifiSimulation;
- (void)stopCellSimulation;
- (void)stopLocationSimulation;
- (void)stopWifiSimulation;

@end
