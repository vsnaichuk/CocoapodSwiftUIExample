//
//  NSString+Utils.h
//  YCSdkTest
//
//  Created by Andrew Snowden on 2016/01/18.
//  Copyright © 2016 Rohan Jansen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Utils)

+(NSString*) stringWithInt:(NSInteger)integer;

+(NSString*)toBase64:(NSString*)text;
+(NSString*)fromBase64:(NSString*)text;

+(NSString*)emptyIfNil:(NSString*)text;
+(BOOL)isEmpty:(NSString*)text;
+(BOOL)isNotEmpty:(NSString*)text;

+(NSString*)dictSafeString:(NSString*)text;


+(NSString*)stringFromDefaultsWithKey:(NSString*)key;
+(NSString*)stringFromSecureDefaultsWithKey:(NSString*)key;
-(void) saveToDefaultsWithKey:(NSString*)key;
-(void) saveToSecureDefaultsWithKey:(NSString*)key;

+ (NSString *)stringWithUUID;
- (NSString *)URLEncodedString;
- (NSString*)stringByTrimmingLines;
- (NSString *)stringByTrimmingLeadingAndTrailingWhitespaceAndNewlineCharacters;
- (BOOL) isNotEqualToString:(NSString*) thatString;

@end
