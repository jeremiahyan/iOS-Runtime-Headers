/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate> {
    NSString *_releaseNotes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *releaseNotes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)loadView;
- (id)releaseNotes;
- (void)setReleaseNotes:(id)arg1;
- (id)specifiers;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;

@end
