//
//  CICCCAnimal.m
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCAnimal.h"

@implementation CICCCAnimal

- (void) scared
{
    if (self.delegate)
    {
        [self.delegate run];
    }
}

- (void) scaredWithRoar:(NSString *)sound
{
    if (self.delegate)
    {
        if ([self.delegate respondsToSelector:@selector(roar:)])
            [self.delegate roar:sound];
        
        [self scared];
    }
}

@end
