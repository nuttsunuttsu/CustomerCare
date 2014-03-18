//
//  Customer.h
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Customer : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * lastname;
@property (nonatomic, retain) NSString * birthday;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) NSString * relationship;
@property (nonatomic, retain) NSString * cusid;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSString * amper;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * postcode;
@property (nonatomic, retain) NSString * phone;

@property (nonatomic, retain) NSDate * timeStamp;

@property (nonatomic, retain) NSManagedObject *policy;

@end
