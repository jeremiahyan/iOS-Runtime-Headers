/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {
    SKUIGiftAmountControl *_amountControl;
}

@property (nonatomic, readonly) UIControl *amountControl;
@property (nonatomic, readonly) int selectedAmount;
@property (nonatomic, readonly) NSString *selectedAmountString;

- (void).cxx_destruct;
- (id)amountControl;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (int)selectedAmount;
- (id)selectedAmountString;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
