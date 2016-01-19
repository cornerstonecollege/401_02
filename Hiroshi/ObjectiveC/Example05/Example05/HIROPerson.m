//
//  HIROPerson.m
//  Example05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROPerson.h"

@implementation HIROPerson

+ (instancetype) personWithName:(NSString *)name
{
    HIROPerson *person = [HIROPerson alloc];
    person = [person initWithName:name sinNumber:0 andAge:0];
    
    return person;
}

- (instancetype) initWithName:(NSString*)name sinNumber:(NSString*)sinNumber andAge:(NSInteger)age;
{
    self = [super init];
    
    if(self){
        _name = name;
        _sinNumber = sinNumber;
        _age = age;
    }
    return self;
}

// description -> toString
-(NSString *)description
{
    return [NSString stringWithFormat:@"Name = %@, SinNumber = %@, Age = %ld", self.name, self.sinNumber, self.age];
}


@end
