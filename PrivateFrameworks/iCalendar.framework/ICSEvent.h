/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSEvent : ICSComponent

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property BOOL forcedAllDay;
@property (readonly) BOOL isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned int sequence;
@property int status;
@property (retain) NSString *summary;
@property (nonatomic) int transp;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (nonatomic) BOOL x_apple_dontschedule;
@property (retain) NSString *x_apple_dropbox;
@property (nonatomic) int x_apple_ews_busystatus;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore;
@property (nonatomic) BOOL x_apple_needs_reply;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior;
@property (retain) ICSTravelDuration *x_apple_travel_duration;
@property (retain) ICSStructuredLocation *x_apple_travel_start;
@property (nonatomic, retain) NSArray *x_calendarserver_attendee_comment;
@property (nonatomic, retain) NSString *x_calendarserver_private_comment;
@property (nonatomic) BOOL x_wr_itipalreadysent;
@property (nonatomic) BOOL x_wr_itipstatusattendeeml;
@property (nonatomic) BOOL x_wr_itipstatusml;
@property (nonatomic) BOOL x_wr_rsvpneeded;

+ (id)name;

- (void)fixComponent;
- (BOOL)isDefaultAlarmDeleted;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_apple_dontschedule:(BOOL)arg1;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (void)setX_apple_needs_reply:(BOOL)arg1;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (void)setX_wr_itipalreadysent:(BOOL)arg1;
- (void)setX_wr_itipstatusattendeeml:(BOOL)arg1;
- (void)setX_wr_itipstatusml:(BOOL)arg1;
- (void)setX_wr_rsvpneeded:(BOOL)arg1;
- (int)transp;
- (BOOL)validate:(id*)arg1;
- (BOOL)x_apple_dontschedule;
- (int)x_apple_ews_busystatus;
- (BOOL)x_apple_needs_reply;
- (id)x_calendarserver_attendee_comment;
- (id)x_calendarserver_private_comment;
- (BOOL)x_wr_itipalreadysent;
- (BOOL)x_wr_itipstatusattendeeml;
- (BOOL)x_wr_itipstatusml;
- (BOOL)x_wr_rsvpneeded;

@end
