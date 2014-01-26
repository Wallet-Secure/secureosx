//
//  HIApplicationsManager.h
//  SecureOSX
//
//  Created by Jakub Suder on 08.10.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 Manages applications (HIApplication) in the database and on disk.
 */

@interface HIApplicationsManager : NSObject

+ (HIApplicationsManager *)sharedManager;

- (NSURL *)applicationsDirectory;
- (void)installApplication:(NSURL *)applicationURL;
- (BOOL)hasApplicationOfId:(NSString *)applicationId;
- (NSDictionary *)applicationMetadata:(NSURL *)applicationPath;
- (void)preinstallApps;
- (void)rebuildAppsList;

@end
