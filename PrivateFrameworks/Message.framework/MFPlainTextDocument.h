/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPlainTextDocument : NSObject {
    NSMutableArray *_fragments;
    NSMutableString *_text;
}

- (void)appendArchivedRepresentation:(id)arg1;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (id)archivedRepresentation;
- (void)dealloc;
- (unsigned int)fragmentCount;
- (void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned long)arg3;
- (void)getString:(id*)arg1 quoteLevel:(unsigned int*)arg2 ofFragmentAtIndex:(unsigned int)arg3;
- (id)quotedString:(unsigned long)arg1;
- (id)string;

@end
