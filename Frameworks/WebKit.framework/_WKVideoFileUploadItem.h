/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKVideoFileUploadItem : _WKFileUploadItem {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _filePath;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    } _mediaURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)displayImage;
- (id)fileURL;
- (id)initWithFilePath:(id)arg1 mediaURL:(id)arg2;
- (BOOL)isVideo;

@end
