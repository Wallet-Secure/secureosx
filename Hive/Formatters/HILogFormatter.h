//
//  HILogFormatter.h
//  SecureOSX
//
//  Created by Jakub Suder on 18.12.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <CocoaLumberjack/DDLog.h>
#import <Foundation/Foundation.h>

/*
 Implementation of a CocoaLumberjack log formatter used for formatting log entries for the file in ~/Library/Logs
 and the Xcode debugging window.
 */

@interface HILogFormatter : NSObject <DDLogFormatter>

@end
