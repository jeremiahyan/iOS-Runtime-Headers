/* Generated by RuntimeBrowser.
 */

@protocol PRSBaseResult <NSObject, NSCopying>

@required

- (NSString *)fbr;
- (NSString *)resultIdentifier;
- (float)resultScore;
- (void)setFbr:(NSString *)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setResultScore:(float)arg1;
- (void)setTemplateName:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)templateName;
- (NSString *)title;

@optional

- (long long)adam_id;
- (<PRSApp> *)app;
- (NSString *)bundle_id;
- (int)max_age;
- (int)media_kind;
- (NSURL *)resultURL;
- (unsigned int)score;
- (void)setAdam_id:(long long)arg1;
- (void)setApp:(id <PRSApp>)arg1;
- (void)setBundle_id:(NSString *)arg1;
- (void)setMax_age:(int)arg1;
- (void)setMedia_kind:(int)arg1;
- (void)setResultURL:(NSURL *)arg1;
- (void)setScore:(unsigned int)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)type;

@end
