/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRProtocol : NSObject {
    double _carrierFrequency;
    unsigned char _options;
    unsigned char _protocolID;
    double _repeatInterval;
}

@property (nonatomic, readonly) double carrierFrequency;
@property (nonatomic, readonly) unsigned char options;
@property (nonatomic, readonly) unsigned char protocolID;
@property (nonatomic, readonly) double repeatInterval;

+ (id)protocolWithID:(unsigned char)arg1 options:(unsigned char)arg2;

- (double)carrierFrequency;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned char)options;
- (unsigned char)protocolID;
- (double)repeatInterval;

@end
