/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {
    NSDate *_endDate;
    NSString *_externalID;
    NSString *_location;
    NSDate *_startDate;
    NSString *_title;
    unsigned int _view;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned int view;

- (void).cxx_destruct;
- (id)dictionary;
- (id)eventFromStore:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned int)arg2;
- (id)initWithEvent:(id)arg1 view:(unsigned int)arg2 forceLocal:(BOOL)arg3;
- (id)title;
- (void)updateActivity:(id)arg1;
- (unsigned int)view;

@end
