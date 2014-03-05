//
//  DetailViewController.h
//  CustomerCare
//
//  Created by Maii on 3/5/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
