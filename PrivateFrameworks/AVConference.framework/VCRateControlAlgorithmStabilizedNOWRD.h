/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm> {
    unsigned int  _actualSendBitrate;
    int  _basebandAdditionalTiersForRampUp;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    double  _basebandNormalizedBDCD;
    double  _basebandNormalizedQueuingDelay;
    double  _basebandNotificationArrivalTime;
    unsigned int  _basebandTotalQueueDepth;
    bool  _belowNoRampUpBandwidth;
    struct VCRateControlAlgorithmConfig { 
        unsigned int *tierBitrates; 
        int initialTierIndex; 
        int maxTierIndex; 
        int minTierIndex; 
        int lowestNonEmergencyTierIndex; 
        int rampUpTierNumber; 
        int rampDownTierNumber; 
        int rampUpAdditionalTierAtInitial; 
        int rampDownAdditionalTierAtInitial; 
        double rampDownNOWRDThreshold; 
        double rampDownNOWRDAccThreshold; 
        double rampDownAggressiveNOWRDThreshold; 
        double rampDownAggressiveNOWRDAccThreshold; 
        double rampDownConstantOWRDDuration; 
        double rampDownOvershootDuration; 
        double rampDownOvershootNextTierRatio; 
        double rampUpFrozenDuration; 
        double rampUpSettleDuration; 
        double rampUpOWRDThreshold; 
        double rampUpNOWRDThreshold; 
        double rampUpNOWRDAccThreshold; 
        double rampUpOverBandwidthCalmDuration; 
        int rampUpOverBandwidthTierNumber; 
        double rampUpRateLimitedRatio; 
        double unstableRateLimitedDuration; 
        double congestionWaitDuration; 
        double owrdWindowDuration; 
        double owrdShortWindowDuration; 
        double minimumNOWRDTimeDifference; 
        double owrdInitialRampUpReadyDuration; 
        unsigned int owrdHistorySize; 
        unsigned int owrdMininumHistorySize; 
        unsigned int fastRampDownBitrateRange; 
        unsigned int fastRampUpBitrateRange; 
        bool receivedBandwidthEstimationEnabled; 
        int stabilizationScheme; 
        bool basebandAdaptationEnabled; 
        double rampDownNBDCDThreshold; 
        double rampDownAggressiveNBDCDThreshold; 
        double rampDownNormalizedQueuingDelayThreshold; 
        double rampDownMediumQueuingDelayThreshold; 
        double rampDownHighQueuingDelayThreshold; 
        double rampDownEmergencyTierCoolDownTime; 
        double rampUpNBDCDThreshold; 
        double rampUpQueuingDelayThreshold; 
        double rampUpNBDCDCoolDownTime; 
        double rampUpAudioFractionCoolDownTime; 
    }  _config;
    int  _currentTierIndex;
    unsigned short  _echoedTimestamp;
    unsigned int  _fastRampDownBitrateRange;
    double  _firstBelowNoRampUpBandwidthTime;
    double  _inAudioBitrate;
    double  _inVideoBitrate;
    bool  _isCongested;
    bool  _isFirstTimestampArrived;
    bool  _isNewRateSentOut;
    bool  _isOWRDConstant;
    bool  _isOWRDListReady;
    bool  _isOvershoot;
    bool  _isPeriodicLoggingEnabled;
    bool  _isRampUpSettling;
    bool  _isSendBitrateLimited;
    bool  _isStable;
    bool  _isWaitingForBasebandRampDown;
    double  _lastBasebandRampDownTime;
    double  _lastHighNBDCDTime;
    double  _lastNoOvershootBWEstimationTime;
    double  _lastOWRDChangeTime;
    double  _lastPositiveOWRDTime;
    double  _lastRampDownTime;
    unsigned int  _lastRateChangeCounter;
    unsigned int  _localBandwidthEstimation;
    void * _logBasebandDump;
    void * _logDump;
    VCRateControlMediaController * _mediaController;
    unsigned int  _mostBurstLoss;
    unsigned int  _newOWRDSampleCollected;
    double  _nowrd;
    double  _nowrdAcc;
    double  _nowrdShort;
    double  _outAudioBitrate;
    double  _outVideoBitrate;
    double  _owrd;
    struct { 
        double time[100]; 
        double owrd[100]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _owrdList;
    double  _packetLossRate;
    double  _previousNOWRD;
    int  _previousTierIndex;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    int  _rampDownStatus;
    double  _rampUpFrozenTime;
    int  _rampUpStatus;
    unsigned int  _rateChangeCounter;
    double  _rateChangeSystemTime;
    unsigned int  _rateControlCounter;
    double  _rateControlTime;
    unsigned int  _receiveTimestamp;
    unsigned int  _remoteBandwidthEstimation;
    double  _roundTripTime;
    unsigned int  _roundTripTimeTick;
    double  _sendBitrateLimitedStartTime;
    double  _stabilizationTime;
    int  _state;
    unsigned int  _targetBitrate;
    unsigned int  _timestampWrapAroundCounter;
    unsigned int  _totalPacketReceived;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCongested;
@property (nonatomic, readonly) bool isNewRateSentOut;
@property (nonatomic) unsigned int localBandwidthEstimation;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int mostBurstLoss;
@property (nonatomic, readonly) double packetLossRate;
@property (nonatomic, readonly) unsigned int rateChangeCounter;
@property (nonatomic, readonly) double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int targetBitrate;

- (int)basebandAdditionalTiersForRampUp;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (double)calculateNOWRDWithDuration:(double)arg1;
- (void)calculatePacketLossWithReceivedPacketCount:(unsigned short)arg1 packetBurstLoss:(unsigned short)arg2;
- (void)calculateRoundTripTime;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)checkMediaQueueBitrates;
- (void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2;
- (id)className;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; bool x35; int x36; bool x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; })arg1 restartRequired:(bool)arg2;
- (void)dealloc;
- (void)doRateControlWithBasebandStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)doRateControlWithStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)enableBasebandDump:(void*)arg1;
- (void)enableLogDump:(void*)arg1 enablePeriodicLogging:(bool)arg2;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (id)init;
- (bool)isCongested;
- (bool)isNewRateSentOut;
- (bool)keepOvershootingRampDownBandwidth;
- (unsigned int)localBandwidthEstimation;
- (void)logToDumpFilesWithString:(id)arg1;
- (id)mediaController;
- (unsigned int)mostBurstLoss;
- (double)packetLossRate;
- (bool)prepareOWRDList:(double)arg1 time:(double)arg2;
- (void)printRateControlInfoToLogDump;
- (int)rampDownTier;
- (int)rampDownTierDueToBaseband;
- (int)rampUpTier;
- (unsigned int)rateChangeCounter;
- (bool)recentlyGoAboveRampUpBandwidth;
- (void)resetRampingStatus;
- (double)roundTripTime;
- (void)setBitrateUnstable;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(id)arg1;
- (bool)shouldRampDown;
- (bool)shouldRampDownDueToBaseband;
- (bool)shouldRampDownDueToNOWRD;
- (bool)shouldRampDownDueToNOWRDAcc;
- (bool)shouldRampUp;
- (bool)shouldRampUpDueToBaseband;
- (void)stateChangeTo:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (unsigned int)targetBitrate;
- (void)updateInternalStatus;

@end