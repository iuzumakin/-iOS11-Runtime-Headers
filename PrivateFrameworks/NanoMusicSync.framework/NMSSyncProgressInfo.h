/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSSyncProgressInfo : NSObject {
    unsigned long long  _aggregateAssetItemBytesAdded;
    NSString * _assetType;
    float  _estimatedSyncProgress;
    long long  _numberOfAssetItems;
    long long  _numberOfAssetItemsNeedingDownload;
    long long  _numberOfAssetItemsSynced;
    unsigned long long  _syncState;
}

@property (nonatomic) unsigned long long aggregateAssetItemBytesAdded;
@property (nonatomic, retain) NSString *assetType;
@property (nonatomic) float estimatedSyncProgress;
@property (nonatomic) long long numberOfAssetItems;
@property (nonatomic) long long numberOfAssetItemsNeedingDownload;
@property (nonatomic) long long numberOfAssetItemsSynced;
@property (nonatomic) unsigned long long syncState;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (void).cxx_destruct;
- (id)_stringFromSyncState:(unsigned long long)arg1;
- (unsigned long long)aggregateAssetItemBytesAdded;
- (id)assetType;
- (id)description;
- (float)estimatedSyncProgress;
- (long long)numberOfAssetItems;
- (long long)numberOfAssetItemsNeedingDownload;
- (long long)numberOfAssetItemsSynced;
- (void)setAggregateAssetItemBytesAdded:(unsigned long long)arg1;
- (void)setAssetType:(id)arg1;
- (void)setEstimatedSyncProgress:(float)arg1;
- (void)setNumberOfAssetItems:(long long)arg1;
- (void)setNumberOfAssetItemsNeedingDownload:(long long)arg1;
- (void)setNumberOfAssetItemsSynced:(long long)arg1;
- (void)setSyncState:(unsigned long long)arg1;
- (unsigned long long)syncState;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

- (id)_percentageProgressText;
- (id)_trackProgressText;

@end
