/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceStorage : NSObject

+ (BOOL)allowGeocode;
+ (BOOL)alwaysShowCancelledEvents;
+ (id)defaults;
+ (id)defaultsForTests;
+ (int)messagesToProcessImmediately;
+ (BOOL)onlyShowSignificantPseudoContacts;
+ (void)registerBlockOnSuggestionsSettingsChange:(id /* block */)arg1;
+ (void)removeDeprecatedDefaults;
+ (void)resetAllPreferences;
+ (void)setAllowGeocode:(BOOL)arg1;
+ (void)setAllowGeocodeForTests:(BOOL)arg1;
+ (void)setAlwaysShowCancelledEvents:(BOOL)arg1;
+ (void)setHidePastEventsForTests:(BOOL)arg1;
+ (void)setMessagesToHarvestImmediately:(int)arg1;
+ (void)setNLEventsEnabledForTests:(BOOL)arg1;
+ (void)setProactiveEnabledForTests:(BOOL)arg1;
+ (void)setShowCancelledEventsForTests:(BOOL)arg1;
+ (void)setShowContactsFoundInMail:(BOOL)arg1;
+ (void)setShowContactsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowEventsFoundInMail:(BOOL)arg1;
+ (void)setShowEventsFoundInMailForTests:(BOOL)arg1;
+ (void)setShowPastEvents:(BOOL)arg1;
+ (void)setSyncHistoryToCloud:(BOOL)arg1;
+ (void)setSyncHistoryToCloudForTests:(BOOL)arg1;
+ (BOOL)showContactsFoundInMail;
+ (BOOL)showEventsFoundInMail;
+ (BOOL)showNLEvents;
+ (BOOL)showPastEvents;
+ (BOOL)showSuggestionsCalendar;
+ (int)suggestionsLogLevel;
+ (BOOL)syncHistoryToCloud;
+ (void)updateBoolSettingKey:(id)arg1 withValue:(BOOL)arg2;

@end
