//
//  HISidebarView.m
//  SecureOSX
//
//  Created by Jakub Suder on 29.08.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import "HISidebarView.h"

@interface HISidebarView () {
    NSColor *backgroundPattern;
}

@end

@implementation HISidebarView

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];

    if (self) {
        backgroundPattern = [NSColor colorWithPatternImage:[NSImage imageNamed:@"bg-sidebar"]];
    }

    return self;
}

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];

    [backgroundPattern setFill];
    NSRectFill(dirtyRect);
}

@end
