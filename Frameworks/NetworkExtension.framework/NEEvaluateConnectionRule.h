/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    int _action;
    NSArray *_matchDomains;
    NSURL *_probeURL;
    NSArray *_useDNSServers;
}

@property (readonly) int action;
@property (readonly) NSArray *matchDomains;
@property (copy) NSURL *probeURL;
@property (copy) NSArray *useDNSServers;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)action;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchDomains:(id)arg1 andAction:(int)arg2;
- (id)matchDomains;
- (id)probeURL;
- (void)setProbeURL:(id)arg1;
- (void)setUseDNSServers:(id)arg1;
- (id)useDNSServers;

@end
