/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRCandidate : NSObject {
    BOOL _blacklisted;
    double _errorScore;
    double _lmScore;
    NSString *_string;
}

+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 errorType:(unsigned int)arg3;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned long)arg2 transform:(unsigned int)arg3 errorType:(unsigned int)arg4;
+ (id)candidateWithString:(id)arg1 errorScore:(double)arg2;
+ (id)candidateWithString:(id)arg1 errorType:(unsigned int)arg2;
+ (double)errorScoreForType:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (double)errorScore;
- (id)initWithString:(id)arg1 errorScore:(double)arg2;
- (BOOL)isBlacklisted;
- (double)languageModelScore;
- (double)score;
- (void)setBlacklisted:(BOOL)arg1;
- (void)setErrorScore:(double)arg1;
- (void)setLanguageModelScore:(double)arg1;
- (id)string;

@end
