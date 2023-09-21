//
//  YCDate.h
//  Yoco
//
//  Created by Kurt Kruger on 2014/03/07.
//  Copyright (c) 2014 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Extensions)

-(NSString*)toString;
-(NSString*)toUTCString;
-(NSString*)toStringWithFormat:(NSString*)format;
+(NSDate*)stringToDate:(NSString*)date;
-(BOOL)isToday;
+(NSDate*)relativeEarliest;
-(NSString*)pretty;
-(NSString*)prettyTime;
-(NSString*)prettyDateTime;
-(NSInteger)daysBetween:(NSDate*)date;

@end
