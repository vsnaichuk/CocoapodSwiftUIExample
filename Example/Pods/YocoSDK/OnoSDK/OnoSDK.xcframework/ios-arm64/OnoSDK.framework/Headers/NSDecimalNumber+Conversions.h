//
//  NSDecimalNumber+Conversions.h
//  YOCO
//
//  Created by Andrew Snowden on 2013/10/30.
//  Copyright (c) 2013 JellyWhipStudios. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDecimalNumber (Conversions)

+(NSDecimalNumber*) decimalNumberWithInteger:(NSInteger)integer;
-(NSDecimalNumber*) decimalNumberByMultiplyingByInteger:(NSInteger)integer;

@end
