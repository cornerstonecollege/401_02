//
//  HIROCalculate.h
//  Example07
//
//  Created by Hiroshi Tokutomi on 2016-01-20.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROCalculate : NSObject

// + -> static
+ (NSNumber*) calculateWithBlock:(NSNumber* (^) (NSNumber*, NSNumber*))block A:(NSNumber*)a andB:(NSNumber*)b;

@end
