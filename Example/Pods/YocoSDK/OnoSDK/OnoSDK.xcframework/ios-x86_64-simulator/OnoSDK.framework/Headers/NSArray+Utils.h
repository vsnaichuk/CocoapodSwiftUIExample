//
//  NSArray+Utils.h
//  YocoSDK
//
//  Created by Andrew Snowden on 2016/02/15.
//  Copyright © 2016 Yoco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Utils)

+(BOOL)isEmpty:(id)array;
+(BOOL)isNotEmpty:(id)array;
+(NSArray*) emptyIfNull:(NSArray*)array;
+(NSArray*) arrayFromDefaultsWithKey:(NSString*)key;
+(NSArray*) arrayFromSecureDefaultsWithKey:(NSString*)key;

-(void) saveToDefaultsWithKey:(NSString*)key;
-(void) saveToSecureDefaultsWithKey:(NSString*)key;
-(NSArray *)filter:(BOOL (^)(id obj, NSUInteger idx))block;
-(NSArray *)map:(id (^)(id obj, NSUInteger idx))block;

@end
