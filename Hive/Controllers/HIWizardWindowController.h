//
//  HIWizardViewController.h
//  SecureOSX
//
//  Created by Nikolaj Schumacher on 2014-01-12.
//  Copyright (c) 2014 SecureOSX Developers. All rights reserved.
//

/*
 General multi-page wizard.
 */
@interface HIWizardWindowController : NSWindowController

@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, copy) void (^onCompletion)();

@end
