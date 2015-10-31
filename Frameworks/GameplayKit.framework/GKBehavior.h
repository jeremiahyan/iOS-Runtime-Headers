/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKBehavior : NSObject <NSFastEnumeration> {
    NSMutableArray *_goals;
    NSMutableArray *_weights;
}

@property (readonly) int goalCount;

+ (id)behaviorWithGoal:(id)arg1 weight:(float)arg2;
+ (id)behaviorWithGoals:(id)arg1;
+ (id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2;
+ (id)behaviorWithWeightedGoals:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)getTotalForce:(double)arg1 agent:(id)arg2;
- (int)goalCount;
- (id)init;
- (id)initWithGoal:(id)arg1 weight:(float)arg2;
- (id)initWithGoals:(id)arg1;
- (id)initWithGoals:(id)arg1 andWeights:(id)arg2;
- (id)initWithWeightedGoals:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllGoals;
- (void)removeGoal:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setWeight:(float)arg1 forGoal:(id)arg2;
- (float)weightForGoal:(id)arg1;

@end
