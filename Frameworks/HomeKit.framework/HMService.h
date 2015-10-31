/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMService : NSObject <HMObjectMerge, NSSecureCoding> {
    HMAccessory *_accessory;
    NSString *_associatedServiceType;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMThreadSafeMutableArrayCollection *_currentCharacteristics;
    HMDelegateCaller *_delegateCaller;
    NSNumber *_instanceID;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_serviceType;
    NSUUID *_uniqueIdentifier;
    BOOL _userInteractive;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) HMAccessory *accessory;
@property (nonatomic, copy) NSString *associatedServiceType;
@property (nonatomic, readonly, copy) NSArray *characteristics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) HMThreadSafeMutableArrayCollection *currentCharacteristics;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (getter=isUserInteractive, nonatomic, readonly) BOOL userInteractive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_serviceTypeAsString:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addCharacteristic:(id)arg1;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (id)_findCharacteristic:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (BOOL)_hasCharacteristic:(id)arg1;
- (BOOL)_hasCharacteristicOfType:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (id)_serviceTypeDescription;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accessory;
- (id)associatedServiceType;
- (id)characteristics;
- (id)clientQueue;
- (id)currentCharacteristics;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (BOOL)isUserInteractive;
- (id)localizedDescription;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (id)serviceType;
- (void)setAccessory:(id)arg1;
- (void)setAssociatedServiceType:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentCharacteristics:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)workQueue;

@end
