//
//  YCLogger.h
//  Yoco
//
//  Created by Andrew Snowden on 2015/01/07.
//  Copyright (c) 2015 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    YCLogLevelTrace = 0,
    YCLogLevelDebug = 1,
    YCLogLevelInfo = 2,
    YCLogLevelWarn = 3,
    YCLogLevelError = 4,
} YCLogLevel;

@interface OnoIOSLogger : NSObject

@property NSTimeInterval logRetentionInterval;
@property BOOL automaticallyUploadLogs;

+(nonnull OnoIOSLogger*) sharedLogger;
-(nullable NSMutableDictionary*) globalMetaData;

-(void) logMessage:(NSInteger)logLevel message:(nonnull NSString*)message metadata:(nullable NSDictionary*)metadata component:(nullable NSString*)component;
-(BOOL) uploadLogFile:(nonnull NSString*)clientBillIdentifier logLevel:(NSInteger)logLevel excludeComponents:(nullable NSArray*)excludeComponents;
-(BOOL) uploadLogFile:(nonnull NSString*)clientBillIdentifier logLevel:(NSInteger)logLevel excludeComponents:(nullable NSArray*)excludeComponents completeCallback:(nullable void (^)(void))completeCallback;

-(BOOL) uploadCurrentLogFile;
-(BOOL) uploadCurrentLogFile:(YCLogLevel)logLevel;
-(BOOL) uploadCurrentLogFileExcludeComponents:(nullable NSArray*)excludeComponents;

-(BOOL) checkLogExists:(nonnull NSString*)clientBillIdentifier;

-(void) uploadLogsInRange:(nonnull NSDate*)startDate endDate:(nonnull NSDate*)endDate logLevel:(NSInteger)logLevel;
-(void) setMetaValue:(nonnull id)value forKey:(nonnull NSString*)key;
-(void) setClientBillIdentifier:(nonnull NSString*)clientBillIdentifier;

-(void) logMessageIfChanged:(nonnull NSString*)category logLevel:(NSInteger)logLevel message:(nonnull NSString*)message metadata:(nullable NSDictionary*)metadata component:(nullable NSString*)component;

-(void) linkPreFirstTransactionLogsTo:(nonnull NSString*)clientBillIdentifier;
-(NSString*_Nullable) currentClientBillIdentifier;

-(void) clearAll;

@end

#define OnoLogDebug(format_string,...) [[OnoIOSLogger sharedLogger] logMessage:YCLogLevelDebug message:[NSString stringWithFormat:format_string,##__VA_ARGS__] metadata:nil component:@"onoSDK"]; NSLog([@"[DEBUG] " stringByAppendingString:format_string],##__VA_ARGS__)

#define OnoLogInfo(format_string,...) [[OnoIOSLogger sharedLogger] logMessage:YCLogLevelInfo message:[NSString stringWithFormat:format_string,##__VA_ARGS__] metadata:nil component:@"onoSDK"]; NSLog([@"[INFO] " stringByAppendingString:format_string],##__VA_ARGS__)

#define OnoLogWarn(format_string,...) [[OnoIOSLogger sharedLogger] logMessage:YCLogLevelWarn message:[NSString stringWithFormat:format_string,##__VA_ARGS__] metadata:nil component:@"onoSDK"]; NSLog([@"[WARN] " stringByAppendingString:format_string],##__VA_ARGS__)

#define OnoLogError(format_string,...) [[OnoIOSLogger sharedLogger] logMessage:YCLogLevelError message:[NSString stringWithFormat:format_string,##__VA_ARGS__] metadata:nil component:@"onoSDK"]; NSLog([@"[ERROR] " stringByAppendingString:format_string],##__VA_ARGS__)
