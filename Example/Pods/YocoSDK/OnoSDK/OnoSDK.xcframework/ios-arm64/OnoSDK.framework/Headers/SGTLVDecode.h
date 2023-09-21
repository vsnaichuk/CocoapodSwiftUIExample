//
//  SGTLVParser.h
//  tlvParser
//

#import <Foundation/Foundation.h>

@interface SGTLVDecode : NSObject

+ (NSString*)hexToString:(NSString*)str;
+ (int)hexToInt:(NSString*)hex;

+ (NSDictionary*)decodeWithString:(NSString*)tlv;
@end
