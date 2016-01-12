//
//  OBJStudent.m
//  ObjectiveCExample01
//
//  Created by Luiz Fernando Peres on 2016-01-11.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "OBJStudent.h"

@interface OBJStudent ()

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int age;

@end

@implementation OBJStudent

- (instancetype) initWithName:(NSString *)name andAge:(int)age
{
    self = [super init];
    
    if (self)
    {
        _name = name;
        _age = age;
    }
    
    return self;
}

- (NSString *) getName;
{
    return self.name;
}

- (int) getAge
{
    return self.age;
}

- (NSString *) description
{
    return [NSString stringWithFormat:@"Student name: %@ age:%i",                           [self getName],
        [self getAge]];
}

@end
