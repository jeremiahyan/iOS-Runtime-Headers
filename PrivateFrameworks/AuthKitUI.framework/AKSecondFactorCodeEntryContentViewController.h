/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <AKJiggling> {
    NSArray *_activeConstraints;
    AKCodeEntryView *_codeGeneratorView;
    AKBasicLoginContentViewController *_titleHeaderViewController;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) AKCodeEntryView *codeGeneratorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *generatedCode;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, retain) AKBasicLoginContentViewController *titleHeaderViewController;

- (void).cxx_destruct;
- (void)_configureCodeGenView;
- (void)_configureTitleHeaderView;
- (void)_updateFontContstraints:(id)arg1;
- (id)activeConstraints;
- (id)codeGeneratorView;
- (void)dealloc;
- (id)generatedCode;
- (void)jiggleAView;
- (void)loadView;
- (id)reason;
- (void)setActiveConstraints:(id)arg1;
- (void)setCodeGeneratorView:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTitleHeaderViewController:(id)arg1;
- (id)titleHeaderViewController;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;

@end
