/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLStatisticsData : NSObject {
    unsigned int mFrames;
    TSCH3DGLPointerCountedSet *mGeometryUseCount;
    TSCH3DGLPointerCountedSet *mShadersUseCount;
}

@property (nonatomic) unsigned int frames;

+ (id)statisticsData;

- (void)activateShader:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)drawGeometry:(id)arg1;
- (unsigned int)frames;
- (id)init;
- (void)setFrames:(unsigned int)arg1;

@end
