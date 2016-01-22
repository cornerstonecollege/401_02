//
//  CICCCProtocol.m
//  ObjectiveCExample07
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCProtocol.h"

@implementation CICCCProtocol

- (void) doAction
{
    if ([self.delegate respondsToSelector:@selector(onClick)])
    {
        [self.delegate onClick];
    }
}

@end
