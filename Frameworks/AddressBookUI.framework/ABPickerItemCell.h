/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerItemCell : UITableViewCell {
    CNContactStyle *_contactStyle;
    UITextField *_textField;
}

@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic, retain) UITextField *textField;

- (void)beginEditing;
- (id)contactStyle;
- (void)dealloc;
- (void)endEditing;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContactStyle:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
