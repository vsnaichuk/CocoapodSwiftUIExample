//
//  NSNull+IfEmpty.h
//  YocoSDK
//
//  Created by Andrew Snowden on 2016/03/03.
//  Copyright © 2016 Yoco. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNull (IfEmpty)

+(id) valueOrNull:(id)val;

@end
