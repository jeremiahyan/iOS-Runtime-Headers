/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackAbandonment : SPFeedback {
    unsigned int _reason;
}

@property (nonatomic) unsigned int reason;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;

@end
