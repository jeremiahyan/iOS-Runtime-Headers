/* Generated by RuntimeBrowser.
 */

@protocol ABPersonImageDataDelegate

@required

- (BOOL)didChangePreferredPersonForImage;
- (BOOL)hasImageChanges;
- (BOOL)hasImageDataForPerson:(ABUIPerson *)arg1;
- (NSData *)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(ABUIPerson *)arg3;
- (void)imageWillSave;
- (NSArray *)people;
- (ABUIPerson *)personForImageData;
- (void)refreshImageData;
- (void)reloadImageData;
- (void)removeImageDataForPerson:(ABUIPerson *)arg1;
- (void)resetImageData;
- (void)setImageData:(NSData *)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(ABUIPerson *)arg4;
- (void)setPersonForImageData:(ABUIPerson *)arg1;
- (void)updateRecordImages;
- (NSArray *)writablePeople;

@optional

- (BOOL)shouldUseSourceTypeSpecificStrings;

@end
