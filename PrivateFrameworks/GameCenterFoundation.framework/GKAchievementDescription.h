/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    UIImage *_image;
    GKAchievementInternal *_internal;
}

@property (nonatomic, readonly, copy) NSString *achievedDescription;
@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (retain) GKAchievementInternal *internal;
@property (nonatomic, readonly) int maximumPoints;
@property (getter=isReplayable, nonatomic, readonly) BOOL replayable;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *unachievedDescription;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2;
+ (id)_loadLocalAchievementDescriptionsForGame:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id /* block */)arg1;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned int)hash;
- (id)image;
- (id)imageNameForIcon;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)incompleteAchievementImage;
+ (id)placeholderCompletedAchievementImage;

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)showBanner;

@end
