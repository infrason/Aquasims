//
//  aquasimsAppDelegate.h
//  aquasims
//
//  Created by Romain Boisseron on 12/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class aquasimsViewController;

@interface aquasimsAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet aquasimsViewController *viewController;

@end
