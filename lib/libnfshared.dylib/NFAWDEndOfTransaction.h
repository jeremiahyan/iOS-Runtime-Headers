/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDEndOfTransaction : NSObject <NFAWDEventProtocol> {
    unsigned long long _iad;
    AWDNFCHCIEndOfTransactionEvent *_metric;
    NSData *aid;
    unsigned long long amount;
    NSData *cdi;
    unsigned int command;
    unsigned int currencyCode;
    unsigned int informative;
    NSData *maid;
    NSData *mcii;
    unsigned int mobileCVMResult;
    unsigned int msc;
    unsigned int status;
    NSData *transactionId;
    unsigned int transactionStatus;
    unsigned int version;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned long long amount;
@property (nonatomic, retain) NSData *cdi;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long iad;
@property (nonatomic) unsigned int informative;
@property (nonatomic, retain) NSData *maid;
@property (nonatomic, retain) NSData *mcii;
@property (nonatomic, retain) AWDNFCHCIEndOfTransactionEvent *metric;
@property (nonatomic) unsigned int mobileCVMResult;
@property (nonatomic) unsigned int msc;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned int version;

- (id)aid;
- (unsigned long long)amount;
- (id)cdi;
- (unsigned int)command;
- (unsigned int)currencyCode;
- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (unsigned long long)iad;
- (unsigned int)informative;
- (id)init;
- (id)maid;
- (id)mcii;
- (id)metric;
- (unsigned int)mobileCVMResult;
- (unsigned int)msc;
- (void)setAid:(id)arg1;
- (void)setAmount:(unsigned long long)arg1;
- (void)setCdi:(id)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setIad:(unsigned long long)arg1;
- (void)setInformative:(unsigned int)arg1;
- (void)setMaid:(id)arg1;
- (void)setMcii:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setMobileCVMResult:(unsigned int)arg1;
- (void)setMsc:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (id)transactionId;
- (unsigned int)transactionStatus;
- (unsigned int)updateTransactionStateInfoWithPreviousState:(unsigned int)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)version;

@end
