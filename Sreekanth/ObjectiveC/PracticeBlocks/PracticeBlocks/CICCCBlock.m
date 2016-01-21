//
//  CICCCBlock.m
//  ObjectiveCExample06
//
//  Created by Luiz Fernando Peres on 2016-01-20.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCBlock.h"

@implementation CICCCBlock

+ (void) print
{
    // FIRST WAY
    void (^printName)(NSString*);
    printName = ^(NSString *name)
    {
        NSLog(@"The name is %@", name);
    };
    
    printName(@"Luiz");
    printName(@"Hiroshi");
    printName(@"Sreekanth");
    
    
    //SECOND WAY
    CalcType calculatorSum = ^(NSInteger a, NSInteger b)
    {
        return a + b;
    };
    
    CalcType calculatorSub = ^(NSInteger a, NSInteger b)
    {
        return a - b;
    };
    
    CalcType calculatorMult = ^(NSInteger a, NSInteger b)
    {
        return a * b;
    };
    
    CalcType calculatorDiv = ^(NSInteger a, NSInteger b)
    {
        return a / b;
    };
    
    NSLog(@"The sum is %lu", calculatorSum(6, 3));
    NSLog(@"The sub is %lu", calculatorSub(6, 3));
    NSLog(@"The mult is %lu", calculatorMult(6, 3));
    NSLog(@"The div is %lu", calculatorDiv(6, 3));
}

@end
