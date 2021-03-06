/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerSecondPass : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSKeywordAnalyzerQuasarScoreDelegate, CSSpeakerDetectorNDAPIDelegate, CSSpeechManagerDelegate, CSVoiceTriggerFirstPassDelegate> {
    unsigned long long  _activeChannel;
    CSAsset * _currentAsset;
    <CSVoiceTriggerDelegate> * _delegate;
    unsigned long long  _earlyDetectFiredMachTime;
    unsigned long long  _extraSamplesAtStart;
    bool  _hasPendingNearMiss;
    bool  _isRunningRecognizer;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzerNDAPI;
    CSKeywordAnalyzerQuasar * _keywordAnalyzerQuasar;
    float  _keywordLoggingThreshold;
    float  _keywordThreshold;
    NSDictionary * _lastAnalyzerResult;
    float  _lastScore;
    unsigned long long  _nearMissCandidateDetectedSamples;
    unsigned long long  _nearMissDelayTimeout;
    unsigned long long  _numAnalyzedSamples;
    long long  _numBypassSamples;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _recognizerResultPending;
    float  _recognizerScore;
    float  _recognizerScoreScaleFactor;
    unsigned long long  _secondPassTimeout;
    CSSpeakerDetectorNDAPI * _speakerDetector;
    CSSpeakerModel * _speakerModel;
    CSSpeechManager * _speechManager;
    bool  _useSAT;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSVoiceTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long earlyDetectFiredMachTime;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) bool hasPendingNearMiss;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRunningRecognizer;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (nonatomic, retain) CSKeywordAnalyzerQuasar *keywordAnalyzerQuasar;
@property (nonatomic) float keywordLoggingThreshold;
@property (nonatomic) float keywordThreshold;
@property (nonatomic, retain) NSDictionary *lastAnalyzerResult;
@property (nonatomic) float lastScore;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long numAnalyzedSamples;
@property (nonatomic) long long numBypassSamples;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool recognizerResultPending;
@property (nonatomic) float recognizerScore;
@property (nonatomic) float recognizerScoreScaleFactor;
@property (nonatomic) unsigned long long secondPassTimeout;
@property (nonatomic, retain) CSSpeakerDetectorNDAPI *speakerDetector;
@property (nonatomic, retain) CSSpeakerModel *speakerModel;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;
@property (nonatomic) bool useSAT;

- (void).cxx_destruct;
- (void)_analyzeForKeywordDetection:(id)arg1 result:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_notifySecondPassReject;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (unsigned long long)activeChannel;
- (id)currentAsset;
- (id)delegate;
- (unsigned long long)earlyDetectFiredMachTime;
- (unsigned long long)extraSamplesAtStart;
- (bool)hasPendingNearMiss;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (bool)isRunningRecognizer;
- (id)keywordAnalyzerNDAPI;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)keywordAnalyzerQuasar;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordLoggingThreshold;
- (float)keywordThreshold;
- (id)lastAnalyzerResult;
- (float)lastScore;
- (unsigned long long)nearMissCandidateDetectedSamples;
- (unsigned long long)nearMissDelayTimeout;
- (unsigned long long)numAnalyzedSamples;
- (long long)numBypassSamples;
- (id)queue;
- (bool)recognizerResultPending;
- (float)recognizerScore;
- (float)recognizerScoreScaleFactor;
- (void)reset;
- (unsigned long long)secondPassTimeout;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setAsset:(id)arg1;
- (void)setBypassForSeconds:(double)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEarlyDetectFiredMachTime:(unsigned long long)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setHasPendingNearMiss:(bool)arg1;
- (void)setIsRunningRecognizer:(bool)arg1;
- (void)setKeywordAnalyzerNDAPI:(id)arg1;
- (void)setKeywordAnalyzerQuasar:(id)arg1;
- (void)setKeywordLoggingThreshold:(float)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setLastAnalyzerResult:(id)arg1;
- (void)setLastScore:(float)arg1;
- (void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1;
- (void)setNearMissDelayTimeout:(unsigned long long)arg1;
- (void)setNumAnalyzedSamples:(unsigned long long)arg1;
- (void)setNumBypassSamples:(long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecognizerResultPending:(bool)arg1;
- (void)setRecognizerScore:(float)arg1;
- (void)setRecognizerScoreScaleFactor:(float)arg1;
- (void)setSecondPassTimeout:(unsigned long long)arg1;
- (void)setSpeakerDetector:(id)arg1;
- (void)setSpeakerModel:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setUseSAT:(bool)arg1;
- (id)speakerDetector;
- (void)speakerDetector:(id)arg1 didDetectSpeaker:(id)arg2;
- (void)speakerDetector:(id)arg1 didDetectSpeakerReject:(id)arg2;
- (id)speakerModel;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (bool)useSAT;
- (void)voiceTriggerFirstPass:(id)arg1 didDetectKeyword:(id)arg2;

@end
