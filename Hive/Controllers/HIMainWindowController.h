//
//  HIMainWindowController.h
//  SecureOSX
//
//  Created by Bazyli Zygan on 12.06.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <INAppStoreWindow/INAppStoreWindow.h>
#import "HISidebarController.h"
#import "HIViewController.h"

/*
 Manages the main SecureOSX window, switching between tabs using sidebar buttons etc.
 */

@interface HIMainWindowController : NSWindowController <HISidebarControllerDelegate>

@property (strong) IBOutlet NSView *contentView;
@property (strong) IBOutlet NSButton *sendButton;
@property (strong) IBOutlet HISidebarController *sidebarController;

- (void)switchToPanel:(Class)panelClass;
- (void)presentModalViewController:(HIViewController *)controller animated:(BOOL)animated;
- (void)dismissModalViewControllerAnimated:(BOOL)animated;

@end
