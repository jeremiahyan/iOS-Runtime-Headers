/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {
    NSUUID *_activeUserActivityUUID;
    BOOL _activityContinuationIsEnabled;
    NSXPCConnection *_connection;
    BOOL _connectionInitializationSucceeded;
    BOOL _needToSendInitialMessage;
    NSObject<OS_dispatch_queue> *_serverQ;
    BOOL _supportsActivityContinuation;
    NSMapTable *_userActivitiesByUUID;
}

@property (copy) NSUUID *activeUserActivityUUID;
@property (readonly) BOOL activityContinuationIsEnabled;
@property (readonly, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSObject<OS_dispatch_queue> *serverQ;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsActivityContinuation;
@property (retain) NSMapTable *userActivitiesByUUID;

+ (id)defaultManager;
+ (BOOL)shouldSupportActivityContinuation;
+ (BOOL)userActivityContinuationSupported;

- (id)_findUserActivityForUUID:(id)arg1;
- (id)activeUserActivityUUID;
- (BOOL)activityContinuationIsEnabled;
- (void)addUserActivity:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (id)createByDecodingUserActivity:(id)arg1;
- (void)dealloc;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (void)fetchUUID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(BOOL)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)sendInitialMessage;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(BOOL)arg2;
- (id)serverQ;
- (void)setActiveUserActivityUUID:(id)arg1;
- (void)setUserActivitiesByUUID:(id)arg1;
- (BOOL)supportsActivityContinuation;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)userActivitiesByUUID;
- (BOOL)userActivityIsActive:(id)arg1;

@end