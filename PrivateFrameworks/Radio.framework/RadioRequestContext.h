/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRequestContext : NSObject <NSCopying> {
    SSVFairPlaySAPSession *_SAPSession;
    BOOL _usesLocalNetworking;
}

@property (nonatomic, retain) SSVFairPlaySAPSession *SAPSession;
@property (nonatomic) BOOL usesLocalNetworking;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setUsesLocalNetworking:(BOOL)arg1;
- (BOOL)usesLocalNetworking;

@end
