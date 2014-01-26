//
//  HINewContactViewController.h
//  Hive
//
//  Created by Bazyli Zygan on 02.09.2013.
//  Copyright (c) 2013 Hive Developers. All rights reserved.
//

#import "HIBox.h"
#import "HIContact.h"
#import "HITextField.h"
#import "HIViewController.h"

/*
 The contact edit form used for adding and editing contacts. Also handles editing of the user's profile if
 an HIProfile object is passed in place of a contact.
 */

@interface HINewContactViewController : HIViewController

@property (strong) IBOutlet HITextField *firstnameField;
@property (strong) IBOutlet HITextField *lastnameField;
@property (strong) IBOutlet HITextField *emailField;
@property (strong) IBOutlet NSView *scrollContent;
@property (weak) IBOutlet HIBox *walletsView;
@property (weak) IBOutlet NSScrollView *scrollView;
@property (weak) IBOutlet NSView *footerView;
@property (weak) IBOutlet NSButton *addAddressButton;
@property (weak) IBOutlet NSButton *removeContactButton;

@property (strong) id<HIPerson> contact;

@property (strong) IBOutlet NSImageView *avatarView;

- (IBAction)doneClicked:(NSButton *)sender;
- (IBAction)removeContactClicked:(NSButton *)sender;
- (IBAction)addAddressClicked:(NSButton *)sender;
- (IBAction)avatarChanged:(id)sender;

@end
