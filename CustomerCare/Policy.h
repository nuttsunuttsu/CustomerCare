//
//  Policy.h
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Customer;

@interface Policy : NSManagedObject

@property (nonatomic, retain) NSString * policyNo;
@property (nonatomic, retain) NSString * policyStart;
@property (nonatomic, retain) NSString * policyEnd;
@property (nonatomic, retain) NSNumber * primium;
@property (nonatomic, retain) Customer *customer;

@end
