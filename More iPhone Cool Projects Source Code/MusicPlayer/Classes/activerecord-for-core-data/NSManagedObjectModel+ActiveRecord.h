//
//  NSManagedObjectModel+ActiveRecord.h
//  DocBook
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Willow Tree Mobile, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ActiveRecordHelpers.h"

@interface NSManagedObjectModel (ActiveRecord)

+ (NSManagedObjectModel *)defaultManagedObjectModel;
+ (void) setDefaultManagedObjectModel:(NSManagedObjectModel *)newDefaultModel;

+ (NSManagedObjectModel *) newManagedObjectModel;
+ (NSManagedObjectModel *) newManagedObjectModelNamed:(NSString *)modelFileName;
+ (NSManagedObjectModel *) managedObjectModelNamed:(NSString *)modelFileName;

@end
