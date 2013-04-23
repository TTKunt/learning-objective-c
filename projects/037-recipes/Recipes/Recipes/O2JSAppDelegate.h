//
//  O2JSAppDelegate.h
//  Recipes
//
//  Created by Volkan Ozcelik on 4/20/13.
//  Copyright (c) 2013 Volkan Ozcelik. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "O2JSRecipesListViewController.h"

@class O2JSViewController;

@interface O2JSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

//@property (strong, nonatomic) O2JSViewController *viewController;

@property (nonatomic, strong) O2JSRecipesListViewController *viewController;
            
@property (copy, nonatomic) NSArray *recipes;

@end
