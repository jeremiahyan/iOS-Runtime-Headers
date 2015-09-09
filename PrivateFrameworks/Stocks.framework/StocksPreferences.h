/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject {
    BOOL _changeColorSwapped;
    NSUserDefaults *_sharedDefaults;
    BOOL _textAttachmentDirectionIsRightToLeft;
    unsigned int _textDirection;
}

@property (getter=isChangeColorSwapped, nonatomic, readonly) BOOL changeColorSwapped;
@property (nonatomic, readonly) BOOL textAttachmentDirectionIsRightToLeft;
@property (nonatomic, readonly) unsigned int textDirection;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)integerForKey:(id)arg1;
- (BOOL)isChangeColorSwapped;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)resetLocale;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)synchronize;
- (BOOL)textAttachmentDirectionIsRightToLeft;
- (unsigned int)textDirection;

@end
