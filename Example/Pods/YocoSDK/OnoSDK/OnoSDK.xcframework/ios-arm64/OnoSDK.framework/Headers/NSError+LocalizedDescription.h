//
//  NSError+LocalizedDescription.h
//  Yoco
//
//  Created by Kurt Kruger on 2014/11/06.
//  Copyright (c) 2014 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (LocalizedDescription)

-(NSError*)replaceLocalizedDescription:(NSString*)message;

@end
