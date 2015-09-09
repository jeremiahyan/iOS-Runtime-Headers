/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSearchResponse : NSObject {
    double _backOff;
    NSArray *_completionResultSets;
    NSString *_errorCodeString;
    double _maxAge;
    int _status;
    NSString *_statusString;
}

@property (nonatomic, readonly) double backOff;
@property (nonatomic, readonly) NSArray *completionResultSets;
@property (nonatomic, readonly) NSString *errorCodeString;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) NSString *statusString;

- (void).cxx_destruct;
- (double)backOff;
- (id)completionResultSets;
- (id)description;
- (id)errorCodeString;
- (id)initWithFactory:(id)arg1 session:(id)arg2 webSearch:(BOOL)arg3 resourceProvider:(id)arg4 array:(id)arg5 error:(id*)arg6;
- (double)maxAge;
- (int)status;
- (id)statusString;

@end
