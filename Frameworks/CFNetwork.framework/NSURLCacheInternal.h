/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLCacheInternal : NSObject {
    struct _CFURLCache { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct shared_ptr<__CFURLCache> { struct __CFURLCache {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; } *_cacheRef;
    unsigned int currentDiskUsage;
    unsigned int currentMemoryUsage;
    unsigned int diskCapacity;
    NSString *diskPath;
    unsigned int memoryCapacity;
}

- (void)dealloc;
- (void)finalize;

@end
