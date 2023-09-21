//
//  NSError+YCErrorCodes.h
//  YCSdkTest
//
//  Created by Rohan Jansen on 2015/11/26.
//  Copyright © 2015 Rohan Jansen. All rights reserved.
//

#import <Foundation/Foundation.h>

#define YOCO_ERROR_DOMAIN @"za.co.yoco"
#define YOCO_ERROR_CODE_OFFSET 6000

@interface NSError (YCErrorCodes)

typedef enum {
    YCErrorReaderNotAvailable,
    YCErrorReaderNotEnabled,
    YCErrorTransactionDeclined,
    YCErrorTransactionCancelled,
    YCErrorNotAllowedCardPayments,
    YCErrorTutorialsBlocking,
    YCErrorReaderBusy,
    YCErrorReaderBusyUpdatingDisconnectFailed,
    YCErrorReaderBusyUpdating,
    YCErrorMicrophonePermissionDenied,
    YCErrorNoReaders,
    YCErrorReaderBatteryTooLow,
    YCErrorAmountTooSmall,
    YCErrorSwipeDisabled,
    YCErrorNoResponse,
    YCErrorTest
} YCErrorReason;

+(NSString*)errorFromReason:(YCErrorReason)reason;

+(NSError*)errorWithReason:(YCErrorReason)reason;
+(NSError *)errorWithDescription:(NSString*)description andReason:(YCErrorReason)reason;
-(BOOL)isErrorWithReason:(YCErrorReason)reason;

+(NSString*) yocoErrorCode:(YCErrorReason)code;

/**
 An internal description of the error. This is shorter and describes the issue but is not focused on displaying a nice message
 to a user
 */
-(NSString*)internalDescription;

@end
