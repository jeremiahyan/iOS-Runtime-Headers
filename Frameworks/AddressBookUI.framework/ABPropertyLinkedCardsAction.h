/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyLinkedCardsAction : ABPropertyAction {
    ABContactViewController *_contactController;
    <ABContactViewControllerDelegate> *_contactDelegate;
    CNMutableContact *_linkedContact;
}

@property (retain) ABContactViewController *contactController;
@property <ABContactViewControllerDelegate> *contactDelegate;
@property (retain) CNMutableContact *linkedContact;

- (id)contactController;
- (id)contactDelegate;
- (void)dealloc;
- (id)linkedContact;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)setContactController:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setLinkedContact:(id)arg1;
- (void)setPreferredName;
- (void)setPreferredPhoto;

@end