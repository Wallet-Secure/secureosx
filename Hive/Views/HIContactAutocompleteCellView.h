//
//  HIContactAutocompleteCellView.h
//  SecureOSX
//
//  Created by Jakub Suder on 20.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*
 Table cell view used in the autocomplete results table in Send window.
 */

@interface HIContactAutocompleteCellView : NSTableCellView

@property (nonatomic, strong) IBOutlet NSTextField *addressLabel;

@end
