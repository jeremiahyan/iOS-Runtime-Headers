/* Generated by RuntimeBrowser.
 */

@protocol SPRemoteInterfaceProtocol <NSObject>

@required

- (void)applicationContentsDidReset:(NSString *)arg1;
- (void)applicationDidBecomeActive:(NSString *)arg1;
- (void)applicationDidFinishConnecting:(NSString *)arg1;
- (void)applicationDidReceiveLocalNotification:(NSData *)arg1 clientIdentifier:(NSString *)arg2;
- (void)applicationDidReceiveRemoteNotification:(NSDictionary *)arg1 clientIdentifier:(NSString *)arg2;
- (void)applicationDidTerminate:(NSString *)arg1;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(NSString *)arg1;
- (void)dataInterfaceDidBecomeActive:(NSString *)arg1;
- (void)dataInterfaceWillResignActive:(NSString *)arg1;
- (void)preferredContentSizeCategory:(NSString *)arg1;
- (void)receiveData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;
- (void)receiveProtoData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;

@optional

- (void)extensionDidBeginUsing;
- (void)extensionWillEndUsing;
- (void)receiveNativeComplicationRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)replyTimingData:(NSDictionary *)arg1;

@end
