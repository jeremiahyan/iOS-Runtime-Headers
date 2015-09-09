/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ETPeople.framework/ETPeople
 */

@interface ETFriendListManager : NSObject {
    NPSDomainAccessor *_domainAccessor;
    ETPerson *_ephemeralPerson;
    struct { 
        unsigned int structuralChange : 1; 
        unsigned int needsReload : 1; 
        unsigned int needsRefresh : 1; 
    } _flags;
    NSMutableArray *_friendList;
    NPSManager *_npsManager;
    unsigned int _postCount;
    NSObject<OS_dispatch_queue> *_saveQueue;
}

@property (nonatomic, retain) ETPerson *ephemeralPerson;
@property (nonatomic, retain) NSMutableArray *friendList;

+ (id)_positionColors;

- (void).cxx_destruct;
- (void)_addressBookChanged:(id)arg1;
- (id)_createEmptyFriendList;
- (id)_curatedFriendList;
- (int)_firstEmptyPosition;
- (void)_listChangedExternally;
- (void)_loadListAndRefresh:(BOOL)arg1;
- (id)_migrate:(id)arg1;
- (unsigned int)_numberOfFriendsInList:(id)arg1;
- (void)_personValuesChanged:(id)arg1;
- (void)_postChangeNotification;
- (void)_updateFriends:(id)arg1 andRefresh:(BOOL)arg2;
- (BOOL)_verifyFriendListIntegrity;
- (void)_writeToUserDefaults:(id)arg1 synchronize:(BOOL)arg2;
- (BOOL)addFriend:(id)arg1;
- (id)colorForFriend:(id)arg1;
- (BOOL)containsFriend:(id)arg1;
- (BOOL)containsFriendWithABRecordID:(int)arg1;
- (void)dealloc;
- (id)ephemeralPerson;
- (id)friendAtPosition:(unsigned int)arg1;
- (unsigned int)friendCount;
- (id)friendList;
- (id)init;
- (id)initAndRefresh:(BOOL)arg1;
- (void)invalidate;
- (BOOL)isFull;
- (void)moveFriendAtPosition:(unsigned int)arg1 toPosition:(unsigned int)arg2;
- (unsigned int)positionOfFriend:(id)arg1;
- (void)refreshAgainstAddressBook;
- (void)removeFriendAtPosition:(unsigned int)arg1;
- (void)save;
- (void)setEphemeralPerson:(id)arg1;
- (BOOL)setFriend:(id)arg1 atPosition:(unsigned int)arg2;
- (void)setFriendList:(id)arg1;
- (unsigned int)slots;

@end
