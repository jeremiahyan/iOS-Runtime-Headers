/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeIDSMessageInstance : NSObject {
    id /* block */ _retryAction;
    int _retryCount;
    double _retryInterval;
    NSNumber *_sentAbsoluteTime;
    unsigned short _typeID;
}

@property (nonatomic, copy) id /* block */ retryAction;
@property (nonatomic) int retryCount;
@property (nonatomic) double retryInterval;
@property (nonatomic, retain) NSNumber *sentAbsoluteTime;
@property (nonatomic) unsigned short typeID;

+ (id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(int)arg2 retryInterval:(double)arg3 withAction:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id /* block */)retryAction;
- (int)retryCount;
- (double)retryInterval;
- (id)sentAbsoluteTime;
- (void)setRetryAction:(id /* block */)arg1;
- (void)setRetryCount:(int)arg1;
- (void)setRetryInterval:(double)arg1;
- (void)setSentAbsoluteTime:(id)arg1;
- (void)setTypeID:(unsigned short)arg1;
- (unsigned short)typeID;

@end
