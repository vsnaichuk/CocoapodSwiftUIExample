//
//  Tag.h
//  tlvParser
//

#import <Foundation/Foundation.h>

@interface SGTag : NSObject
+(BOOL)isValid:(int)byte;
+(BOOL)isConstructed:(int)byte;
+(int)getEncoding:(int)byte;
+(BOOL)isMultiByte:(int)byte;
+(BOOL)isLast:(int)byte;
+(NSString*)getName:(NSString*)tag;
@end
