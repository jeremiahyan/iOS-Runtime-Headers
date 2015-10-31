/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {
    CKContactsSearchManager *_contactsSearchManager;
}

@property (nonatomic, retain) CKContactsSearchManager *contactsSearchManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)contactsSearchManager;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)dealloc;
- (void)setContactsSearchManager:(id)arg1;
- (void)updateShortcutItems;

@end
