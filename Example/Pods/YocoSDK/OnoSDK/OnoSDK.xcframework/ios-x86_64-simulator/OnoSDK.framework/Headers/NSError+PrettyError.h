//
//  NSError+PrettyError.h
//  Yoco
//
//  Created by Lungisa Matshoba on 2014/08/12.
//  Copyright (c) 2014 Yoco Technologies (PTY) LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (PrettyError)

-(NSError*)prettyError;
-(NSString*)prettyLocalizedDescription;
-(NSString*)infoString;
-(NSError*) withLocalizedDescription:(NSString*)localizedDescription;
-(NSError *)withLocalizedDescription:(NSString *)localizedDescription andCode:(NSInteger)code;
-(NSString*)prettyLocalizedDescriptionAndInfo;
-(BOOL) isPayworksError;
    
//+(NSString*)mposErrorCode:(MPErrorType)code;
-(NSString*)errorCodeString;

@end
