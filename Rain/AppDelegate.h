//
//  AppDelegate.h
//  Rain
//
//  Created by 蒋洁强 on 2020/3/31.
//  Copyright © 2020 蒋洁强. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

