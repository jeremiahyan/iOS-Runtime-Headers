/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatCategoryEntry : NSObject {
    NSMutableSet *mFormatStrings;
    struct __CFArray { } *mFormatters;
    unsigned short mSeparator;
}

- (void)addFormat:(id)arg1 locale:(struct __CFLocale { }*)arg2;
- (void)dealloc;
- (id)formatStrings;
- (id)initWithSeparator:(unsigned short)arg1;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const struct __CFString {}**)arg3 perfect:(BOOL*)arg4;
- (unsigned short)separator;

@end
