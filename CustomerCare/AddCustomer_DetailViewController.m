//
//  AddCustomer_DetailViewController.m
//  CustomerCare
//
//  Created by Maii on 3/13/14.
//  Copyright (c) 2014 NUTTSU. All rights reserved.
//

#import "AddCustomer_DetailViewController.h"

@interface AddCustomer_DetailViewController ()

@end

@implementation AddCustomer_DetailViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    UIBarButtonItem *save = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemSave target:self action:@selector(saveCustomer:)];
    self.navigationItem.rightBarButtonItem = save;
    UIBarButtonItem *close = [[UIBarButtonItem alloc]initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(closeView)];
    self.navigationItem.leftBarButtonItem = close;
    
}

- (void)saveCustomer:(id)sender
{
    
}

- (void)closeView
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
