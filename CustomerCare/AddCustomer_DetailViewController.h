//
//  AddCustomer_DetailViewController.h
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AddCustomer_DetailViewController : UIViewController<NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) IBOutlet UITextField *nameTF;
@property (strong, nonatomic) IBOutlet UITextField *lastnameTF;
@property (strong, nonatomic) IBOutlet UITextField *birthdayTF;
@property (strong, nonatomic) IBOutlet UITextField *phoneTF;
@property (strong, nonatomic) IBOutlet UITextField *cusIDTF;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeSeg;
@property (strong, nonatomic) IBOutlet UITextField *relationshipTF;
@property (strong, nonatomic) IBOutlet UITextField *streetTF;
@property (strong, nonatomic) IBOutlet UITextField *amperTF;
@property (strong, nonatomic) IBOutlet UITextField *provinceTF;
@property (strong, nonatomic) IBOutlet UITextField *postcodeTF;
@property (strong, nonatomic) IBOutlet UIButton *imageBtn;


@end
