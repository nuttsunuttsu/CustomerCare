//
//  AddCustomer_MasterViewController.h
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "AddCustomer_DetailViewController.h"

@interface AddCustomer_MasterViewController : UITableViewController<NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) AddCustomer_DetailViewController *adddetail;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;



@end
