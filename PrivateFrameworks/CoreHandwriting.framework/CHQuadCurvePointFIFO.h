/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHQuadCurvePointFIFO : CHPointFIFO {
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {} _controlPoints;
    id /* block */ _emissionHandler;
    BOOL _emitInterpolatedPoints;
    void_lastPoint;
    float _lineWidth;
    struct CGPath { } *_path;
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {} _points;
    struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >="__first_"^ {} _prevPoints;
    float _unitScale;
    UIView *_view;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  controlPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (copy) id /* block */ emissionHandler;
@property (nonatomic) BOOL emitInterpolatedPoints;
@property (nonatomic) void lastPoint;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  points; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<float __attribute__((ext_vector_type(4)))' */ struct  prevPoints; /* unknown property attribute:  std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^}} */
@property (nonatomic) float unitScale;
@property (nonatomic, retain) UIView *view;

+ (void)interpolateFromPoint:(void *)arg1 toPoint:(void *)arg2 controlPoint:(void *)arg3 time:(void *)arg4; // needs 4 arg types, found 1: float

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})controlPoints;
- (void)dealloc;
- (id /* block */)emissionHandler;
- (BOOL)emitInterpolatedPoints;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)initWithFIFO:(id)arg1 strokeView:(id)arg2;
- (void)lastPoint;
- (float)lineWidth;
- (struct CGPath { }*)path;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})points;
- (struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})prevPoints;
- (void)setControlPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setEmitInterpolatedPoints:(BOOL)arg1;
- (void)setLastPoint;
- (void)setLineWidth:(float)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setPrevPoints:(struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {})arg1;
- (void)setUnitScale:(float)arg1;
- (void)setUnitScaleForViewSize:(struct CGSize { float x1; float x2; })arg1 normalizedSize:(struct CGSize { float x1; float x2; })arg2 contentScaleFactor:(float)arg3;
- (void)setView:(id)arg1;
- (float)unitScale;
- (id)view;

@end
