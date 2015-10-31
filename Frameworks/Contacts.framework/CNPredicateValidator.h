/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {
    NSSet *_allowedKeysSet;
    NSError *_error;
    NSPredicate *_predicate;
    NSMutableSet *_usedKeysSet;
    BOOL _validated;
}

@property (nonatomic, retain) NSArray *allowedKeys;
@property (nonatomic, retain) NSSet *allowedKeysSet;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSArray *usedKeys;
@property (nonatomic, retain) NSMutableSet *usedKeysSet;
@property (nonatomic) BOOL validated;

- (id)allowedKeys;
- (id)allowedKeysSet;
- (void)dealloc;
- (id)error;
- (id)predicate;
- (void)resetUsedKeys;
- (void)setAllowedKeys:(id)arg1;
- (void)setAllowedKeysSet:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setUsedKeysSet:(id)arg1;
- (void)setValidated:(BOOL)arg1;
- (id)usedKeys;
- (id)usedKeysSet;
- (BOOL)validateWithError:(id*)arg1;
- (BOOL)validated;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
