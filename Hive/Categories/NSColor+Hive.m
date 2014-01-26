//
//  NSColor+NativeColor.m
//  SecureOSX
//
//  Created by Bazyli Zygan on 11.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import "NSColor+SecureOSX.h"

@implementation NSColor (SecureOSX)

+ (NSColor *)hiWindowBackgroundColor {
    return [NSColor colorWithCalibratedWhite:0.94 alpha:1.0];
}

- (CGColorRef)hiNativeColor {
    const NSInteger numberOfComponents = [self numberOfComponents];
    CGFloat components[numberOfComponents];
    CGColorSpaceRef colorSpace = [[self colorSpace] CGColorSpace];
    
    [self getComponents:(CGFloat *)&components];
    
    return (CGColorRef)CGColorCreate(colorSpace, components);
}

@end
