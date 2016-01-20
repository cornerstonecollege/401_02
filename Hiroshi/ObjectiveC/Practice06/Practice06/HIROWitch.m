//
//  HIROWitch.m
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROWitch.h"

@implementation HIROWitch

- (instancetype) initWithName:(NSString *)name level:(NSInteger)level witchId:(NSString *)witchId andStone:(NSString *)stone
{
    self = [super initWithName:name andLevel:level];
    if(self)
    {
        _witchId = [NSString stringWithFormat:@"10%@", witchId];
        _stone = stone;
    }
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Name %@, Level %lu, Witch Id %@, Stone %@", self.name, self.level, self.witchId, self.stone];
}

@end
