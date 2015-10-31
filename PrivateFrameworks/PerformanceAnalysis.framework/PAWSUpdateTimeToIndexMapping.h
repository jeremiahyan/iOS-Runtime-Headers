/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAWSUpdateTimeToIndexMapping : NSObject {
    unsigned int _deferStartSampleIndex;
    unsigned int _numDeferIndices;
    unsigned int _numWaitIndices;
    unsigned int _numWorkIndices;
    unsigned int _waitStartSampleIndex;
    unsigned int _workStartSampleIndex;
}

@property (readonly) unsigned int deferEndSampleIndex;
@property (readonly) unsigned int deferStartSampleIndex;
@property (readonly) unsigned int frameEndSampleIndex;
@property (readonly) unsigned int frameStartSampleIndex;
@property (readonly) unsigned int numDeferIndices;
@property (readonly) unsigned int numFrameIndices;
@property (readonly) unsigned int numWaitIndices;
@property (readonly) unsigned int numWorkIndices;
@property (readonly) unsigned int waitEndSampleIndex;
@property (readonly) unsigned int waitStartSampleIndex;
@property (readonly) unsigned int workEndSampleIndex;
@property (readonly) unsigned int workStartSampleIndex;

+ (id)arrayOfMappingsFromWSUpdataDataArray:(id)arg1 andSampleDataStore:(id)arg2;

- (unsigned int)deferEndSampleIndex;
- (unsigned int)deferStartSampleIndex;
- (unsigned int)frameEndSampleIndex;
- (unsigned int)frameStartSampleIndex;
- (id)initWithWSUpdateData:(id)arg1 andSampleDataStore:(id)arg2 andHintIndex:(unsigned int)arg3;
- (unsigned int)numDeferIndices;
- (unsigned int)numFrameIndices;
- (unsigned int)numWaitIndices;
- (unsigned int)numWorkIndices;
- (void)printDeferIndexRangeToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withTranslationDelta:(int)arg2;
- (void)printFrameIndexRangeToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withTranslationDelta:(int)arg2;
- (void)printWaitIndexRangeToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withTranslationDelta:(int)arg2;
- (void)printWorkIndexRangeToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 withTranslationDelta:(int)arg2;
- (unsigned int)waitEndSampleIndex;
- (unsigned int)waitStartSampleIndex;
- (unsigned int)workEndSampleIndex;
- (unsigned int)workStartSampleIndex;

@end
