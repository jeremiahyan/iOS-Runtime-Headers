/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyInput, UIKeyboardInput, UITextInputPrivate, UITextInputTokenizer, UITextInput_Internal, UIWebSelectionBlock>

@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (readonly) DOMNamedNodeMap *attributes;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (readonly, copy) NSString *baseURI;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly) DOMNodeList *childNodes;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (readonly) DOMNode *firstChild;
@property (nonatomic) BOOL forceEnableDictation;
@property (readonly) unsigned int hash;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (readonly) BOOL isContentEditable;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (readonly) DOMNode *lastChild;
@property (nonatomic) BOOL learnsCorrections;
@property (readonly, copy) NSString *localName;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (readonly) BOOL mf_isAttachment;
@property (readonly) BOOL mf_isBody;
@property (readonly, copy) NSString *namespaceURI;
@property (readonly) DOMNode *nextSibling;
@property (readonly, copy) NSString *nodeName;
@property (readonly) unsigned short nodeType;
@property (copy) NSString *nodeValue;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly) DOMElement *parentElement;
@property (readonly) DOMNode *parentNode;
@property (copy) NSString *prefix;
@property (readonly) DOMNode *previousSibling;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) int selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy) NSString *textContent;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic, readonly) WebArchive *webArchive;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue { }*)arg1;

- (struct Element { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; }*)_linkElement;
- (struct RootObject { }*)_rootObject;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadAndInsideFixedPosition:(BOOL*)arg1;
- (id)absoluteQuads;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)appendChild:(id)arg1;
- (id)attributes;
- (id)baseURI;
- (id)borderRadii;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxUsingTransforms;
- (id)boundingBoxes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (id)childNodes;
- (id)cloneNode:(BOOL)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (float)computedFontSize;
- (BOOL)contains:(id)arg1;
- (BOOL)containsOnlyInlineObjects;
- (void)dealloc;
- (id)description;
- (BOOL)dispatchEvent:(id)arg1;
- (void)finalize;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)firstChild;
- (BOOL)hasAttributes;
- (BOOL)hasChildNodes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)inspect;
- (BOOL)isContentEditable;
- (BOOL)isDefaultNamespace:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)isSameNode:(id)arg1;
- (BOOL)isSelectableBlock;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (id)lastChild;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)localName;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)namespaceURI;
- (id)nextFocusNode;
- (id)nextSibling;
- (id)nodeName;
- (unsigned short)nodeType;
- (id)nodeValue;
- (void)normalize;
- (id)ownerDocument;
- (id)parentElement;
- (id)parentNode;
- (id)prefix;
- (id)previousFocusNode;
- (id)previousSibling;
- (id)rangeOfContainingParagraph;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (void)setNodeValue:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (float)textHeight;
- (id)textRects;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (id)mf_appendBlockPlaceholder;
- (id)mf_blockNodeAncestor;
- (id)mf_childNodeAtIndex:(int)arg1;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (id)mf_containingBlockQuote;
- (BOOL)mf_containsOnlySelectionMarkers;
- (BOOL)mf_containsRichText;
- (id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (id)mf_firstDescendantBlockQuote;
- (id)mf_firstSibling;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (id)mf_highestContainingBlockQuote;
- (BOOL)mf_isAtBeginningOfContainerNode:(id)arg1;
- (BOOL)mf_isAtEndOfContainerNode:(id)arg1;
- (BOOL)mf_isAttachment;
- (BOOL)mf_isBody;
- (BOOL)mf_isDescendantOfNode:(id)arg1;
- (BOOL)mf_isQuoteOrWithinQuote;
- (id)mf_lastSibling;
- (id)mf_nextSiblingOrAunt;
- (int)mf_quoteLevelDelta;
- (id)mf_topmostContainingNodeWithNameInArray:(id)arg1;
- (id)mf_traverseNextNodeStayingWithin:(id)arg1;
- (id)mf_traverseNextSiblingStayingWithin:(id)arg1;
- (id)mf_traversePreviousNode;
- (void)recursivelyRemoveMailAttributes;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_accessoryClear;
- (unsigned long)_characterAfterCaretSelection;
- (unsigned long)_characterBeforeCaretSelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (BOOL)_hasMarkedText;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (BOOL)_isEmptySelection;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_nextAssistedNode;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned int)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_previousAssistedNode;
- (id)_proxyTextInput;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_realNode;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedNSRange;
- (int)_selectionAffinity;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (id)_textColorForCaretSelection;
- (id)_textFormElement;
- (id)_textSelectingContainer;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (BOOL)_usesAsynchronousProtocol;
- (id)_wordContainingCaretSelection;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)alwaysAttemptToShowTapHighlight;
- (id)asDomNode;
- (id)asDomRange;
- (id)asElement;
- (id)automaticallySelectedOverlay;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (void)clearMarkedText;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1 withInset:(float)arg2;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsNode:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)content;
- (BOOL)contentsIsSingleValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)createPeripheral;
- (id)createPickerCell;
- (id)createSelectedItem;
- (id)delegate;
- (void)deleteBackward;
- (BOOL)editable;
- (BOOL)editing;
- (id)enclosingDocument;
- (id)enclosingElementIncludingSelf;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)extendCurrentSelection:(int)arg1;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasCustomLineHeight;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (int)initialSelectionBehavior;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAutoFillMode;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)isSecure;
- (BOOL)isShowingPlaceholder;
- (BOOL)isTextControl;
- (id)itemTitle;
- (int)keyboardType;
- (id)largerParent;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (void)moveDown;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (BOOL)nodeCanBecomeFirstResponder;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)parentBlock;
- (void)populateCell:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)rangeOfContents;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (BOOL)rendersAsBlock;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(BOOL)arg3;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)requiresKeyEvents;
- (int)returnKeyType;
- (void)selectAll;
- (BOOL)selectable;
- (id)selectedTextRange;
- (int)selectionAffinity;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (id)selectionView;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setInitialSelectionBehavior:(int)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 inset:(float)arg2;
- (void)setText:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)showsTapHighlight;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)tagName;
- (void)takeTraitsFrom:(id)arg1;
- (id)tapHighlightColor;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textDocument;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (int)textLoupeVisibility;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)tokenizer;
- (BOOL)touchCalloutEnabled;
- (id)uiWebDocumentView;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateSelection;
- (id)urlScheme;
- (id)webFrame;
- (int)wordOffsetInRange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_removeResultLinks;
- (BOOL)dd_searchForLinkEndNode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_renderRect:(bool*)arg1;
- (id)endPosition;
- (void)hidePlaceholder;
- (BOOL)isHorizontalWritingMode;
- (id)markupString;
- (id)rangeOfContents;
- (void)showPlaceholderIfNecessary;
- (id)startPosition;
- (id)webArchive;
- (id)webArchiveByFilteringSubframes:(id /* block */)arg1;

@end
