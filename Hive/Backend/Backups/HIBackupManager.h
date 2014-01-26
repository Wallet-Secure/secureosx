//
//  HIBackupManager.h
//  SecureOSX
//
//  Created by Jakub Suder on 23.12.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIBackupManager : NSObject

@property (readonly) NSArray *adapters;

+ (HIBackupManager *)sharedManager;
- (void)initializeAdapters;
- (void)performBackups;

@end
