/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriSession <NSObject>

@required

- (void)cancelSpeechRequest;
- (void)clearContext;
- (void)end;
- (void)forceAudioSessionActive;
- (void)forceAudioSessionInactive;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(void *)arg1 conflictHandler:(void *)arg2; // needs 2 arg types, found 6: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preheat;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resetContextTypes:(int)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)rollbackClearContext;
- (void)sendReplyCommand:(AceObject<SAAceCommand> *)arg1;
- (void)setAlertContext;
- (void)setApplicationContext;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(unsigned int)arg1;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2;
- (void)startRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)stopRecordingSpeech;
- (void)stopRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)telephonyRequestCompleted;
- (void)updateRequestOptions:(AFUIRequestOptions *)arg1;

@end
