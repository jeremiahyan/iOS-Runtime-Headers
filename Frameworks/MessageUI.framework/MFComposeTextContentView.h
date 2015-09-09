/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTextContentView : UITextContentView {
    BOOL _keepScrollPosition;
    int _preventScrollSelectionToVisible;
    struct CGPoint { 
        float x; 
        float y; 
    } _scrollPosition;
}

- (BOOL)becomeFirstResponder;
- (void)beginPreventingScrollSelectionToVisible;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)decreaseQuoteLevel;
- (id)enclosingScrollView;
- (void)endPreventingScrollSelectionToVisible;
- (void)ensureSelection;
- (void)increaseQuoteLevel;
- (BOOL)resignFirstResponder;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)showQuoteLevelOptions;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;

@end
