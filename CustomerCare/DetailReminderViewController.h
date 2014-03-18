//
//  DetailReminderViewController.h
//  CustomerCare
//
//  Created by Maii on 3/18/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailReminderViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *messageLB;
@property (strong, nonatomic) IBOutlet UILabel *reminderStartLB;
@property (strong, nonatomic) IBOutlet UILabel *reminderEnd;
@property (strong, nonatomic) IBOutlet UILabel *repeatLB;
@property (strong, nonatomic) IBOutlet UILabel *reminderTypeLB;

//Policy
@property (strong, nonatomic) IBOutlet UILabel *policyNoLB;
@property (strong, nonatomic) IBOutlet UILabel *primiumLB;
@property (strong, nonatomic) IBOutlet UILabel *policyStartLB;
@property (strong, nonatomic) IBOutlet UILabel *policyEndLB;

@end
