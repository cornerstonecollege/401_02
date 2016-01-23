//
//  main.m
//  Example07
//
//  Created by Hiroshi Tokutomi on 2016-01-20.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROCalculate.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        // block : like a function pointer
        // return type is NSNumber
        // ^ : caret
        
        //First way
        //NSNumber* (^myBlock)(NSNumber*, NSNumber*) = ^ NSNumber* (NSNumber *x, NSNumber *y)
        NSNumber* (^myBlock)(NSNumber*, NSNumber*);
        myBlock = ^ NSNumber* (NSNumber *x, NSNumber *y)
        {
            return [NSNumber numberWithFloat:([x floatValue] + [y floatValue])];
        };
        
        NSNumber *myResult = [HIROCalculate calculateWithBlock:myBlock A:@2 andB:@3];
        NSLog(@"%@", myResult);
        
        // Second way
        //NSNumber *myResult = [HIROCalculate calculateWithBlock:^NSNumber* (NSNumber *x, NSNumber *y)
        //{
        //    return [NSNumber numberWithFloat:([x floatValue] + [y floatValue])];
        //} A:@2 andB:@3];
        //NSLog(@"%@", myResult);
        
        NSNumber *myResult2 = [HIROCalculate calculateWithBlock:^NSNumber* (NSNumber *var1, NSNumber *var2)
        {
            double firstValue = [var1 doubleValue];
            double secondValue = [var2 doubleValue];
            
            double result = firstValue * secondValue * M_PI;
            
            return [NSNumber numberWithDouble:result];
            
        } A:@4 andB:@2];
        
        NSLog(@"%@", myResult2);
    }
    return 0;
}
