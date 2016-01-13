//
//  main.m
//  ObjectCExample02
//
//  Created by Hiroshi Tokutomi on 2016-01-12.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROCalculator.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSNumber *result1 = [HIROCalculator calcWithA:12 B:2 andMark:HO_MULT];
        NSLog(@"%@", result1);
        
    }
    return 0;
}
