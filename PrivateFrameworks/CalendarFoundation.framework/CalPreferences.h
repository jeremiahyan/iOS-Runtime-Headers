/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalPreferences : NSObject {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}

- (void).cxx_destruct;
- (void)_preferenceChangedExternally:(id)arg1;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)dealloc;
- (BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;

@end
