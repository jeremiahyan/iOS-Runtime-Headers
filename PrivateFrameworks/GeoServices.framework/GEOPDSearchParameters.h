/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int sortOrder : 1; 
    } _has;
    unsigned int _maxResults;
    NSString *_searchString;
    int _sortOrder;
    GEOPDAutocompleteEntry *_suggestionEntry;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    GEOPDViewportInfo *_viewportInfo;
}

@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic, readonly) BOOL hasSuggestionEntry;
@property (nonatomic, readonly) BOOL hasSuggestionEntryMetadata;
@property (nonatomic, readonly) BOOL hasSuggestionMetadata;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxResults;
- (BOOL)hasSearchString;
- (BOOL)hasSortOrder;
- (BOOL)hasSuggestionEntry;
- (BOOL)hasSuggestionEntryMetadata;
- (BOOL)hasSuggestionMetadata;
- (BOOL)hasViewportInfo;
- (unsigned int)hash;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchString;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasSortOrder:(BOOL)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)suggestionEntry;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
