//
//  main.m
//  Example04
//
//  Created by Hiroshi Tokutomi on 2016-01-14.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROCar.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        HIROCar *car = [HIROCar alloc];                     // to allocate the memory
        car = [car initWithColor:@"Blue" andHeight:123];    // to initialize the memory
        NSLog(@"%@", car);
    }
    
    return 0;
}
