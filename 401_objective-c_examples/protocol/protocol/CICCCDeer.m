//
//  CICCCDeer.m
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCDeer.h"

@implementation CICCCDeer

- (instancetype) init
{
    self = [super init];
    if (self)
    {
        self.delegate = self;
    }
    
    return self;
}

- (void) run
{
    NSLog(@"Deer ran");
}

@end
