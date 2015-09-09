/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSContextualActionsNativeViewController : MusicJSNativeViewController <MusicJSContextualActionsNativeViewController> {
    <MusicJSContextualActionsNativeViewControllerDelegate> *_delegate;
    MusicJSContextualActionsNavigationDocument *_jsContextualActionsNavigationDocument;
    MusicJSManagedObject *_jsManagedContextualActionsNavigationDocumentObject;
    IKAppDocument *_shareDocument;
    NSDictionary *_shareDocumentOptions;
}

@property (nonatomic) <MusicJSContextualActionsNativeViewControllerDelegate> *delegate;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) IKAppDocument *shareDocument;
@property (nonatomic, readonly) NSDictionary *shareDocumentOptions;

- (void).cxx_destruct;
- (id)delegate;
- (id)jsNavigationDocumentForJSContext:(id)arg1;
- (id)nativeViewIdentifier;
- (id)navigationDocument;
- (void)presentShareDocument:(id)arg1 :(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)shareDocument;
- (id)shareDocumentOptions;

@end
