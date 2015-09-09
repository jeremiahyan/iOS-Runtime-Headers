/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAAction : SADomainObject

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, retain) SAHAAttributeValue *value;

+ (id)action;
+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)attribute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActionType:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setValue:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)value;

@end
