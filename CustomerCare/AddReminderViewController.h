//
//  AddReminderViewController.h
//  CustomerCare
//
//  Created by Maii on 3/18/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AddReminderViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *customerBtn;
- (IBAction)getCustomer:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *messageTF;
@property (strong, nonatomic) IBOutlet UITextField *reminderStartTF;
@property (strong, nonatomic) IBOutlet UITextField *reminderEnd;
@property (strong, nonatomic) IBOutlet UISegmentedControl *typeSegment;
@property (strong, nonatomic) IBOutlet UISegmentedControl *repeatSegment;

//Coose Customer from Table View
@property (strong, nonatomic) IBOutlet UIView *chooseCustomerView;
@property (strong, nonatomic) IBOutlet UITableView *customerTableView;
@property (strong, nonatomic) IBOutlet UISearchBar *searchBar;


@end
