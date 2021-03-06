//
//  CARDBase.h
//  Freshpod
//
//  Created by Saul Mora on 11/15/09.
//  Copyright 2009 Magical Panda Software, LLC. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "ActiveRecordHelpers.h"

@interface NSManagedObject (ActiveRecord)

+ (void) handleErrors:(NSError *)error;

+ (NSArray *) executeFetchRequest:(NSFetchRequest *)request;
+ (NSArray *) executeFetchRequest:(NSFetchRequest *)request inContext:(NSManagedObjectContext *)context;
+ (NSFetchRequest *)createFetchRequest;
+ (NSFetchRequest *)createFetchRequestInContext:(NSManagedObjectContext *)context;
+ (NSEntityDescription *)entityDescription;
+ (NSEntityDescription *)entityDescriptionInContext:(NSManagedObjectContext *)context;
+ (NSArray *)propertiesNamed:(NSArray *)properties;

+ (id)newEntity;
+ (id) newInContext:(NSManagedObjectContext *)context;
- (BOOL) deleteEntity;
- (BOOL) deleteInContext:(NSManagedObjectContext *)context;

+ (NSArray *) ascendingSortDescriptors:(id)attributesToSortBy, ...;
+ (NSArray *) descendingSortDescriptors:(id)attributesToSortyBy, ...;

+ (NSNumber *) numberOfEntities;
+ (NSNumber *) numberOfEntitiesWithContext:(NSManagedObjectContext *)context;
+ (NSNumber *) numberOfEntitiesWithPredicate:(NSPredicate *)searchTerm;
+ (NSNumber *) numberOfEntitiesWithPredicate:(NSPredicate *)searchTerm inContext:(NSManagedObjectContext *)context;

+ (NSFetchRequest *) requestAll;
+ (NSFetchRequest *) requestAllInContext:(NSManagedObjectContext *)context;
+ (NSFetchRequest *) requestAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending;
+ (NSFetchRequest *) requestAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending inContext:(NSManagedObjectContext *)context;
+ (NSFetchRequest *) requestAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm;
+ (NSFetchRequest *) requestAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm inContext:(NSManagedObjectContext *)context;

+ (NSArray *)findAll;
+ (NSArray *)findAllInContext:(NSManagedObjectContext *)context;
+ (NSArray *)findAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending;
+ (NSArray *)findAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending inContext:(NSManagedObjectContext *)context;
+ (NSArray *)findAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm;
+ (NSArray *)findAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm inContext:(NSManagedObjectContext *)context;
+ (NSFetchRequest *) requestAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm inContext:(NSManagedObjectContext *)context;

+ (NSArray *)findAllWithPredicate:(NSPredicate *)searchTerm;
+ (NSArray *)findAllWithPredicate:(NSPredicate *)searchTerm inContext:(NSManagedObjectContext *)context;

- (id) objectWithMinValueFor:(NSString *)property;
- (id) objectWithMinValueFor:(NSString *)property inContext:(NSManagedObjectContext *)context;

+ (id)findFirst;
+ (id)findFirstInContext:(NSManagedObjectContext *)context;
+ (id)findFirstWithPredicate:(NSPredicate *)searchterm sortedBy:(NSString *)property ascending:(BOOL)ascending;
+ (id)findFirstWithPredicate:(NSPredicate *)searchterm sortedBy:(NSString *)property ascending:(BOOL)ascending inContext:(NSManagedObjectContext *)context;
+ (id)findFirstWithPredicate:(NSPredicate *)searchTerm andRetrieveAttributes:(NSArray *)attributes;
+ (id)findFirstWithPredicate:(NSPredicate *)searchTerm andRetrieveAttributes:(NSArray *)attributes inContext:(NSManagedObjectContext *)context;
+ (id) findFirstWithPredicate:(NSPredicate *)searchTerm sortedBy:(NSString *)sortBy ascending:(BOOL)ascending andRetrieveAttributes:(id)attributes, ...;
+ (id) findFirstWithPredicate:(NSPredicate *)searchTerm sortedBy:(NSString *)sortBy ascending:(BOOL)ascending inContext:(NSManagedObjectContext *)context andRetrieveAttributes:(id)attributes, ...;

+ (id)findFirstByAttribute:(NSString *)attribute withValue:(id)searchValue;
+ (id)findFirstByAttribute:(NSString *)attribute withValue:(id)searchValue inContext:(NSManagedObjectContext *)context;
+ (NSArray *)findByAttribute:(NSString *)attribute withValue:(id)searchValue;
+ (NSArray *)findByAttribute:(NSString *)attribute withValue:(id)searchValue inContext:(NSManagedObjectContext *)context;
+ (NSArray *)findByAttribute:(NSString *)attribute withValue:(id)searchValue andOrderBy:(NSString *)sortTerm ascending:(BOOL)ascending;
+ (NSArray *)findByAttribute:(NSString *)attribute withValue:(id)searchValue andOrderBy:(NSString *)sortTerm ascending:(BOOL)ascending inContext:(NSManagedObjectContext *)context;

+ (NSFetchedResultsController *) fetchAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm groupBy:(NSString *)groupingKeyPath;
+ (NSFetchedResultsController *) fetchAllSortedBy:(NSString *)sortTerm ascending:(BOOL)ascending withPredicate:(NSPredicate *)searchTerm groupBy:(NSString *)groupingKeyPath inContext:(NSManagedObjectContext *)context;

+ (NSFetchedResultsController *) fetchRequest:(NSFetchRequest *)request groupedBy:(NSString *)group;
+ (NSFetchedResultsController *) fetchRequest:(NSFetchRequest *)request groupedBy:(NSString *)group inContext:(NSManagedObjectContext *)context;

@end
