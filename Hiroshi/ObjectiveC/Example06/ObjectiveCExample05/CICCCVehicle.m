//
//  CICCCVehicle.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCVehicle.h"

@implementation CICCCVehicle

- (void)goForward
{
    NSLog(@"Vehicle went forward.");
}

- (void)doBreak
{
    NSLog(@"Vehicle did break.");
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"%@ - number of weels: %lu number of gears: %lu.", self.name, [self.wheels count], self.numberOfGears];
}

@end
