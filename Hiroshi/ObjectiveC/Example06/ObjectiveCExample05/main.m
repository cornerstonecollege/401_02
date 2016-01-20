//
//  main.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCMotocycle.h"
#import "CICCCCar.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        CICCCMotocycle *motocycle = [[CICCCMotocycle alloc] init];
        [motocycle goForward];
        [motocycle doBreak];
        
        CICCCCar *car = [[CICCCCar alloc] init];
        [car goForward];
        [car doBreak];
        [car goBackward];
        
        NSLog(@"%@\n----------------\n", motocycle);
        NSLog(@"%@", car);
    }
    return 0;
}
