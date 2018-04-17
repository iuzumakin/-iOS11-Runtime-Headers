/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICFPLeaseSyncSession : NSObject {
    unsigned long long  _accountID;
    struct FPLeaseSyncOpaque_ { } * _fpLeaseSync;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    id  _leaseID;
    unsigned int  _mediaKind;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) id leaseID;
@property (nonatomic, readonly) unsigned int mediaKind;

+ (id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned int)arg3 returningLeaseSyncRequestData:(id*)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)_initWithFPLeaseSync:(struct FPLeaseSyncOpaque_ { }*)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; })arg4 mediaKind:(unsigned int)arg5;
- (unsigned long long)accountID;
- (bool)endLeaseSyncAndReturnError:(id*)arg1;
- (bool)getLeaseSyncRenewRequestData:(id*)arg1 error:(id*)arg2;
- (bool)importLeaseSyncResponseData:(id)arg1 error:(id*)arg2;
- (id)leaseID;
- (unsigned int)mediaKind;
- (bool)processRenewResponseData:(id)arg1 error:(id*)arg2;

@end