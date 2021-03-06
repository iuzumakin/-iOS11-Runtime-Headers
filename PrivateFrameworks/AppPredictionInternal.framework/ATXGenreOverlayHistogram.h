/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXGenreOverlayHistogram : NSObject {
    _ATXAppInfoManager * _appInfoManager;
    NSMutableDictionary * _histogram;
    bool  _isTotalScoreValid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    double  _total;
}

- (void).cxx_destruct;
- (void)addScoreForBundleId:(id)arg1 score:(double)arg2;
- (void)dealloc;
- (double)getScoreForBundleId:(id)arg1;
- (double)getTotalScore;
- (id)initWithAppInfoManager:(id)arg1;

@end
