/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFCoalescerContext : NSObject {
    unsigned long _coalescedUpdatesCount;
    PFCoalescer *_coalescer;
    NSObject<OS_dispatch_group> *_group;
}

@property unsigned long coalescedUpdatesCount;
@property PFCoalescer *coalescer;
@property (retain) NSObject<OS_dispatch_group> *group;

- (void).cxx_destruct;
- (id)activityToken;
- (unsigned long)coalescedUpdatesCount;
- (id)coalescer;
- (void)delayNextInvocationByTimeInterval:(double)arg1;
- (id)group;
- (id)initWithCoalescer:(id)arg1;
- (void)pushBack:(id /* block */)arg1;
- (void)setCoalescedUpdatesCount:(unsigned long)arg1;
- (void)setCoalescer:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)waitForActivityTokens;

@end
