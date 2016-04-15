//
//  AppDelegate.h
//  GATextFieldDemo
//
//  Created by wzzyinqiang on 16/4/15.
//  Copyright © 2016年 wzzyinqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

+ (NSString*)calculateWith_left_number:(NSString*)left_number operator_number :(NSInteger)operator_number right_number:(NSString*)right_number;


@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

