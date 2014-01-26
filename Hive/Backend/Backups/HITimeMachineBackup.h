//
//  HITimeMachineBackup.h
//  SecureOSX
//
//  Created by Jakub Suder on 23.12.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import "HIBackupAdapter.h"

extern NSString * const HITimeMachineBackupError;
extern const NSInteger HITimeMachineBackupDisabled;
extern const NSInteger HITimeMachineBackupPathExcluded;

@interface HITimeMachineBackup : HIBackupAdapter

@end
