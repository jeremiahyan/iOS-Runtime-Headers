/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKEmergencyContact : NSObject <NSCopying, NSSecureCoding> {
    NSString *_name;
    NSNumber *_nameRecordID;
    NSString *_phoneNumber;
    NSNumber *_phoneNumberPropertyID;
    NSString *_relationship;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *nameRecordID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSNumber *phoneNumberPropertyID;
@property (nonatomic, retain) NSString *relationship;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_migrateToSchemaVersion:(int)arg1 withAddressBook:(void*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)nameRecordID;
- (id)phoneNumber;
- (id)phoneNumberPropertyID;
- (id)relationship;
- (void)setName:(id)arg1;
- (void)setNameRecordID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberPropertyID:(id)arg1;
- (void)setRelationship:(id)arg1;

@end
