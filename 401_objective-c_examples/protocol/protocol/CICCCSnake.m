//
//  CICCCSnake.m
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCSnake.h"

@implementation CICCCSnake

- (void) slither
{
    NSLog(@"Snake did slither");
}

- (void)scaredWithRoar:(NSString *)sound
{
}

- (void)scared
{
    [self slither];
}

@end
