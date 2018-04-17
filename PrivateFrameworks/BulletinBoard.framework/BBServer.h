/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBServer : NSObject <BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, BBSyncServiceDelegate, NSXPCListenerDelegate> {
    NSMutableArray * _activeBehaviorOverrideTypesChangeAssertionCountSettingsGateways;
    NSMutableArray * _activeBehaviorOverrideTypesChangeClients;
    NSMutableArray * _activeBehaviorOverrideTypesChangeSettingsGateways;
    unsigned long long  _activeBehaviorOverrides;
    unsigned long long  _activeObserverBehaviorOverrideTypes;
    unsigned long long  _activeQuietModeAssertionCount;
    unsigned long long  _activeQuietModeAssertionGatewayCount;
    NSMutableDictionary * _activeSectionIDsByCategory;
    unsigned long long  _activeSettingsGatewayBehaviorOverrideTypes;
    void * _addressBook;
    long long  _behaviorManualOverrideStatus;
    unsigned long long  _behaviorOverrideState;
    long long  _behaviorOverrideStatus;
    NSMutableArray * _behaviorOverrideStatusChangeClients;
    NSDate * _behaviorOverrideStatusEffectiveTime;
    NSArray * _behaviorOverrides;
    NSMutableArray * _behaviorOverridesChangeClients;
    bool  _behaviorOverridesEffectiveWhileUnlocked;
    NSMutableArray * _behaviorOverridesEffectiveWhileUnlockedChangeClients;
    NSObject<OS_dispatch_source> * _behaviorOverridesTimer;
    NSDate * _behaviorOverridesWakeTime;
    BBBiometricResource * _biometricResource;
    NSMutableDictionary * _bulletinIDsBySectionID;
    NSMutableDictionary * _bulletinRequestsByID;
    NSMutableDictionary * _bulletinsByID;
    NSMutableDictionary * _clearedSections;
    NSXPCListener * _conduitListener;
    unsigned long long  _currentSystemState;
    BBDataProviderManager * _dataProviderManager;
    NSDateComponents * _defaultExpirationComponents;
    BBDismissalSyncCache * _dismissalSyncCache;
    bool  _entryFound;
    NSMutableArray * _eventBasedExpiringBulletinIDs;
    NSDateComponents * _expirationReferenceComponents;
    NSObject<OS_dispatch_source> * _expirationTimer;
    NSMutableArray * _expiringBulletinIDs;
    ABFavoritesListManager * _favoritesListManager;
    long long  _globalContentPreviewsSetting;
    unsigned long long  _globalCounter;
    bool  _isRunning;
    NSMutableDictionary * _lastContactTimeForSender;
    NSDate * _nextScheduledExpirationTimerFireDate;
    NSMutableDictionary * _noticeBulletinIDsBySectionID;
    BBMaskedSet * _observerFeedSet;
    NSMutableDictionary * _observerGatewayEnumerators;
    NSMutableArray * _observerGateways;
    NSMutableDictionary * _observerGatewaysByName;
    NSXPCListener * _observerListener;
    NSMutableSet * _observers;
    NSMutableDictionary * _pendingUpdatesByBulletinID;
    NSString * _privilegedAddressBookGroupName;
    int  _privilegedAddressBookGroupRecordID;
    NSMutableArray * _privilegedSenderChangeSettingsGateways;
    bool  _privilegedSenderFilteringNecessary;
    NSMutableArray * _privilegedSenderFilteringStateChangeClients;
    unsigned long long  _privilegedSenderTypes;
    NSMutableArray * _privilegedSenderTypesChangeSettingsGateways;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _quietModeOverrideAssertions;
    NSMutableDictionary * _sectionInfoByID;
    long long  _sectionOrderRule;
    int  _serverIsRunningToken;
    NSMutableSet * _settingsGatewayConnections;
    NSXPCListener * _settingsListener;
    NSMutableDictionary * _sortedSectionIDsByCategory;
    NSMutableSet * _suspendedConnections;
    BBSyncService * _syncService;
    NSMutableSet * _systemStateConnections;
    NSXPCListener * _systemStateListener;
    NSMutableSet * _utilitiesConnections;
    NSXPCListener * _utilitiesListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_behaviorOverridesPath;
+ (id)_clearedSectionsPath;
+ (id)_dataDirectoryPath;
+ (bool)_removeSavedChronologicalSectionInfos:(id)arg1;
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)arg1;
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)arg1;
+ (id)_sectionInfoPath;
+ (id)_sectionOrderPath;
+ (id)_versionedSectionInfoPath;
+ (id)behaviorUtilitiesServerInterface;
+ (void)initialize;
+ (unsigned long long)pairedDeviceCount;
+ (void)removeSavedChronologicalSectionInfo:(id)arg1;
+ (id)savedBehaviorOverrides;
+ (id)savedChronologicalSectionOrder;
+ (id)savedClearedSections;
+ (id)savedLegacyOrderArray;
+ (id)savedOrderDictionary;
+ (id)savedSectionInfo;
+ (void)writeBehaviorOverrides:(id)arg1;
+ (void)writeClearedSections:(id)arg1;
+ (void)writeOrderDictionary:(id)arg1;
+ (void)writeSectionInfo:(id)arg1;
+ (void)writeSectionInfo:(id)arg1 withVersionNumber:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(bool)arg1;
- (unsigned long long)_activeQuietModeAssertionCount;
- (id)_activeSectionIDs;
- (void)_addActiveSectionID:(id)arg1;
- (void)_addBulletin:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_addSettingsGatewayConnection:(id)arg1;
- (void)_addSuspendedConnection:(id)arg1;
- (void)_addSystemStateConnection:(id)arg1;
- (void)_addUtilityConnection:(id)arg1;
- (void*)_addressBook;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2;
- (id)_allBulletinsForSectionID:(id)arg1;
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (unsigned long long)_behaviorOverrideState;
- (void)_behaviorOverrideStatusChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideTypesChangedFromSource:(unsigned long long)arg1;
- (void)_biometricResourceStateChanged;
- (id)_bulletinDefaultExpirationDateFromDate:(id)arg1;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2;
- (bool)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (void)_checkPrivilegedSenderFilteringState;
- (void)_clearBehaviorOverridesTimer;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(bool)arg2;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(bool)arg3;
- (void)_clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 forSection:(id)arg3;
- (void)_clearExpirationTimer;
- (void)_clearSection:(id)arg1;
- (id)_clearedInfoForSectionID:(id)arg1;
- (id)_createQuietModeAssertion;
- (void)_dataProviderDidClearInfo:(id)arg1 forSection:(id)arg2;
- (long long)_defaultGlobalContentPreviewSetting;
- (id)_defaultSectionOrderForTopLevelCollection:(id)arg1;
- (id)_defaultSectionOrders;
- (bool)_deviceSupportsFavorites;
- (void)_didEffectiveSettingsChange:(id)arg1;
- (bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (void)_didReceiveResponseForBulletin:(id)arg1;
- (bool)_doesAddressBookContainDestinationID:(id)arg1;
- (bool)_doesAddressBookPersonContainCallIgnoreMuteForDestinationID:(id)arg1;
- (bool)_doesFavoritesListContainDestinationID:(id)arg1;
- (bool)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (long long)_effectiveGlobalContentPreviewsSetting;
- (id)_effectiveSectionFiltersForBulletin:(id)arg1;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (void)_enqueueBulletinUpdate:(id)arg1;
- (void)_ensureDataDirectoryExists;
- (void)_expireBulletins;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1;
- (id)_favoritesListManager;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (unsigned long long)_filtersForSectionID:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemSleep;
- (void)_handleSystemWake;
- (unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (void)_invalidateAllQuietModeAssertions;
- (bool)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (bool)_isQuietModeAssertActive;
- (void)_loadBehaviorOverrides;
- (void)_loadClearedSections;
- (void)_loadDataProvidersAndSettings;
- (void)_loadSavedSectionInfo;
- (void)_loadSavedSectionOrderAndRule;
- (id)_mapForFeed:(unsigned long long)arg1;
- (void)_migrateContentPreviewSettings:(id)arg1;
- (void)_migrateLoadedData;
- (void)_migratePrivilegedSender;
- (void)_migrateSectionIDs:(id)arg1;
- (void)_migrateSectionInfoIfNeeded;
- (void)_migrateSectionOrder;
- (void)_modifyBulletin:(id)arg1;
- (id)_newDateCompontentsByInvertingInterestingPartsOfComponents:(id)arg1;
- (id)_newValidatedDefaultExpirationComponentsFromComponents:(id)arg1;
- (id)_nextExpireBulletinsDate;
- (void)_noteSystemStateChanged;
- (void)_observeManagedProfileChanges;
- (id)_observerGatewaysForFeeds:(unsigned long long)arg1;
- (id)_observersForNoticesFeed;
- (id)_openApplicationOptionsForResponse:(id)arg1;
- (unsigned long long)_pairedDeviceCount;
- (void)_performPendingBulletinUpdatesForBulletinID:(id)arg1;
- (void)_postBehaviourOverrideStateAWDMetric:(unsigned long long)arg1;
- (void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(bool)arg4;
- (void)_publishBulletinsForAllDataProviders;
- (void)_queue_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (void)_removeActiveSectionID:(id)arg1;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(bool)arg2 shouldSync:(bool)arg3;
- (void)_removeBulletin:(id)arg1 shouldSync:(bool)arg2;
- (void)_removeBulletins:(id)arg1 forSectionID:(id)arg2 shouldSync:(bool)arg3;
- (void)_removeObserver:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_removeSettingsGatewayConnection:(id)arg1;
- (void)_removeSuspendedConnection:(id)arg1;
- (void)_removeSystemStateConnection:(id)arg1;
- (void)_removeUtilityConnection:(id)arg1;
- (void)_removeVestigialSections:(id)arg1;
- (void)_resumeAllSuspendedConnectionsWithCompletionHandler:(id /* block */)arg1;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_scheduleTimerForDate:(id)arg1;
- (bool)_sectionFiltersAllowBulletin:(id)arg1;
- (id)_sectionIDsToMigrate;
- (id)_sectionInfoArray:(bool)arg1;
- (id)_sectionInfoArrayForActiveSections:(bool)arg1;
- (id)_sectionInfoArrayForSectionIDs:(id)arg1 effective:(bool)arg2;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(bool)arg2;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendBulletinUpdate:(id)arg1;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendObserver:(id)arg1 noticesBulletinsForSectionID:(id)arg2;
- (void)_sendObseversActiveOverrideTypes:(unsigned long long)arg1 state:(unsigned long long)arg2;
- (void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3;
- (void)_sendRemoveSection:(id)arg1;
- (void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_sendSettingsGatewaysActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
- (void)_sendUpdateSectionInfo:(id)arg1;
- (void)_sendUpdateSectionOrder;
- (void)_sendUpdateSectionOrderRule;
- (void)_sendUtilitiesActiveOverrideTypes:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;
- (void)_setBehaviorOverridesTimer;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setDefaultExpirationComponents:(id)arg1;
- (void)_setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfoNoteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (id)_sinceDate;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (id)_sortedSectionIDs;
- (void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)_unobserveManagedProfileChanges;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updateAllSectionInfos;
- (void)_updateBehaviorOverridesFromSource:(unsigned long long)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(id /* block */)arg2;
- (void)_updateDataProviderForSectionInfo:(id)arg1 sectionID:(id)arg2;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(id /* block */)arg2;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;
- (void)_validateExpirationDateForBulletinRequest:(id)arg1;
- (bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_writeBehaviorOverrides;
- (void)_writeClearedSections;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2;
- (id)bulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2;
- (id)bulletinsRequestsForBulletinIDs:(id)arg1;
- (id)carBulletinIDsForSectionID:(id)arg1;
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(bool)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)dealloc;
- (unsigned long long)defaultPrivilegedSenderType;
- (void)deliverResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (void)dpManager:(id)arg1 addParentSectionFactory:(id)arg2;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1;
- (void)getAspectRatioForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id /* block */)arg1;
- (void)getBehaviorOverridesEnabledAndEffectiveDateWithHandler:(id /* block */)arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(id /* block */)arg1;
- (void)getBehaviorOverridesWithHandler:(id /* block */)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getBulletinsWithHandler:(id /* block */)arg1;
- (void)getDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 withHandler:(id /* block */)arg4;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(id /* block */)arg1;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getPNGDataForAttachmentUUID:(id)arg1 bulletinID:(id)arg2 isPrimary:(bool)arg3 sizeConstraints:(id)arg4 withHandler:(id /* block */)arg5;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id /* block */)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id /* block */)arg1;
- (void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithHandler:(id /* block */)arg1;
- (void)getSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getSectionInfoWithHandler:(id /* block */)arg1;
- (void)getSectionOrderRuleWithHandler:(id /* block */)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(id /* block */)arg3;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 dataProviderManager:(id)arg2 syncService:(id)arg3 dismissalSyncCache:(id)arg4 observerListener:(id)arg5 utilitiesListener:(id)arg6 conduitListener:(id)arg7 systemStateListener:(id)arg8 settingsListener:(id)arg9;
- (bool)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2;
- (bool)isRunning;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadDataProvidersAndSettings;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(bool)arg2;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearBulletinsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id /* block */)arg2;
- (void)observer:(id)arg1 getSectionInfoForActiveSectionsWithHandler:(id /* block */)arg2;
- (void)observer:(id)arg1 getSectionInfoForSectionIDs:(id)arg2 withHandler:(id /* block */)arg3;
- (void)observer:(id)arg1 getSectionInfoWithHandler:(id /* block */)arg2;
- (void)observer:(id)arg1 handleResponse:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3;
- (void)ping:(id /* block */)arg1;
- (unsigned long long)privilegedSenderTypes;
- (void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3;
- (void)requestNoticesBulletinsForAllSections:(id)arg1;
- (void)requestQuietModeOverrideAssertionWithCompletion:(id /* block */)arg1;
- (id)sectionIDForUniversalSectionID:(id)arg1;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeAssertionCountUpdatesEnabled:(bool)arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 effectiveDate:(id)arg2 source:(unsigned long long)arg3;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(bool)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(bool)arg1;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(bool)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(bool)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(id /* block */)arg3;
- (void)setSectionOrderRule:(long long)arg1;
- (bool)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
- (id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2;
- (bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id /* block */)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(bool)arg2;
- (void)withdrawBulletinID:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;

@end