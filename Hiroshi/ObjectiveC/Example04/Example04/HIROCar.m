//
//  HIROCar.m
//  Example04
//
//  Created by Hiroshi Tokutomi on 2016-01-14.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROCar.h"

@implementation HIROCar

// instancetype -> HIROCar
// instancetype is for my children
- (instancetype)initWithColor:(NSString *)color andHeight:(float)height;
{
    self = [super init];
    
    if(self)
    {
        _color = color;
        _height = height;
    }
    
    return self;
}

// description -> toString
-(NSString *)description
{
    // self.color -> refer to HIROCar.h name
    return [NSString stringWithFormat:@"Color = %@, Height = %f", self.color, self.height];
}



@end
