/* Generated by RuntimeBrowser.
 */

@protocol WebMultipleTextMatches <NSObject>

@required

- (unsigned int)countMatchesForText:(NSString *)arg1 inDOMRange:(DOMRange *)arg2 options:(unsigned int)arg3 limit:(unsigned int)arg4 markMatches:(BOOL)arg5;
- (BOOL)markedTextMatchesAreHighlighted;
- (NSArray *)rectsForTextMatches;
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)arg1;
- (void)unmarkAllTextMatches;

@end
