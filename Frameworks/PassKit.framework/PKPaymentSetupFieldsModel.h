/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
}

+ (id)defaultPaymentSetupFields;
+ (id)fakePaymentSetupFields;

- (void)dealloc;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)arg1;
- (float)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2;
- (unsigned int)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned int)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (id)paymentSetupFields;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)submissionValuesForDestination:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1;

@end
