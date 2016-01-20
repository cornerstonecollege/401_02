//
//  HIROHuman.m
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROHuman.h"

@implementation HIROHuman

// set atributions
- (instancetype) initWithName:(NSString*)name andLevel:(NSInteger)level
{
    self = [super init];
    if(self){
        // set name and level
        _name = name;
        _level = level;
    }
    return self;
}


@end
