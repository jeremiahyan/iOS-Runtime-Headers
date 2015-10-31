/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSURL *_calendarURL;
    NSMutableSet *_invalidSharees;
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSString *_summary;
}

@property (nonatomic, retain) NSURL *calendarURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *invalidSharees;
@property (nonatomic, retain) NSSet *shareesToRemove;
@property (nonatomic, retain) NSSet *shareesToSet;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendarURL;
- (id)generateModificationMessageBody;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (id)invalidSharees;
- (void)setCalendarURL:(id)arg1;
- (void)setInvalidSharees:(id)arg1;
- (void)setShareesToRemove:(id)arg1;
- (void)setShareesToSet:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)shareesToRemove;
- (id)shareesToSet;
- (void)startTaskGroup;
- (id)summary;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end
