//
//  CICCCWheel.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCWheel.h"

@implementation CICCCWheel

- (instancetype)init
{
    NSLog(@"Don't use the method init");
    return nil;
}

- (instancetype)initWhithColorName:(NSString *)colorName andSizeInInches:(NSInteger)size
{
    self = [super init];
    
    if (self)
    {
        _colorName = colorName;
        _sizeInInches = size;
    }
    
    return self;
}

@end
