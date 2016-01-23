//
//  HIROCalculate.h
//  Example07
//
//  Created by Hiroshi Tokutomi on 2016-01-20.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

// properties and methods in header file are PUBLI

#import <Foundation/Foundation.h>

@interface HIROCalculate : NSObject

// - : instance method
// + : class method

// + -> static
// the function name : calculateWithAandB
// return type : NSNumber*
// block's name : block
// block's type : (NSNumber* (^) (NSNumber*, NSNumber*))
+ (NSNumber*) calculateWithBlock:(NSNumber* (^) (NSNumber*, NSNumber*))block A:(NSNumber*)a andB:(NSNumber*)b;

@end
