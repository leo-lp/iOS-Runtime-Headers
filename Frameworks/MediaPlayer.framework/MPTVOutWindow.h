/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoView, MPMovieTVHUDView, NPTVOutBackgroundView;

@interface MPTVOutWindow : UIWindow  {
    NPTVOutBackgroundView *_backgroundView;
    MPMovieTVHUDView *_hudView;
    MPVideoView *_videoView;
}


- (BOOL)_setupTargetScreen:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (BOOL)setVideoView:(id)arg1;
- (id)videoView;
- (id)init;
- (void)dealloc;

@end