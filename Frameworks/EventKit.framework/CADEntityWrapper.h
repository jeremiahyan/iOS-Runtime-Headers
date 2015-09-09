/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int _entityType;
    NSArray *_loadedKeys;
    NSMutableDictionary *_loadedProperties;
    NSArray *_loadedValues;
    EKObjectID *_objectID;
    int _rowID;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)loadedProperties;
- (id)objectID;

@end
