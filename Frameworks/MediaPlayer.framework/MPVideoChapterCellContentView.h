/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPTimeMarker;



@interface MPVideoChapterCellContentView : UIView 
{
    unsigned int _current : 1;
    NSUInteger _index;
    unsigned int _selected : 1;
    unsigned int _showThumbnailColumn : 1;
    float _timeColumnWidth;
    MPTimeMarker *_timeMarker;
}

@property(getter=isCurrent) BOOL current;
@property(getter=isSelected) BOOL selected;
@property BOOL showThumbnailColumn;
@property(retain) MPTimeMarker *timeMarker;
@property float timeColumnWidth;
@property NSUInteger index;


- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)isCurrent;
- (BOOL)selected;
- (void)setCurrent:(BOOL)arg1;
- (void)setIndex:(NSUInteger)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (void)setTimeMarker:(id)arg1;
- (void)setTimeColumnWidth:(float)arg1;
- (BOOL)showThumbnailColumn;
- (void)_addThumbnailIfNecessary:(id)arg1;
- (void)_removeThumbnailIfNecessary:(id)arg1;
- (id)timeMarker;
- (float)timeColumnWidth;
- (NSUInteger)index;

@end