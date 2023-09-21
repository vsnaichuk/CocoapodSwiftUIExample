//
//  YCTelephony.h
//  YCSdkTest
//
//  Created by Rohan Jansen on 2015/11/20.
//  Copyright © 2015 Rohan Jansen. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <SystemConfiguration/CaptiveNetwork.h>
#import <CoreTelephony/CTCarrier.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>

#include <arpa/inet.h>
#include <net/if.h>
#include <ifaddrs.h>
#include <net/if_dl.h>

int CTGetSignalStrength(void);

@interface YCTelephony : NSObject

@property (nonatomic, strong) NSMutableDictionary* previousDataCounters;
@property (nonatomic, strong) NSMutableDictionary* totalDeltaCounters;
@property (nonatomic, strong) NSMutableDictionary* taskDataCounter;


+(NSString*) getConnectionType;

/**
 Wifi Name or MNO
 */
+(NSString*) connectionProviderName;
/**
 MNO carrier name
 */
+(NSString*) carrierName;
/**
 Wifi SSID name
 */
+(NSString*) wifiSSID;

/**
 Mobile network connection technology
 */
+(NSString*) carrierNetworkType;

+(YCTelephony*) instance;

-(void) clearCounters;
-(NSArray*) dataCounters;
-(void)startDataCounter:(NSString*)task;
-(NSArray*)stopDataCounter:(NSString*)task;
-(int)calculateTotalData:(NSString*)task;
-(int)calculateTotalDataSent:(NSString*)task;
-(int)calculateTotalDataReceived:(NSString*)task;


@end
