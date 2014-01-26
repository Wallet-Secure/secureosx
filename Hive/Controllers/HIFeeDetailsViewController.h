//
//  HIFeeDetailsViewController.h
//  SecureOSX
//
//  Created by Nikolaj Schumacher on 2013-11-30.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

/*
 Shows details about the transaction fee.
 */

@interface HIFeeDetailsViewController : NSViewController

@property (nonatomic, assign) satoshi_t fee;
@property (nonatomic, copy) NSString *bitcoinFormat;

@end
