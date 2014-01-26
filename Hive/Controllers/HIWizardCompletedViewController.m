//
//  HIWizardCompletedViewController.m
//  SecureOSX
//
//  Created by Nikolaj Schumacher on 2014-01-19.
//  Copyright (c) 2014 SecureOSX Developers. All rights reserved.
//

#import "HIWizardCompletedViewController.h"

@implementation HIWizardCompletedViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.title = NSLocalizedString(@"Start!", @"Wizard completed page title");
    }
    return self;
}

@end
