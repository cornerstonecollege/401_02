//
//  HIROPerson.h
//  Example05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROPerson : NSObject

@property (readonly) NSString* name;
@property NSString* sinNumber;
@property NSInteger age;

// function
+ (instancetype) personWithName:(NSString *)name;

// Create a object
// + : It's used for only class method
// - : not static
- (instancetype) initWithName:(NSString*)name sinNumber:(NSString*)sinNumber andAge:(NSInteger)age;


@end
