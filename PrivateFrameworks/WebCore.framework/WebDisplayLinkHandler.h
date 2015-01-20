/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
    CADisplayLink *m_displayLink;
    struct DisplayRefreshMonitorIOS { int (**x1)(); unsigned int x2; double x3; boolx4; boolx5; boolx6; int x7; unsigned int x8; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_9_1_1; } x9; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_10_1_1; } x10; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > {} *x11; struct RetainPtr<WebDisplayLinkHandler> { void *x_12_1_1; } x12; } *m_monitor;
}

- (void)dealloc;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS { int (**x1)(); unsigned int x2; double x3; boolx4; boolx5; boolx6; int x7; unsigned int x8; struct Mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_9_1_1; } x9; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_10_1_1; } x10; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::PtrHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > {} *x11; struct RetainPtr<WebDisplayLinkHandler> { void *x_12_1_1; } x12; }*)arg1;
- (void)invalidate;

@end