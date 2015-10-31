/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexQuery : NSObject <MDSearchQueryDelegate, NSProgressReporting> {
    unsigned int _cancellableQuery;
    NSProgress *_internalProgress;
    NSLock *_lock;
    NSPredicate *_predicate;
    NSProgress *_progress;
    MDSearchQuery *_query;
    NSString *_queryString;
    NSMutableArray *_resultsBlocks;
    MFFuture *_resultsFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly, copy) NSString *queryString;
@property (readonly) Class superclass;

+ (id)_modifierStringFromModifiers:(unsigned int)arg1;
+ (id)_operandStringForOperand:(int)arg1;
+ (id)_queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned int)arg3;
+ (id)queryStringByJoiningQueries:(id)arg1 withOperand:(int)arg2;
+ (id)queryStringForPhrase:(id)arg1 attributes:(id)arg2 modifiers:(unsigned int)arg3;
+ (id)queryWithPredicate:(id)arg1 options:(id)arg2;
+ (id)queryWithString:(id)arg1 options:(id)arg2;
+ (id)searchWordsForPhrase:(id)arg1;

- (void)_commonInitWithOptions:(id)arg1;
- (void)_completed;
- (void)_failedWithError:(id)arg1;
- (void)_foundItems:(id)arg1;
- (void)_performClientWork:(id /* block */)arg1;
- (void)_removeAllResultsBlocks;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addResultsBlock:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPredicate:(id)arg1 options:(id)arg2;
- (id)initWithQueryString:(id)arg1 options:(id)arg2;
- (id)predicate;
- (id)progress;
- (id)queryString;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned int)arg2;
- (void)start;
- (id)truncatedDescription;

@end
