//
//  HITransactionCellView.h
//  SecureOSX
//
//  Created by Jakub Suder on 06.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*
 Table cell view used on the transactions list, shows details of a specific transaction.
 */

@interface HITransactionCellView : NSTableCellView

@property (strong, nonatomic) IBOutlet NSTextField *dateLabel;
@property (strong, nonatomic) IBOutlet NSImageView *directionMark;
@property (strong, nonatomic) IBOutlet NSTextField *pendingLabel;
@property (strong, nonatomic) IBOutlet NSButton *shareButton;

@property (nonatomic, copy) NSAttributedString *shareText;

@end
