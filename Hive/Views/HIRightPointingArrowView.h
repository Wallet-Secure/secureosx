//
//  HIRightPointingArrowView.h
//  SecureOSX
//
//  Created by Jakub Suder on 12.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*
 A "right arrow" separator used in the breadcrumbs view in the window's title bar.
 */

@interface HIRightPointingArrowView : NSView

@property (nonatomic, copy) NSColor *strokeColor;
@property (nonatomic, assign) double strokeWidth;

@end
