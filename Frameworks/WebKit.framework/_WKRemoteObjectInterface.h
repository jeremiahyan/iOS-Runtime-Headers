/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKRemoteObjectInterface : NSObject {
    struct HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > > { 
        struct HashTable<SEL *, WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<SEL *> > { 
            struct KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _allowedArgumentClasses;
    NSString *_identifier;
    Protocol *_protocol;
}

@property (readonly) NSString *identifier;
@property (readonly) Protocol *protocol;

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> { struct RetainPtr<NSSet> {} *x1; unsigned int x2; unsigned int x3; }*)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (id)protocol;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned int)arg3;

@end
