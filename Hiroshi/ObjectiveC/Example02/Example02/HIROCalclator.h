//
//  HIROCalclator.h
//  Example02
//
//  Created by Hiroshi Tokutomi on 2016-01-14.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROCalculator : NSObject

enum _HIRO_OPERATOR
{
    HO_SUM,
    HO_SUB,
    HO_MULT,
    HO_DIV,
};

typedef enum _HIRO_OPERATOR HIRO_OPERATOR;

+ (NSNumber *) calcWithA:(double)a B:(double)b andMark:(HIRO_OPERATOR)mark;

@end
