//
//  OnoRetryHandler.h
//  Yoco
//
//  Created by Kurt Kruger on 2015/04/22.
//  Copyright (c) 2015 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import "OnoWebRequest.h"

@interface OnoRetryHandler : NSObject

@property(atomic) BOOL isProcessing;
@property(nonatomic) BOOL shouldPerformRetries;

+(OnoRetryHandler*) instance;
-(void)addRequest:(OnoWebRequest *)request;
-(void)addRequest:(OnoWebRequest*)request success:(void (^)(NSInteger statusCode, NSData* data))success failure:(void (^)(NSInteger statusCode, NSError *error, NSData* data))failure;

@end

