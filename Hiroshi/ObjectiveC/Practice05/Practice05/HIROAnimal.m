//
//  HIROAnimal.m
//  Practice05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROAnimal.h"

@implementation HIROAnimal

+(NSInteger)monthlyFood:(NSInteger)food{
    
    NSInteger monthlyFood;
    monthlyFood = food *31;
    
    return monthlyFood;
}

- (instancetype) initWithName:(NSString*)name country:(NSString*)country andFood:(NSInteger)food{

    self = [super init];
    
    if(self){
        _name = name;
        _country = country;
        _food = food;
        _foodCalculate = food * 7;
    }
    return self;
}

// description -> toString
-(NSString *)description
{
    return [NSString stringWithFormat:@"Name = %@, Country = %@, Food = %ld, Weekly food = %ld", self.name, self.country, self.food, self.foodCalculate];
}

@end
