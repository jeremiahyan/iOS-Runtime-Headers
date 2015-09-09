/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKPersonHeightFormatter : NSObject {
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)_formattedValueForCentimeters:(double)arg1;
- (id)_formattedValueForFeet:(double)arg1;
- (id)_formattedValueForInches:(double)arg1;
- (void)_localeChanged:(id)arg1;
- (BOOL)_usesImperialUnits;
- (double)centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (void)dealloc;
- (void)getFeet:(double*)arg1 inches:(double*)arg2 fromCentimeters:(double)arg3;
- (id)init;
- (id)stringFromHeightInCentimeters:(id)arg1;

@end
