//
//  main.m
//  Practice05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROAnimal.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        HIROAnimal *animal1 = [HIROAnimal alloc];
        animal1 = [animal1 initWithName:@"lion" country:@"africa" andFood:24];
        NSLog(@"\n%@", animal1);
        
        NSInteger monthlyFood = [HIROAnimal monthlyFood:10];
        NSLog(@"\n%ld!!", monthlyFood);
    }
    return 0;
}
