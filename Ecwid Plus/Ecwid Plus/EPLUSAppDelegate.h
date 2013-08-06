//
//  EPLUSAppDelegate.h
//  Ecwid Plus
//
//  Created by Ceili Cornelison on 8/6/13.
//  Copyright (c) 2013 ceili. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EPLUSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
