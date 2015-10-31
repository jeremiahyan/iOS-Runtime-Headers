/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandLogChannel : NSObject {
    BOOL cachingEnabled;
    <PLBasebandLogChannelDelegate> *delegate;
    struct __CFMessagePort { } *localPort;
    struct __CFMessagePort { } *remotePort;
}

@property (nonatomic) BOOL cachingEnabled;
@property (nonatomic) <PLBasebandLogChannelDelegate> *delegate;
@property (nonatomic, readonly) BOOL isValid;

- (BOOL)cachingEnabled;
- (void)close;
- (void)commitHardwareLogs;
- (void)connectionInvalidated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableLogCodes:(id)arg1 andEvents:(id)arg2 andExtraCode:(id)arg3;
- (void)flush;
- (id)init;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)openWithConnection:(id)arg1;
- (void)sendObjectOverRemotePort:(id)arg1;
- (void)setCachingEnabled:(BOOL)arg1;
- (void)setChannelTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHardwareLoggingLevel:(unsigned int)arg1 withWindowSize:(unsigned int)arg2;

@end
