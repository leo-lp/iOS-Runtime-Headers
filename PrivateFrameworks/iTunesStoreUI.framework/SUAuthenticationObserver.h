/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUAuthenticationDelegate>, NSTimer;

@interface SUAuthenticationObserver : NSObject  {
    <SUAuthenticationDelegate> *_delegate;
    double _timeout;
    NSTimer *_timeoutTimer;
    BOOL _watchingAuthentication;
}

@property <SUAuthenticationDelegate> * delegate;
@property double timeout;
@property(getter=isWatchingForAuthentication,readonly) BOOL watchingForAuthentication;


- (void)setTimeout:(double)arg1;
- (double)timeout;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_sendSuccessToDelegate;
- (void)_sendFailureToDelegate;
- (void)_sendTimeoutToDelegate;
- (void)_cancelTimeoutTimer;
- (void)_authenticationTimeout:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_teardown;
- (void)watchForAuthentication;
- (BOOL)isWatchingForAuthentication;
- (void)stopWatchingForAuthentication;

@end