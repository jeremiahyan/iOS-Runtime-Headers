/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksWatchPreferences : NSObject {
    BOOL _changeColorSwapped;
    unsigned int _textDirection;
    NPSDomainAccessor *_watchDefaults;
}

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (int)complicationDisplayMode;
- (void)dealloc;
- (id)defaultStockSymbol;
- (id)init;
- (void)setComplicationDisplayMode:(int)arg1;
- (void)setDefaultStockSymbol:(id)arg1;
- (void)syncChartInterval;
- (void)syncKey:(id)arg1;
- (void)syncRowDataType;
- (void)syncSelectedStock;
- (void)syncStocksList;

@end
