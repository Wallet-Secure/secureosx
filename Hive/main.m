//
//  main.m
//  SecureOSX
//
//  Created by Bazyli Zygan on 11.06.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

void migratePreferences();

int main(int argc, char *argv[]) {
    migratePreferences();
    return NSApplicationMain(argc, (const char **)argv);
}

void migratePreferences() {
    NSFileManager *fileManager = [NSFileManager defaultManager];
    NSURL *libraryDir = [fileManager URLsForDirectory:NSLibraryDirectory inDomains:NSUserDomainMask][0];
    NSURL *preferencesDir = [libraryDir URLByAppendingPathComponent:@"Preferences"];
    NSURL *oldPreferences = [preferencesDir URLByAppendingPathComponent:@"com.grabSecureOSX.SecureOSX.plist"];
    NSURL *newPreferences = [preferencesDir URLByAppendingPathComponent:@"com.SecureOSXwallet.SecureOSX.plist"];

    if ([fileManager fileExistsAtPath:oldPreferences.path] && ![fileManager fileExistsAtPath:newPreferences.path]) {
        NSError *error = nil;

        [fileManager moveItemAtURL:oldPreferences toURL:newPreferences error:&error];

        if (error) {
            NSLog(@"Could not migrate preferences from %@ to %@: %@.", oldPreferences, newPreferences, error);
        }
    }
}
