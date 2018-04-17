/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMobileNetworkManager : IMNetworkManager <RadiosPreferencesDelegate> {
    int  _applySkipCount;
    void * _cellAssertion;
    NSMutableSet * _cellAutoAssociationTokens;
    struct __CTServerConnection { } * _ctServerConnection;
    bool  _dataContextActive;
    NSRecursiveLock * _lock;
    RadiosPreferences * _radiosPreferences;
    bool  _registered;
    void * _serverConnection;
    bool  _shouldBringUpDataContext;
    NSMutableSet * _wiFiAutoAssociationTokens;
}

@property (nonatomic) int _applySkipCount;
@property (nonatomic) void*_cellAssertion;
@property (nonatomic) struct __CTServerConnection { }*_ctServerConnection;
@property (nonatomic, retain) RadiosPreferences *_radiosPreferences;
@property (nonatomic) void*_serverConnection;
@property (nonatomic, readonly) bool autoAssociateCellular;
@property (nonatomic, readonly) bool autoAssociateWiFi;
@property (nonatomic, retain) NSMutableSet *cellularAutoAssociationTokens;
@property (nonatomic, readonly) bool dataConnectionExists;
@property (nonatomic) bool dataContextActive;
@property (nonatomic, readonly) bool disableFastDormancy;
@property (nonatomic, readonly) bool has2GDataConnection;
@property (nonatomic, readonly) bool hasLTEDataConnection;
@property (nonatomic, readonly) bool inValidSIMState;
@property (nonatomic, readonly) bool isAirplaneModeEnabled;
@property (nonatomic, readonly) bool isDataConnectionActive;
@property (nonatomic, readonly) bool isDataSwitchEnabled;
@property (nonatomic, readonly) bool isHostingWiFiHotSpot;
@property (nonatomic, readonly) bool isSIMLocked;
@property (nonatomic, readonly) bool isSIMRemoved;
@property (nonatomic, readonly) bool isWiFiAssociated;
@property (nonatomic, readonly) bool isWiFiCaptive;
@property (nonatomic, readonly) bool isWiFiEnabled;
@property (nonatomic, readonly) bool isWiFiUsable;
@property (nonatomic, retain) NSRecursiveLock *lock;
@property (nonatomic) bool registered;
@property (nonatomic, readonly) bool requiresSIMInserted;
@property (nonatomic) bool shouldBringUpDataContext;
@property (nonatomic, retain) NSMutableSet *wiFiAutoAssociationTokens;
@property (nonatomic, readonly, retain) NSNumber *wiFiScaledRSSI;
@property (nonatomic, readonly, retain) NSNumber *wiFiScaledRate;
@property (nonatomic, readonly, retain) NSNumber *wiFiSignalStrength;
@property (nonatomic, readonly) bool willTryToAutoAssociateWiFiNetwork;
@property (nonatomic, readonly) bool willTryToSearchForWiFiNetwork;

- (void)_adjustCellularAutoAssociation;
- (int)_applySkipCount;
- (void*)_cellAssertion;
- (void)_createCTServerConnection;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (struct __CTServerConnection { }*)_ctServerConnection;
- (bool)_isDataConnectionAvailable;
- (void)_lockedAdjustCellularAutoAssociation;
- (void)_makeDataConnectionAvailable:(bool)arg1;
- (id)_radiosPreferences;
- (void)_releaseCTServerConnection;
- (void*)_serverConnection;
- (void)addCellularAutoAssociationClientToken:(id)arg1;
- (void)addFastDormancyDisableToken:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)airplaneModeChanged;
- (bool)autoAssociateCellular;
- (bool)autoAssociateWiFi;
- (id)cellularAutoAssociationTokens;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (bool)dataConnectionExists;
- (bool)dataContextActive;
- (void)dealloc;
- (bool)disableFastDormancy;
- (bool)has2GDataConnection;
- (bool)hasLTEDataConnection;
- (bool)inValidSIMState;
- (id)init;
- (bool)isAirplaneModeEnabled;
- (bool)isDataConnectionActive;
- (bool)isDataSwitchEnabled;
- (bool)isHostingWiFiHotSpot;
- (bool)isSIMLocked;
- (bool)isSIMRemoved;
- (bool)isWiFiAssociated;
- (bool)isWiFiCaptive;
- (bool)isWiFiEnabled;
- (bool)isWiFiUsable;
- (id)lock;
- (bool)registered;
- (void)removeCellularAutoAssociationClientToken:(id)arg1;
- (void)removeFastDormancyDisableToken:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (bool)requiresSIMInserted;
- (void)setCellularAutoAssociationTokens:(id)arg1;
- (void)setDataConnectionActive:(bool)arg1;
- (void)setDataContextActive:(bool)arg1;
- (void)setLock:(id)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setShouldBringUpDataContext:(bool)arg1;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (void)set_applySkipCount:(int)arg1;
- (void)set_cellAssertion:(void*)arg1;
- (void)set_ctServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)set_radiosPreferences:(id)arg1;
- (void)set_serverConnection:(void*)arg1;
- (bool)shouldBringUpDataContext;
- (void)showNetworkOptions;
- (void)showSIMUnlock;
- (id)wiFiAutoAssociationTokens;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (bool)willTryToAutoAssociateWiFiNetwork;
- (bool)willTryToSearchForWiFiNetwork;

@end