//
//  HIROCalculator.m
//  ObjectCExample02
//
//  Created by Hiroshi Tokutomi on 2016-01-12.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROCalculator.h"

@implementation HIROCalculator

+ (NSNumber *) calcWithA:(double)a B:(double)b andMark:(HIRO_OPERATOR)mark
{
    NSNumber *result = [NSNumber alloc];
    
    switch(mark){
        case(HO_SUM):
            result = [result initWithDouble:(a + b)];
            break;
        case (HO_SUB):
            result = [result initWithDouble:(a - b)];
            break;
        case (HO_MULT):
            result = [result initWithDouble:(a * b)];
            break;
        case (HO_DIV):
            result = [result initWithDouble:(a / b)];
            break;
    }
    
    return result;
}

@end
