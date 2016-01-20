//
//  CICCCCar.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCCar.h"
#import "CICCCWheel.h"

@implementation CICCCCar

- (instancetype)init
{
    self = [super init];
    
    if (self)
    {
        CICCCWheel *firstWheel = [[CICCCWheel alloc] initWhithColorName:@"Black" andSizeInInches:15];
        CICCCWheel *secondWheel = [[CICCCWheel alloc] initWhithColorName:@"Yellow" andSizeInInches:15];
        CICCCWheel *thirdWheel = [[CICCCWheel alloc] initWhithColorName:@"Blue" andSizeInInches:15];
        CICCCWheel *fourthWheel = [[CICCCWheel alloc] initWhithColorName:@"Orange" andSizeInInches:15];
        
        self.name = @"Car";
        self.wheels = @[firstWheel, secondWheel, thirdWheel, fourthWheel];
        self.numberOfGears = 6;
    }
    
    return self;
}

- (void) goForward
{
    NSLog(@"Yuuuuuuuuuu");
}

- (void) doBreak
{
    [super doBreak];
    NSLog(@"Ooooooops, I'm a car!!! Car did break!");
}

- (void) goBackward
{
    NSLog(@"No motocycles can go backward hahahahha! Cars can!");
}

@end
