/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic, readonly, retain) NSDictionary *request;

- (int)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithRequest:(id)arg1 withHandler:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)request;
- (void)sendResponse:(id)arg1;

@end
