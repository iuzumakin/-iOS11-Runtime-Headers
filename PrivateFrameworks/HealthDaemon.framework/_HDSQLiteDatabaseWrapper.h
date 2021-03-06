/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDSQLiteDatabaseWrapper : NSObject {
    HDSQLiteDatabase * _database;
    unsigned long long  _generation;
    unsigned long long  _threadID;
    long long  _type;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)captureThreadInfo;
- (id)database;
- (unsigned long long)generation;
- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;
- (void)setType:(long long)arg1;
- (unsigned long long)threadID;
- (long long)type;
- (id)typeString;

@end
