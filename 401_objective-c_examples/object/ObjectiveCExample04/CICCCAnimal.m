//
//  CICCCAnimal.m
//  ObjectiveCExample04
//
//  Created by CICCC1 on 2016-01-14.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCAnimal.h"

@implementation CICCCAnimal

- initWithSize:(AnimalSize)size andIsWild:(BOOL)isWild
{
    self = [super init];
    
    if (self)
    {
        _isWild = isWild;
        _size = size;
    }
    
    return self;
}


- (NSString *)description
{
    return [NSString stringWithFormat:@"Animal volume: %f and %@",
            (self.size.height * self.size.length * self.size.width),
            self.isWild ? @"Wild" : @"Domestic"];
}

- (void)dealloc
{
    NSLog(@"Deallocation of %@", self);
}

@end
