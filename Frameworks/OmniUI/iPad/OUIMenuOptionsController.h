// Copyright 2010-2011, 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UIViewController.h>

// A single page of menu options.

@class OUIMenuController;

@interface OUIMenuOptionsController : UIViewController

- initWithController:(OUIMenuController *)controller options:(NSArray *)options;

@property(nonatomic,readonly) NSArray *options;
@property(nonatomic,copy) UIColor *tintColor;
@property(nonatomic,assign) BOOL sizesToOptionWidth;
@property(nonatomic,assign) NSTextAlignment textAlignment;
@property(nonatomic,assign) BOOL showsDividersBetweenOptions;
@property(nonatomic,assign) BOOL padTopAndBottom;

@end
