/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic, copy) NSDate *callTime;
@property (nonatomic, retain) SAPersonAttribute *contact;
@property (nonatomic, copy) NSNumber *isNew;

- (id)callTime;
- (id)contact;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)init;
- (id)isNew;
- (void)setCallTime:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setIsNew:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
