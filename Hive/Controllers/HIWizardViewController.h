//
//  HIWizardViewController.h
//  SecureOSX
//
//  Created by Nikolaj Schumacher on 2014-01-12.
//  Copyright (c) 2014 SecureOSX Developers. All rights reserved.
//

@protocol HIWizardViewControllerDelegate<NSObject>

- (void)didCompleteWizardPage;

@end

@interface HIWizardViewController : NSViewController

@property (nonatomic, strong) id<HIWizardViewControllerDelegate> wizardDelegate;
@property (nonatomic, strong, readonly) NSResponder *initialFirstResponder;

- (void)viewWillAppear;

@end
