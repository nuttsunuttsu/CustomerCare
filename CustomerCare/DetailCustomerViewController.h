//
//  DetailCustomerViewController.h
//  CustomerCare
//
//  Created by Maii on 3/17/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailCustomerViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *nameLB;
@property (strong, nonatomic) IBOutlet UILabel *lastnameLB;
@property (strong, nonatomic) IBOutlet UILabel *birthdayLB;
@property (strong, nonatomic) IBOutlet UILabel *phoneLB;
@property (strong, nonatomic) IBOutlet UILabel *cusIDLB;
@property (strong, nonatomic) IBOutlet UILabel *typeLB;
@property (strong, nonatomic) IBOutlet UILabel *relationshipLB;
@property (strong, nonatomic) IBOutlet UILabel *streetLB;
@property (strong, nonatomic) IBOutlet UILabel *provinceLB;
@property (strong, nonatomic) IBOutlet UILabel *amperLB;
@property (strong, nonatomic) IBOutlet UILabel *postcodeLB;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;


@end
