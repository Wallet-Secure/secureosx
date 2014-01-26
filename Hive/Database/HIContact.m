//
//  HIContact.m
//  Hive
//
//  Created by Bazyli Zygan on 18.06.2013.
//  Copyright (c) 2013 Hive Developers. All rights reserved.
//

#import "HIContact.h"
#import "HITransaction.h"

NSString * const HIContactEntity = @"HIContact";


@implementation HIContact

@dynamic account;
@dynamic avatar;
@dynamic email;
@dynamic firstname;
@dynamic lastname;
@dynamic transactions;
@dynamic addresses;

+ (NSSet *)keyPathsForValuesAffectingName {
    return [NSSet setWithObjects:@"firstname", @"lastname", nil];
}

+ (NSSet *)keyPathsForValuesAffectingAvatarImage {
    return [NSSet setWithObject:@"avatar"];
}

- (NSString *)name {
    if (self.firstname.length > 0 && self.lastname.length > 0) {
        return [NSString stringWithFormat:@"%@ %@", self.firstname, self.lastname];
    } else if (self.firstname.length > 0) {
        return self.firstname;
    } else if (self.lastname.length > 0) {
        return self.lastname;
    } else {
        return @"";
    }
}

- (NSImage *)avatarImage {
    if (self.avatar) {
        return [[NSImage alloc] initWithData:self.avatar];
    } else {
        return [NSImage imageNamed:@"avatar-empty"];
    }
}

- (BOOL)canBeRemoved {
    return YES;
}

- (BOOL)canEditAddresses {
    return YES;
}

@end
