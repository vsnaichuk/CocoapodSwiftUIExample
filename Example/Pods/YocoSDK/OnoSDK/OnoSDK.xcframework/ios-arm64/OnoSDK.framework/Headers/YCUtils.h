//
//  YCUtils.h
//  Pods
//
//  Created by Andrew Snowden on 2018/10/28.
//

#ifndef YCUtils_h
#define YCUtils_h

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPHONE4 ([[UIScreen mainScreen] bounds].size.height-568 < 0)
#define IS_IPHONE5 ([[UIScreen mainScreen] bounds].size.height-568 >= 0)
#define IS_IOS_VERSION_GRATERTHAN_OR_EQUALTO(version)  ([[[UIDevice currentDevice] systemVersion] compare:version options:NSNumericSearch] != NSOrderedAscending)

#import "OnoIOSLogger.h"

#import "NSObject+Utils.h"
#import "NSDictionary+Utils.h"
#import "NSArray+Utils.h"
#import "NSString+Utils.h"
#import "NSData+Utils.h"
#import "NSNull+IfEmpty.h"
#import "NSDecimalNumber+Conversions.h"

#import "NSDate+String.h"
//#import "NSError+PrettyError.h"
#import "NSError+YCErrorCodes.h"

#endif /* YCUtils_h */
