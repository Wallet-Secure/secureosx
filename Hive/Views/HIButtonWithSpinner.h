//
//  HIButtonWithSpinner.h
//  SecureOSX
//
//  Created by Jakub Suder on 06.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*
 An NSButton that can show a spinning indicator inside it and disable itself while an action is in progress.
 Used in the "Send" dialog.
 */

@interface HIButtonWithSpinner : NSButton

- (void)showSpinner;
- (void)hideSpinner;
- (NSRect)titleFrame;

@end
