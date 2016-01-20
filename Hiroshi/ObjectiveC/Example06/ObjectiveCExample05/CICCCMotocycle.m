//
//  CICCCMotocycle.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCMotocycle.h"
#import "CICCCWheel.h"


@implementation CICCCMotocycle

- (instancetype) init
{
    self = [super init];
    
    if (self)
    {
        CICCCWheel *firstWheel = [[CICCCWheel alloc] initWhithColorName:@"Black" sizeInInches:8 andBelongsTo:self];
        CICCCWheel *secondWheel = [[CICCCWheel alloc] initWhithColorName:@"Black" sizeInInches:8 andBelongsTo:self];
        
        self.name = @"Motocycle";
        self.wheels = [NSArray arrayWithObjects:firstWheel, secondWheel, nil];
        self.numberOfGears = 4;
    }
    
    return self;
}

- (void)goForward
{
    NSLog(@"Motocycle went forward.");
}

@end
