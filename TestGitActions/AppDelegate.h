//
//  AppDelegate.h
//  TestGitActions
//
//  Created by Huy Do on 6/9/20.
//  Copyright © 2020 Kryptowire. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (strong, nonatomic) UIWindow *window;

- (void)saveContext;


@end

