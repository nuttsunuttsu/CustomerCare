//
//  MasterViewController.h
//  CustomerCare
//
//  Created by Maii on 3/5/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddCustomer_DetailViewController.h"
@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) AddCustomer_DetailViewController *addDetail;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;



@end
