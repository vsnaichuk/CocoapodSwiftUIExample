//
//  NSDictionary+Utils.h
//  Yoco
//
//  Created by Lungisa Matshoba on 2014/03/17.
//  Copyright (c) 2014 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSDictionary+Utils.h"
#import "NSObject+Utils.h"

@interface NSDictionary (Utils)

-(void) saveToDefaultsWithKey:(NSString*)key;
-(void) saveToSecureDefaultsWithKey:(NSString*)key;
+(NSDictionary*) dictionaryFromDefaultsWithKey:(NSString*)key;
+(NSDictionary*) dictionaryFromSecureDefaultsWithKey:(NSString*)key;

-(NSData*) serialize;
+(NSDictionary*) fromData:(NSData*)data;
+(NSDictionary*) emptyIfNull:(NSDictionary*)dictionary;
-(id)withoutNulls;

-(NSInteger) centsFromDecimalKeyPath:(NSString*)keyPath;

-(BOOL) boolForKey:(NSString*)key withDefault:(BOOL)defaultValue;

-(BOOL) boolForKeyPath:(NSString*)keyPath withDefault:(BOOL)defaultValue;
-(BOOL) boolForKeyPath:(NSString*)keyPath;

-(NSDecimalNumber*)decimalNumberForKey:(NSString*)key;
-(NSDecimalNumber*)decimalNumberForKeyPath:(NSString*)keyPath;

+(NSDictionary*) dictionaryByMerging:(NSDictionary*)dict1 with:(NSDictionary *)dict2;
-(NSDictionary*) dictionaryByMergingWith:(NSDictionary*) dict;

+(NSString*)toJSON:(NSDictionary*)dict;
+(NSDictionary*)fromJSON:(NSString*)json;

-(NSString*)toJSON;

-(void) removeObjectForKeyPath:(NSString*)keyPath;
-(void) setNestedValue:(id)value forKeyPath:(NSString*)keyPath;

@end
