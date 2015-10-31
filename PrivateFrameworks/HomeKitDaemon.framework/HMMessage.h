/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMMessage : NSObject {
    BOOL _entitledMessage;
    NSUUID *_identifier;
    BOOL _internalMessage;
    BOOL _locationAuthorizedMessage;
    NSDictionary *_messagePayload;
    NSString *_name;
    BOOL _remoteSource;
    id /* block */ _responseHandler;
    id _transport;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (getter=isAuthorizedForHomeDataAccess, nonatomic, readonly) BOOL authorizedForHomeDataAccess;
@property (getter=isAuthorizedForLocationAccess, nonatomic, readonly) BOOL authorizedForLocationAccess;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *effectiveLocationBundleIdentifier;
@property (getter=isEntitledForAPIAccess, nonatomic, readonly) BOOL entitledForAPIAccess;
@property (getter=isEntitledForBackgroundMode, nonatomic, readonly) BOOL entitledForBackgroundMode;
@property (getter=isEntitledForSPIAccess, nonatomic, readonly) BOOL entitledForSPIAccess;
@property (getter=isEntitledMessage, nonatomic, readonly) BOOL entitledMessage;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isInternalMessage, nonatomic, readonly) BOOL internalMessage;
@property (getter=isLocationAuthorizedMessage, nonatomic, readonly) BOOL locationAuthorizedMessage;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (nonatomic, readonly) NSString *name;
@property (getter=isRemoteSource, nonatomic, readonly) BOOL remoteSource;
@property (nonatomic, readonly) id /* block */ responseHandler;
@property (nonatomic, readonly) int sourcePid;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;
@property (nonatomic, readonly) id transport;

+ (id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 responseHandler:(id /* block */)arg5;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(id /* block */)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id /* block */)arg5;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (BOOL)_supportsFeature:(unsigned int)arg1 forCapabilitiesKey:(id)arg2;
- (id)applicationBundleIdentifier;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)companionAppBundleIdentifier;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)effectiveLocationBundleIdentifier;
- (id)errorForKey:(id)arg1;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id /* block */)arg5 remoteSource:(BOOL)arg6 internalMessage:(BOOL)arg7 entitledMessage:(BOOL)arg8 locationAuthorizedMessage:(BOOL)arg9;
- (BOOL)isAuthorizedForHomeDataAccess;
- (BOOL)isAuthorizedForLocationAccess;
- (BOOL)isEntitledForAPIAccess;
- (BOOL)isEntitledForBackgroundMode;
- (BOOL)isEntitledForSPIAccess;
- (BOOL)isEntitledMessage;
- (BOOL)isInternalMessage;
- (BOOL)isLocationAuthorizedMessage;
- (BOOL)isRemoteSource;
- (id)locationForKey:(id)arg1;
- (id)messagePayload;
- (id)name;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateForKey:(id)arg1;
- (id)proxyConnection;
- (id /* block */)responseHandler;
- (int)sourcePid;
- (id)stringForKey:(id)arg1;
- (BOOL)supportsRequestedFeature:(unsigned int)arg1;
- (BOOL)supportsRequiredFeature:(unsigned int)arg1;
- (id)teamIdentifier;
- (id)timeZoneForKey:(id)arg1;
- (id)transport;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromRemoteMessageForKey:(id)arg1;

@end
