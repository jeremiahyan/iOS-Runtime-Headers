/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServerBag : NSObject {
    NSDictionary *_dictionaryRepresentation;
    unsigned int _environment;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    BOOL _refreshing;
    NSURL *_url;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) double accessoryReportTimeout;
@property (nonatomic, readonly, copy) NSURL *accessoryReportURL;
@property (nonatomic, readonly, copy) NSURL *activationCertificateHostnameURL;
@property (nonatomic, readonly, copy) NSURL *activationHostnameURL;
@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned int environment;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) BOOL refreshing;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)activationCertificateHostnameURLOverride;
+ (id)activationHostnameURLOverride;
+ (id)defaultServerBag;
+ (void)initialize;
+ (id)serverBagURLForEnvironment:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_loadDefaultBag;
- (void)_synchronizeWithCompletion:(id /* block */)arg1;
- (double)accessoryReportTimeout;
- (id)accessoryReportURL;
- (id)activationCertificateHostnameURL;
- (id)activationHostnameURL;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)environment;
- (id)init;
- (id)initWithEnvironment:(unsigned int)arg1;
- (id)propertyQueue;
- (BOOL)refreshing;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setRefreshing:(BOOL)arg1;
- (id)url;
- (id)urlSession;
- (id)workQueue;

@end
