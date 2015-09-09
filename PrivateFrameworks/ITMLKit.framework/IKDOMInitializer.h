/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMInitializer : NSObject {
    NSMutableDictionary *_nodeDeregisterObservers;
}

@property (nonatomic, retain) NSMutableDictionary *nodeDeregisterObservers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addNodeDeregisterObserverWithName:(id)arg1 observer:(id /* block */)arg2;
- (id)init;
- (id)nodeDeregisterObservers;
- (void)removeNodeDeregisterObserverWithName:(id)arg1;
- (void)setNodeDeregisterObservers:(id)arg1;

@end
