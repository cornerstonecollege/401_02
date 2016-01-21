//
//  CICCCThirdBlock.m
//  PracticeBlocks
//
//  Created by Sreekanth Vazhappully on 2016-01-20.
//  Copyright © 2016 Sreekanth Jagadeesan Vazhappully. All rights reserved.
//

#import "CICCCThirdBlock.h"

@implementation CICCCThirdBlock

+ (void) print
{
    double (^myBlock) (double, double);
    myBlock = ^ double (double a, double b)
    {
        return a + b;
    };
    
    NSLog(@"%f", [CICCCThirdBlock doCalcWithBlock:myBlock x:2 andY:3]);
    
    NSLog(@"%f", [CICCCThirdBlock doCalcWithBlock:^ double (double var1, double var2)
    {
        return  pow(var1, 2) + var2;
    } x:-1 andY:5]);
}

+ (double) doCalcWithBlock:(double (^) (double, double))block x:(double)x andY:(double)y
{
    
    if (x > 0)
        return block(x, y);
    else
        return 0;
}

@end
