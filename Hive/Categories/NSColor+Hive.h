//
//  NSColor+NativeColor.h
//  SecureOSX
//
//  Created by Bazyli Zygan on 11.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSColor (SecureOSX)

+ (NSColor *)hiWindowBackgroundColor;

- (CGColorRef)hiNativeColor;

@end
