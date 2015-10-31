/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNIndexRequestHandler : CSIndexExtensionRequestHandler {
    void *_ab;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    CSSearchableIndex *_index;
    CNContactStore *_store;
}

@property (nonatomic, readonly) CSSearchableIndex *index;

+ (id)defaultSearchableItemsDomain;
+ (id)descriptorForRequiredKeysForSearchableItem;
+ (void)initialize;
+ (id)searchableItemsDomain;
+ (void)setSearchableItemsDomain:(id)arg1;

- (void).cxx_destruct;
- (id)contactIdentifierFromPerson:(void*)arg1;
- (void)dealloc;
- (id)index;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)searchableItemForContactIdentifier:(id)arg1;
- (id)searchableItemForPerson:(void*)arg1;

@end
