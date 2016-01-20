//
//  main.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

// *** HIERACHY ***
//
//      NSObject
//          |
//      Vehicle
//          Wheel
//          |
//      MotorCycle, Car
//

#import <Foundation/Foundation.h>
#import "CICCCMotocycle.h"
#import "CICCCCar.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        // make an object (motocycle)
        CICCCMotocycle *motocycle = [[CICCCMotocycle alloc] init];
        [motocycle goForward];
        [motocycle doBreak];
        
        // make an object (car)
        CICCCCar *car = [[CICCCCar alloc] init];
        [car goForward];
        [car doBreak];
        [car goBackward];
        
        NSLog(@"%@\n----------------\n", motocycle);
        NSLog(@"%@", car);
        
        NSLog(@"\n----------------\n%@", motocycle.wheels[1]);
    }
    return 0;
}
