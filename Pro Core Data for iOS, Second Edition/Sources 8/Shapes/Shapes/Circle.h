//
// From the book Pro Core Data for iOS, 2nd Edition
// Michael Privat and Rob Warner
// Published by Apress, 2011
// Source released under the Eclipse Public License
// http://www.eclipse.org/legal/epl-v10.html
// 
// Contact information:
// Michael: @michaelprivat -- http://michaelprivat.com -- mprivat@mac.com
// Rob: @hoop33 -- http://grailbox.com -- rwarner@grailbox.com
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Shape.h"


@interface Circle : Shape

@property (nonatomic, retain) NSNumber * radius;
@property (nonatomic, retain) NSNumber * x;
@property (nonatomic, retain) NSNumber * y;

+ (Circle *)randomInstance:(CGPoint)origin inContext:(NSManagedObjectContext *)context;

@end
