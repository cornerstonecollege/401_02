//
//  HIROCalculate.m
//  Example07
//
//  Created by Hiroshi Tokutomi on 2016-01-20.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROCalculate.h"

@implementation HIROCalculate

+ (NSNumber*) calculateWithBlock:(NSNumber* (^) (NSNumber*, NSNumber*))block A:(NSNumber*)a andB:(NSNumber*)b
{
    return block(a, b);
}

@end
