/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDSERemoved : NSObject <NFAWDEventProtocol> {
    AWDNFCSERemovedEvent *_metric;
    unsigned int reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property AWDNFCSERemovedEvent *metric;
@property (nonatomic) unsigned int reason;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (unsigned int)reason;
- (void)setMetric:(id)arg1;
- (void)setReason:(unsigned int)arg1;

@end
