/* Generated by RuntimeBrowser.
 */

@protocol SCROBrailleDriverProtocol <NSObject>

@required

- (int)brailleInputMode;
- (NSArray *)getInputEvents;
- (unsigned int)interfaceVersion;
- (BOOL)isDriverLoaded;
- (BOOL)isInputEnabled;
- (BOOL)isSleeping;
- (int)loadDriverWithIOElement:(id <SCROIOElementProtocol>)arg1;
- (int)mainSize;
- (NSString *)modelIdentifier;
- (BOOL)postsKeyboardEvents;
- (BOOL)setMainCells:(const char *)arg1 length:(int)arg2;
- (BOOL)setStatusCells:(const char *)arg1 length:(int)arg2;
- (int)statusSize;
- (BOOL)supportsBlinkingCursor;
- (BOOL)unloadDriver;

@end
