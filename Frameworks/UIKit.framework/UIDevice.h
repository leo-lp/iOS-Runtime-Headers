/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIDevice : NSObject  {
    int _numDeviceOrientationObservers;
    float _batteryLevel;
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
    } _deviceFlags;
}

@property int orientation;
@property(readonly) NSString * buildVersion;
@property(readonly) NSString * name;
@property(readonly) NSString * model;
@property(readonly) NSString * localizedModel;
@property(readonly) NSString * systemName;
@property(readonly) NSString * systemVersion;
@property(readonly) int orientation;
@property(readonly) NSString * uniqueIdentifier;
@property(getter=isGeneratingDeviceOrientationNotifications,readonly) BOOL generatesDeviceOrientationNotifications;
@property(getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property(readonly) int batteryState;
@property(readonly) float batteryLevel;
@property(getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property(readonly) BOOL proximityState;
@property(getter=isMultitaskingSupported,readonly) BOOL multitaskingSupported;
@property(readonly) int userInterfaceIdiom;
@property(setter=_setBacklightLevel:) float _backlightLevel;

+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;
+ (int)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg1;
+ (id)currentDevice;

- (BOOL)_isTTYEnabled;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(int)arg1;
- (float)_softwareDimmingAlpha;
- (void)playInputClick;
- (BOOL)isMultitaskingSupported;
- (BOOL)proximityState;
- (void)_setExpectsFaceContactInLandscape:(BOOL)arg1;
- (float)batteryLevel;
- (int)batteryState;
- (void)setBatteryMonitoringEnabled:(BOOL)arg1;
- (BOOL)isBatteryMonitoringEnabled;
- (id)uniqueIdentifier;
- (id)buildVersion;
- (id)systemVersion;
- (id)systemName;
- (id)localizedModel;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (id)deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_enableDeviceOrientationEvents:(BOOL)arg1;
- (void)_playSystemSound:(unsigned long)arg1;
- (void)setOrientation:(int)arg1;
- (id)model;
- (id)name;
- (void)endGeneratingDeviceOrientationNotifications;
- (void)beginGeneratingDeviceOrientationNotifications;
- (BOOL)isProximityMonitoringEnabled;
- (void)setProximityMonitoringEnabled:(BOOL)arg1;
- (void)_setProximityState:(BOOL)arg1;
- (float)_backlightLevel;
- (void)_setBacklightLevel:(float)arg1;
- (void)setIsWildcat:(BOOL)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)isGeneratingDeviceOrientationNotifications;
- (void)_registerForSystemSounds:(id)arg1;
- (void)_unregisterForSystemSounds:(id)arg1;
- (int)userInterfaceIdiom;
- (BOOL)isWildcat;
- (void)setIsMediaPicker:(BOOL)arg1;
- (BOOL)isMediaPicker;

@end