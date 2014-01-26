//
//  HISeparatorView.m
//  SecureOSX
//
//  Created by Bazyli Zygan on 02.09.2013.
//  Copyright (c) 2013 SecureOSX Developers. All rights reserved.
//

#import "HISeparatorView.h"
#import "NSColor+SecureOSX.h"

@implementation HISeparatorView

- (void)awakeFromNib {
    self.wantsLayer = YES;
    self.layer.backgroundColor = [RGB(211,211,211) hiNativeColor];
}


@end
