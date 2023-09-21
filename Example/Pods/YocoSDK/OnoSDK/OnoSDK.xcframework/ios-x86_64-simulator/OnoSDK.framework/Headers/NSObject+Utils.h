//
//  NSObject+Utils.h
//  YocoSDK
//
//  Created by Nkokhelo Mhlongo on 7/20/18.
//  Copyright © 2018 Yoco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Utils)

+(BOOL) isNull:(id)object;
+(BOOL) isNotNull:(id)object;
+(id) valueOrNull:(id)val;

@end
