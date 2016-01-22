//
//  CICCCLion.m
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCLion.h"

@implementation CICCCLion

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
    NSLog(@"Lion ran");
}

- (void) roar:(NSString *)sound
{
    NSLog(@"%@", sound);
}

@end
