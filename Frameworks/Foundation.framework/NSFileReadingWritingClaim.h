/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    int _readingLinkResolutionCount;
    NSFileAccessNode *_readingLocation;
    unsigned int _readingOptions;
    NSURL *_readingURL;
    BOOL _readingURLDidChange;
    NSFileAccessNode *_rootNode;
    NSFileAccessNode *_writingLocation;
    unsigned int _writingOptions;
    NSURL *_writingURL;
    BOOL _writingURLDidChange;
}

- (BOOL)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingMessageSender:(id /* block */)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id /* block */)arg3;
- (id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned int)arg3 writingURL:(id)arg4 options:(unsigned int)arg5 claimer:(id /* block */)arg6;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(id /* block */)arg1;

@end
