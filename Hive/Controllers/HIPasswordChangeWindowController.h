//
//  HIPasswordChangeWindowController.h
//  SecureOSX
//
//  Created by Nikolaj Schumacher on 2013-12-17.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

@class HIPasswordHolder;

/*
 Implements a window in which you can change your wallet password and re-encrypt it.
 */

@interface HIPasswordChangeWindowController : NSWindowController

- (void)resetInput;

@end
