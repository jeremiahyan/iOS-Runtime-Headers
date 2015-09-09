/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLAttachment : NSObject <NSSecureCoding> {
    int _downsampleStatus;
    NSString *_identifier;
    NSItemProvider *_itemProvider;
    int _itemProviderPreviewType;
    BOOL _needsAnotherPreviewGeneration;
    id _payload;
    NSURL *_payloadSourceFileURL;
    id /* block */ _payloadUpdateObserver;
    UIImage *_previewImage;
    int _previewType;
    id /* block */ _previewUpdateObserver;
    BOOL _startedPayloadLoad;
    int _type;
    NSString *_typeIdentifier;
}

@property (nonatomic) int downsampleStatus;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, readonly) int itemProviderPreviewType;
@property (nonatomic) BOOL needsAnotherPreviewGeneration;
@property (nonatomic, copy) id payload;
@property (nonatomic, copy) NSURL *payloadSourceFileURL;
@property (nonatomic, retain) UIImage *previewImage;
@property int previewType;
@property (nonatomic) BOOL startedPayloadLoad;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *typeIdentifier;

+ (BOOL)attachmentTypeRepresentsAnImage:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_uniqueIdentifier;
- (id)description;
- (int)downsampleStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3;
- (id)itemProvider;
- (int)itemProviderPreviewType;
- (BOOL)needsAnotherPreviewGeneration;
- (id)payload;
- (id)payloadSourceFileURL;
- (id)previewImage;
- (int)previewType;
- (void)setDownsampleStatus:(int)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setNeedsAnotherPreviewGeneration:(BOOL)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadSourceFileURL:(id)arg1;
- (void)setPayloadUpdateObserverWithBlock:(id /* block */)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setPreviewType:(int)arg1;
- (void)setPreviewUpdateObserverWithBlock:(id /* block */)arg1;
- (void)setStartedPayloadLoad:(BOOL)arg1;
- (void)setType:(int)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (BOOL)startedPayloadLoad;
- (int)type;
- (id)typeIdentifier;

@end
