/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    float  _bottomPinningProximity;
    EKCalendarDate * _endDate;
    unsigned int  _eventIndex;
    EKCalendarDate * _startDate;
    float  _topPinningProximity;
    double  _travelTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _unPinnedViewFrame;
    EKDayOccurrenceView * _view;
}

@property (nonatomic) float bottomPinningProximity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *end;
@property (nonatomic, copy) EKCalendarDate *endDate;
@property (nonatomic, readonly) float enoughHeightForOneLine;
@property (nonatomic, readonly) EKEvent *event;
@property (nonatomic, readonly) unsigned int eventIndex;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hideTravelTime;
@property (nonatomic, readonly) NSDate *start;
@property (nonatomic, copy) EKCalendarDate *startDate;
@property (nonatomic, readonly, copy) EKCalendarDate *startDateIncludingTravelTime;
@property (nonatomic, readonly) NSDate *startWithTravelTime;
@property (readonly) Class superclass;
@property (nonatomic) float topPinningProximity;
@property (nonatomic) double travelTime;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unPinnedViewFrame;
@property (nonatomic, retain) EKDayOccurrenceView *view;
@property (nonatomic, readonly) float viewMaxNaturalTextHeight;
@property (readonly) BOOL visibleHeightLocked;

+ (float)barToBarHorizontalDistanceIncludingBarWidth;

- (void).cxx_destruct;
- (float)bottomPinningProximity;
- (id)description;
- (id)end;
- (id)endDate;
- (float)enoughHeightForOneLine;
- (id)event;
- (unsigned int)eventIndex;
- (BOOL)hideTravelTime;
- (id)initWithEventIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPinned;
- (void)setBottomPinningProximity:(float)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStartDate:(id)arg1;
- (void)setTopPinningProximity:(float)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeHeight:(float)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setVisibleHeight:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })stagedFrame;
- (id)start;
- (id)startDate;
- (id)startDateIncludingTravelTime;
- (id)startWithTravelTime;
- (float)topPinningProximity;
- (double)travelTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unPinnedViewFrame;
- (id)view;
- (float)viewMaxNaturalTextHeight;
- (BOOL)visibleHeightLocked;

@end
