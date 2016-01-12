//
//  main.m
//  ObjectiveCExample01
//
//  Created by Luiz Fernando Peres on 2016-01-11.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OBJMath.h"
#import "OBJStudent.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        double sum = OBJMath_sum(2, 3);
        NSNumber *myNumber = [NSNumber numberWithDouble:sum];
        NSLog(@"%@", myNumber);
        
        OBJStudent *student = [[OBJStudent alloc] initWithName:@"Hiroshi" andAge:25];
        
        NSLog(@"%@", student);
    }
    
    return 0;
}
