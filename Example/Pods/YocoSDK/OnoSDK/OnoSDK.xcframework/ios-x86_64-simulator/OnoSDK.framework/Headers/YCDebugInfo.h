//
//  YCDebugInfo.h
//  YocoSDK
//
//  Created by Andrew Snowden on 2018/06/03.
//  Copyright © 2018 Yoco. All rights reserved.
//

#import <Foundation/Foundation.h>

#define debugInfo [YCDebugInfo sharedDebugInfo]

@interface YCDebugInfo : NSObject

/**! Defaultly the version of our current app, can be overwritten when we are in an integration to show the version of the SDK-UI */
@property (nonatomic, retain) NSString* appVersion;

+(YCDebugInfo*) sharedDebugInfo;

/**! Always the version of the main application we are running in */
-(NSString*) hostAppVersion;

-(NSString*) appName;

-(NSString*) sdkVersion;
-(NSString*) mposVersion;

-(NSString*) deviceName;
-(NSString*) deviceMake;
-(NSString*) deviceModel;
-(NSString*) deviceIdentifier;

-(NSString*) osName;
-(NSString*) osVersion;


@end
