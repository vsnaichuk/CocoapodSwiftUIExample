//
//  YCTimeline.h
//  YocoSDK
//
//  Created by Andrew Snowden on 2018/10/07.
//  Copyright © 2018 Yoco. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    YCTimelineEventTypeInfo,
    YCTimelineEventTypeWarn,
    YCTimelineEventTypeError,
    YCTimelineEventTypeSuccess
} YCTimelineEventType;

/**
 * A task that has a start and end date
 */
@interface YCTimelineTask : NSObject

@property NSString* taskName;
@property unsigned long startMillis;
@property unsigned long endMillis;
@property NSDictionary* metadata;

-(id) initWithTaskName:(NSString*)taskName;
-(id) initWithTaskName:(NSString*)taskName withMetadata:(NSDictionary*)metadata;

-(void) stopTask;

-(NSDictionary*) toDictionary;

@end

/**
 * A discrete event that has happened on this timeline
 */
@interface YCTimelineEvent : NSObject

-(id) initWithTitle:(NSString*)title eventType:(YCTimelineEventType)eventType;
-(id) initWithTitle:(NSString*)title eventType:(YCTimelineEventType)eventType metadata:(NSDictionary*)metadata;

@property (nonatomic, retain) NSString* title;
@property (nonatomic, retain) NSString* desc;
@property (nonatomic) YCTimelineEventType eventType;
@property (nonatomic) unsigned long atMillis;
@property (nonatomic, retain) NSDictionary* metadata;

-(NSDictionary*) toDictionary;

@end

/**
 * A timeline that will track start and end times of a number of tasks
 */
@interface YCTimeline : NSObject

@property (nonatomic, retain) NSMutableArray* tasks;
@property (nonatomic, retain) NSMutableArray* events;

-(void) addTimelineEvent:(YCTimelineEvent*)event;

-(YCTimelineTask*) startTask:(NSString*)taskName;
-(YCTimelineTask*) startTask:(NSString*)taskName withMetadata:(NSDictionary*)metadata;

-(YCTimelineTask*) stopTask:(NSString*)taskName;
-(YCTimelineTask*) addTask:(YCTimelineTask*)task;

// Serialize for JSON
-(NSDictionary*) toDictionary;

+(void) addEventToRunningTimelines:(YCTimelineEvent*)event;
+(void) addTaskToRunningTimelines:(YCTimelineTask*)task;

/**
 A task that is identified by a key that will do a decent job of uniquely identifying the task.
 
 This is useful when it's not possible to hold onto a reference of your YCTask - e.g.
 when creating tasks from parsed log messages
 */
+(YCTimelineTask*) addKeyedTask:(NSString*)taskName key:(NSString*)key;
/**
 Get a keyed task if it exists
 */
+(nullable YCTimelineTask*) stopKeyedTask:(NSString*)taskName key:(NSString*)key;

@end



NS_ASSUME_NONNULL_END
