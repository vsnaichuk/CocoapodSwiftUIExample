//
//  SGLength.h
//  tlvParser
//

#import <Foundation/Foundation.h>

@interface SGLength : NSObject
+(BOOL)isValid:(int)byte;
+(int)getLength:(int)byte;
+(BOOL)isMultiByte:(int)byte;
@end
