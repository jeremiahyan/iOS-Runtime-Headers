/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _activationStates;
    NSMutableArray *_appletsBytes;
    NSMutableArray *_cardAIDs;
    struct { 
        unsigned int pending : 1; 
    } _has;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _lifecycleStates;
    BOOL _pending;
}

@property (nonatomic, readonly) unsigned int*activationStates;
@property (nonatomic, readonly) unsigned int activationStatesCount;
@property (nonatomic, retain) NSMutableArray *appletsBytes;
@property (nonatomic, retain) NSMutableArray *cardAIDs;
@property (nonatomic) BOOL hasPending;
@property (nonatomic, readonly) unsigned int*lifecycleStates;
@property (nonatomic, readonly) unsigned int lifecycleStatesCount;
@property (nonatomic) BOOL pending;

- (void).cxx_destruct;
- (unsigned int*)activationStates;
- (unsigned int)activationStatesAtIndex:(unsigned int)arg1;
- (unsigned int)activationStatesCount;
- (void)addActivationStates:(unsigned int)arg1;
- (void)addAppletsBytes:(id)arg1;
- (void)addCardAIDs:(id)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (id)appletsBytes;
- (id)appletsBytesAtIndex:(unsigned int)arg1;
- (unsigned int)appletsBytesCount;
- (id)cardAIDs;
- (id)cardAIDsAtIndex:(unsigned int)arg1;
- (unsigned int)cardAIDsCount;
- (void)clearActivationStates;
- (void)clearAppletsBytes;
- (void)clearCardAIDs;
- (void)clearLifecycleStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPending;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int*)lifecycleStates;
- (unsigned int)lifecycleStatesAtIndex:(unsigned int)arg1;
- (unsigned int)lifecycleStatesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)pending;
- (BOOL)readFrom:(id)arg1;
- (void)setActivationStates:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setAppletsBytes:(id)arg1;
- (void)setCardAIDs:(id)arg1;
- (void)setHasPending:(BOOL)arg1;
- (void)setLifecycleStates:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setPending:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
