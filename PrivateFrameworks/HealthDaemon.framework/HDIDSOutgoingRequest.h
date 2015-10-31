/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription> {
    NSData *_data;
    BOOL _doNotCompress;
    BOOL _forceLocalDelivery;
    NSString *_idsIdentifier;
    HDIDSMessageCenter *_messageCenter;
    unsigned short _messageID;
    id _pbRequest;
    NSDictionary *_persistentUserInfo;
    unsigned int _priority;
    BOOL _queueOnly1;
    double _responseTimeout;
    double _sendTimeout;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doNotCompress;
@property (nonatomic) BOOL forceLocalDelivery;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbRequest;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned int priority;
@property (nonatomic) BOOL queueOnly1;
@property (nonatomic) double responseTimeout;
@property (nonatomic) double sendTimeout;
@property (readonly) Class superclass;

+ (id)activationRequestWithRestore:(id)arg1 forStore:(id)arg2;
+ (id)changeRequestWithChanges:(id)arg1 status:(id)arg2 forStore:(id)arg3;
+ (id)requestWithMessageID:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (BOOL)doNotCompress;
- (BOOL)forceLocalDelivery;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbRequest;
- (id)persistentUserInfo;
- (unsigned int)priority;
- (BOOL)queueOnly1;
- (double)responseTimeout;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setDoNotCompress:(BOOL)arg1;
- (void)setForceLocalDelivery:(BOOL)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setQueueOnly1:(BOOL)arg1;
- (void)setResponseTimeout:(double)arg1;
- (void)setSendTimeout:(double)arg1;

@end
