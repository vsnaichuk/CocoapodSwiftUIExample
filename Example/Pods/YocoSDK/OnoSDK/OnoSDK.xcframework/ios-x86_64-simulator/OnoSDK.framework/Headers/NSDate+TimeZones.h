//
//  NSDate+TimeZones.h
//  Yoco
//
//  Created by Andrew Snowden on 2014/06/02.
//  Copyright (c) 2014 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (TimeZones)

-(NSDate*) toLocalTime;
-(NSDate*) toUTCTime;

@end
