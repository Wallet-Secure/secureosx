//
//  HIBackupStatusCellView.h
//  SecureOSX
//
//  Created by Jakub Suder on 30.12.13.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface HIBackupStatusCellView : NSTableCellView

@property (nonatomic, strong) IBOutlet NSTextField *statusDetailsLabel;

@end
