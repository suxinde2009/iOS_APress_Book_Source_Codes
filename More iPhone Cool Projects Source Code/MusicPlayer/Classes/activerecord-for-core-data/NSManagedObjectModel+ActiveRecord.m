//
//  NSManagedObjectModel+ActiveRecord.m
//  DocBook
//
//  Created by Saul Mora on 3/11/10.
//  Copyright 2010 Willow Tree Mobile, Inc. All rights reserved.
//

#import "NSManagedObjectModel+ActiveRecord.h"

static NSManagedObjectModel *defaultManagedObjectModel = nil;

@implementation NSManagedObjectModel (ActiveRecord)


+ (NSManagedObjectModel *)defaultManagedObjectModel
{
	if (defaultManagedObjectModel == nil)
	{
		defaultManagedObjectModel = [self newManagedObjectModel];
	}
	return defaultManagedObjectModel;
}

+ (void) setDefaultManagedObjectModel:(NSManagedObjectModel *)newDefaultModel
{
	[defaultManagedObjectModel release];
	defaultManagedObjectModel = [newDefaultModel retain];
}

+ (NSManagedObjectModel *) newManagedObjectModel 
{
    return [[NSManagedObjectModel mergedModelFromBundles:nil] retain];    
}

+ (NSManagedObjectModel *) newManagedObjectModelNamed:(NSString *)modelFileName
{
	NSString *path = [[NSBundle mainBundle] pathForResource:modelFileName ofType:@"mom"];
	NSURL *momURL = [NSURL fileURLWithPath:path];
	
	NSManagedObjectModel *model = [[NSManagedObjectModel alloc] initWithContentsOfURL:momURL];
	return model;
}

+ (NSManagedObjectModel *) managedObjectModelNamed:(NSString *)modelFileName
{
	return [[self newManagedObjectModelNamed:modelFileName] autorelease];
}

@end
