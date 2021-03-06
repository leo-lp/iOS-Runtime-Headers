/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsCloudKitCodableWorkout : PBCodable <NSCopying> {
    NSString * _bundleID;
    double  _duration;
    double  _goalInCanonicalUnit;
    long long  _goalType;
    struct { 
        unsigned int duration : 1; 
        unsigned int goalInCanonicalUnit : 1; 
        unsigned int goalType : 1; 
        unsigned int totalBasalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int type : 1; 
        unsigned int isIndoorWorkout : 1; 
        unsigned int isWatchWorkout : 1; 
    }  _has;
    BOOL  _isIndoorWorkout;
    BOOL  _isWatchWorkout;
    HDFitnessFriendsCloudKitCodableSample * _sample;
    double  _totalBasalEnergyBurnedInCanonicalUnit;
    double  _totalDistanceInCanonicalUnit;
    double  _totalEnergyBurnedInCanonicalUnit;
    long long  _type;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) double duration;
@property (nonatomic) double goalInCanonicalUnit;
@property (nonatomic) long long goalType;
@property (nonatomic, readonly) BOOL hasBundleID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasGoalInCanonicalUnit;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) BOOL hasIsIndoorWorkout;
@property (nonatomic) BOOL hasIsWatchWorkout;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isIndoorWorkout;
@property (nonatomic) BOOL isWatchWorkout;
@property (nonatomic, retain) HDFitnessFriendsCloudKitCodableSample *sample;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)goalInCanonicalUnit;
- (long long)goalType;
- (BOOL)hasBundleID;
- (BOOL)hasDuration;
- (BOOL)hasGoalInCanonicalUnit;
- (BOOL)hasGoalType;
- (BOOL)hasIsIndoorWorkout;
- (BOOL)hasIsWatchWorkout;
- (BOOL)hasSample;
- (BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
- (BOOL)hasTotalDistanceInCanonicalUnit;
- (BOOL)hasTotalEnergyBurnedInCanonicalUnit;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndoorWorkout;
- (BOOL)isWatchWorkout;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setBundleID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setGoalInCanonicalUnit:(double)arg1;
- (void)setGoalType:(long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasGoalInCanonicalUnit:(BOOL)arg1;
- (void)setHasGoalType:(BOOL)arg1;
- (void)setHasIsIndoorWorkout:(BOOL)arg1;
- (void)setHasIsWatchWorkout:(BOOL)arg1;
- (void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIsIndoorWorkout:(BOOL)arg1;
- (void)setIsWatchWorkout:(BOOL)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalBasalEnergyBurnedInCanonicalUnit;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
