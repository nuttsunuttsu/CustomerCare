//
//  Reminder.h
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Reminder : NSManagedObject

@property (nonatomic, retain) NSString * message;
@property (nonatomic, retain) NSString * cusid;
@property (nonatomic, retain) NSString * option;
@property (nonatomic, retain) NSString * reminderStart;
@property (nonatomic, retain) NSString * reminderEnd;
@property (nonatomic, retain) NSNumber * repeat;
@property (nonatomic, retain) NSString * reminderType;

@end
