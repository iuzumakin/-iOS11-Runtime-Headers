/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCStatisticsCollector : NSObject {
    VCRateControlBandwidthEstimator * _bandwidthEstimator;
    VCStatisticsHistory * _history;
    unsigned int  _mode;
    VCRateControlOWRDEstimator * _owrdEstimator;
    unsigned int  _radioAccessTechnology;
    unsigned int  _sharedEstimatedBandwidth;
    unsigned int  _sharedRemoteEstimatedBandwidth;
    NSMutableDictionary * _statisticChangeHandlerDictionary;
    NSMutableDictionary * _statistics;
    struct tagVCStatisticsCollection { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; BOOL x_1_1_10[64]; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; } x3; struct { bool x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; double x_4_1_4; unsigned int x_4_1_5; } x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; double x_5_1_5; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; double x_6_1_4; } x6; struct { unsigned int x_7_1_1; unsigned int x_7_1_2; double x_7_1_3; } x7; struct { unsigned int x_8_1_1; unsigned int x_8_1_2; double x_8_1_3; } x8; struct { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; } x9; } * _statisticsCollection;
    NSObject<OS_dispatch_queue> * _statisticsCollectorQueue;
}

@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, readonly) unsigned int sharedEstimatedBandwidth;
@property (nonatomic, readonly) unsigned int sharedRemoteEstimatedBandwidth;

- (void)addEntriesFromStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)addPacketLossInfo:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; }*)arg1;
- (bool)addStatisticsHistory:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (void)computeBWEstimation:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; }*)arg1;
- (void)computeOWRDEstimation:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; }*)arg1;
- (void)computeOtherStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; }*)arg1;
- (void)dealloc;
- (id)getStatistics:(id)arg1;
- (id)init;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; }*)arg1;
- (void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(id /* block */)arg2;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setStatistics:(id)arg1;
- (void)setVCStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; } x_3_1_3; struct { bool x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; double x_4_2_4; unsigned int x_4_2_5; } x_3_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; double x_5_2_5; } x_3_1_5; struct { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; double x_6_2_4; } x_3_1_6; struct { unsigned int x_7_2_1; unsigned int x_7_2_2; double x_7_2_3; } x_3_1_7; struct { unsigned int x_8_2_1; unsigned int x_8_2_2; double x_8_2_3; } x_3_1_8; struct { unsigned int x_9_2_1; unsigned int x_9_2_2; unsigned int x_9_2_3; unsigned int x_9_2_4; } x_3_1_9; } x3; })arg1;
- (unsigned int)sharedEstimatedBandwidth;
- (unsigned int)sharedRemoteEstimatedBandwidth;

@end