/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTheme : NSObject {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mTextDefaults;
}

@property (nonatomic, retain) OADBaseStyles *baseStyles;
@property (nonatomic, retain) OADDefaultProperties *lineDefaults;
@property (nonatomic, retain) OADDefaultProperties *shapeDefaults;
@property (nonatomic, retain) OADDefaultProperties *textDefaults;

- (void)addDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)addTextDefaults;
- (id)baseStyles;
- (void)dealloc;
- (id)init;
- (id)lineDefaults;
- (void)setBaseStyles:(id)arg1;
- (void)setLineDefaults:(id)arg1;
- (void)setShapeDefaults:(id)arg1;
- (void)setTextDefaults:(id)arg1;
- (id)shapeDefaults;
- (id)textDefaults;

@end
