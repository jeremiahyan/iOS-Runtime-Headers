/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMDocument : DOMNode

@property (readonly, copy) NSString *URL;
@property (readonly) DOMElement *activeElement;
@property (readonly) DOMHTMLCollection *anchors;
@property (readonly) DOMHTMLCollection *applets;
@property (retain) DOMHTMLElement *body;
@property (readonly, copy) NSString *characterSet;
@property (copy) NSString *charset;
@property (copy) NSString *cookie;
@property (readonly, copy) NSString *defaultCharset;
@property (readonly) DOMAbstractView *defaultView;
@property (readonly) DOMDocumentType *doctype;
@property (readonly) DOMElement *documentElement;
@property (copy) NSString *documentURI;
@property (readonly, copy) NSString *domain;
@property (readonly) DOMHTMLCollection *forms;
@property (readonly) DOMHTMLCollection *images;
@property (readonly) DOMImplementation *implementation;
@property (readonly, copy) NSString *inputEncoding;
@property (readonly, copy) NSString *lastModified;
@property (readonly) DOMHTMLCollection *links;
@property (readonly, copy) NSString *preferredStylesheetSet;
@property (readonly, copy) NSString *readyState;
@property (readonly, copy) NSString *referrer;
@property (copy) NSString *selectedStylesheetSet;
@property (readonly) DOMStyleSheetList *styleSheets;
@property (copy) NSString *title;
@property (nonatomic, readonly) WebFrame *webFrame;
@property (readonly, copy) NSString *xmlEncoding;
@property BOOL xmlStandalone;
@property (copy) NSString *xmlVersion;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)URL;
- (id)activeElement;
- (id)adoptNode:(id)arg1;
- (id)anchors;
- (id)applets;
- (id)body;
- (id)caretRangeFromPoint:(int)arg1 y:(int)arg2;
- (id)characterSet;
- (id)charset;
- (unsigned int)childElementCount;
- (id)children;
- (id)compatMode;
- (id)contentType;
- (id)cookie;
- (id)createAttribute:(id)arg1;
- (id)createAttributeNS:(id)arg1 :(id)arg2;
- (id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createCDATASection:(id)arg1;
- (id)createCSSStyleDeclaration;
- (id)createComment:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
- (id)createElementNS:(id)arg1 :(id)arg2;
- (id)createElementNS:(id)arg1 qualifiedName:(id)arg2;
- (id)createEntityReference:(id)arg1;
- (id)createEvent:(id)arg1;
- (id)createExpression:(id)arg1 :(id)arg2;
- (id)createExpression:(id)arg1 resolver:(id)arg2;
- (id)createNSResolver:(id)arg1;
- (id)createNodeIterator:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createNodeIterator:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)createProcessingInstruction:(id)arg1 :(id)arg2;
- (id)createProcessingInstruction:(id)arg1 data:(id)arg2;
- (id)createRange;
- (id)createTextNode:(id)arg1;
- (id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7;
- (id)createTouchList;
- (id)createTreeWalker:(id)arg1 :(unsigned int)arg2 :(id)arg3 :(BOOL)arg4;
- (id)createTreeWalker:(id)arg1 whatToShow:(unsigned int)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4;
- (id)currentScript;
- (id)defaultCharset;
- (id)defaultView;
- (id)doctype;
- (id)documentElement;
- (id)documentURI;
- (id)domain;
- (id)elementFromPoint:(int)arg1 y:(int)arg2;
- (id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5;
- (id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5;
- (BOOL)execCommand:(id)arg1;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2;
- (BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3;
- (id)firstElementChild;
- (id)forms;
- (id)getComputedStyle:(id)arg1 :(id)arg2;
- (id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2;
- (id)getElementById:(id)arg1;
- (id)getElementsByClassName:(id)arg1;
- (id)getElementsByName:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2;
- (id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3;
- (id)getOverrideStyle:(id)arg1 :(id)arg2;
- (id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2;
- (BOOL)hasFocus;
- (id)head;
- (BOOL)hidden;
- (id)images;
- (id)implementation;
- (id)importNode:(id)arg1 :(BOOL)arg2;
- (id)importNode:(id)arg1 deep:(BOOL)arg2;
- (id)inputEncoding;
- (id)lastElementChild;
- (id)lastModified;
- (id)links;
- (id)origin;
- (id)preferredStylesheetSet;
- (BOOL)queryCommandEnabled:(id)arg1;
- (BOOL)queryCommandIndeterm:(id)arg1;
- (BOOL)queryCommandState:(id)arg1;
- (BOOL)queryCommandSupported:(id)arg1;
- (id)queryCommandValue:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)readyState;
- (id)referrer;
- (id)scrollingElement;
- (id)selectedStylesheetSet;
- (void)setBody:(id)arg1;
- (void)setCharset:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setDocumentURI:(id)arg1;
- (void)setSelectedStylesheetSet:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setXmlStandalone:(BOOL)arg1;
- (void)setXmlVersion:(id)arg1;
- (id)styleSheets;
- (id)title;
- (id)visibilityState;
- (id)webkitGetNamedFlows;
- (id)xmlEncoding;
- (BOOL)xmlStandalone;
- (id)xmlVersion;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)createBlockPlaceholder;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_resetResults;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)URLWithAttributeString:(id)arg1;
- (id)_documentRange;
- (id)webFrame;

@end
