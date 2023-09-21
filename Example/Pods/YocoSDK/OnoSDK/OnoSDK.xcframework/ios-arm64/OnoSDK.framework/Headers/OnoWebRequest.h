//
//  OnoWebRequest.h
//  Yoco
//
//  Created by Andrew Snowden on 2015/08/08.
//  Copyright (c) 2020 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

#define HEADER_APP_VERSION @"YC-Data-AppVersion"
#define HEADER_SDK_VERSION @"YC-Data-SDKVersion"
#define HEADER_MPOS_VERSION @"YC-Data-MposVersion"
#define HEADER_HOST_APP_VERSION @"YC-Data-HostAppVersion" // We are in an integration, this is the host app's version number
#define HEADER_MODEL @"YC-Data-Model"
#define HEADER_MAKE @"YC-Data-Make"
#define HEADER_OS_NAME @"YC-Data-OsName"
#define HEADER_OS_VERSION @"YC-Data-OsVersion"
#define HEADER_DEVICE_IDENTIFIER @"YC-Data-DeviceIdentifier"

@interface OnoWebRequest : NSObject<NSCoding>

@property (nonatomic, retain) NSString* webRequestUUID;

@property (nonatomic, retain) NSString* baseURL;
@property (nonatomic, retain) NSString* endPoint;
@property (nonatomic, retain) NSString* requestPath;
@property (nonatomic, retain) NSString* method;


@property (nonatomic, retain) NSArray<NSString*>* excludeHeaderKeys;
@property (nonatomic, retain) NSDictionary* queryParameters;
@property (nonatomic, retain) NSDictionary* customHeaders;
@property (nonatomic, retain) id jsonBody;

@property (nonatomic) BOOL shouldRetry;
@property (nonatomic) BOOL shouldIncludeSystemInfoHeaders;

@property (nonatomic, retain) NSMutableArray* multipartFiles;

@property (nonatomic, retain) NSMutableURLRequest* urlRequest;
@property (nonatomic, retain) NSMutableDictionary* headers;

@property (nonatomic, retain) NSString* successNotificationId;
@property (nonatomic, retain) NSString* failureNotificationId;

@property (nonatomic, retain) NSDate *firstExecuted;
@property (nonatomic, retain) NSDate *lastExecuted;

@property (nonatomic, assign) NSInteger retryCount;
@property (nonatomic, assign) NSInteger maxRetries;

-(OnoWebRequest*) withQueryParameters:(NSDictionary*)parameters;
-(OnoWebRequest*) withJSONBody:(NSDictionary*)parameters;
-(OnoWebRequest*) withEndPoint:(NSString*)endPoint;
-(OnoWebRequest*) withRetries:(BOOL)shouldRetry;
-(OnoWebRequest*) withBaseURLAndPath:(NSString*) baseURL path:(NSString*) path;
-(OnoWebRequest*) withFile:(NSString*)fieldName filename:(NSString*)filename andData:(NSData*)data contentType:(NSString*)contentType;
-(OnoWebRequest*) withSuccessNotification:(NSString *)sId;
-(OnoWebRequest*) withFailureNotification:(NSString *)sId;
-(OnoWebRequest*) withCustomHeaders:(NSDictionary*)customHeaders;
-(OnoWebRequest*) withHeaderExclusion:(NSArray<NSString*>*) excludedHeadersWithKeys shouldIncludeSystemInfoHeaders:(BOOL)shouldIncludeSystemInfoHeaders;

-(OnoWebRequest*) get:(void (^)(NSInteger statusCode, NSData* data))success failure:(void (^)(NSInteger statusCode, NSError *error, NSData* data))failure;
-(OnoWebRequest*) post:(void (^)(NSInteger statusCode, NSData* data))success failure:(void (^)(NSInteger statusCode, NSError *error, NSData* data))failure;
-(OnoWebRequest*) del:(void (^)(NSInteger statusCode, NSData* data))success failure:(void (^)(NSInteger statusCode, NSError *error, NSData* data))failure;

-(OnoWebRequest *)executeAttempt:(void (^)(NSInteger statusCode, NSData* data))success failure:(void (^)(NSInteger statusCode, NSError *error, NSData* data))failure;

+(void) setup;
+(OnoWebRequest*) requestWithPath:(NSString*)path;
+(void) setDefaultHeader:(NSString *)value forKey:(NSString *)key;
+(NSDictionary*) defaultHeaders;
+(void) setBaseURL:(NSString*)newBaseURL;

@end
