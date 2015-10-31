/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTimerTrigger : HMTrigger <NSSecureCoding> {
    NSDate *_fireDate;
    NSDateComponents *_recurrence;
    NSCalendar *_recurrenceCalendar;
    NSTimeZone *_timeZone;
}

@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSDateComponents *recurrence;
@property (nonatomic, copy) NSCalendar *recurrenceCalendar;
@property (nonatomic, copy) NSTimeZone *timeZone;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleScheduleChangedNotification:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)recurrence;
- (id)recurrenceCalendar;
- (void)setFireDate:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setRecurrenceCalendar:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;

@end
