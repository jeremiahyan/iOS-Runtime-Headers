/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLContainerRelationChange : CPLRecordChange {
    NSString *_itemIdentifier;
    CPLContainerRelation *_relation;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) CPLContainerRelation *relation;

+ (id)relationToContainerWithIdentifier:(id)arg1;
+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 usingClientCache:(id)arg3;
- (id)description;
- (id)identifierForQuarantine;
- (id)identifiersForMapping;
- (id)itemIdentifier;
- (id)relatedIdentifier;
- (id)relation;
- (id)secondaryIdentifier;
- (void)setItemIdentifier:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setRelation:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
