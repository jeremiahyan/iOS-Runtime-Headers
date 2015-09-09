/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUIDSUtilities : NSObject <IDSIDQueryControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_IDSFormattedDestinationsForPerson:(id)arg1;
+ (BOOL)_anyStatusInResultDictionary:(id)arg1 equalsIDStatus:(int)arg2;
+ (BOOL)_availabilityForDestinations:(id)arg1 serviceType:(unsigned int)arg2;
+ (BOOL)_availabilityForPerson:(id)arg1 serviceType:(unsigned int)arg2;
+ (BOOL)_refreshAvailabilityForDestinations:(id)arg1 serviceType:(unsigned int)arg2 userInfo:(id)arg3;
+ (BOOL)_refreshAvailabilityForPerson:(id)arg1 serviceType:(unsigned int)arg2;
+ (id)idsServiceForType:(unsigned int)arg1;
+ (void)initialize;
+ (BOOL)isService:(unsigned int)arg1 availableForABRecordID:(int)arg2;
+ (BOOL)isService:(unsigned int)arg1 availableForDestinations:(id)arg2;
+ (id)personForABRecordID:(int)arg1;
+ (BOOL)refreshAvailabilityForABRecordID:(int)arg1 serviceType:(unsigned int)arg2;

@end
