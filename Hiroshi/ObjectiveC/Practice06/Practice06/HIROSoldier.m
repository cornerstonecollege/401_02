//
//  HIROSoldier.m
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROSoldier.h"
#import "HIROHuman.h"

@implementation HIROSoldier


// set the attributions
- (instancetype) initWithName:(NSString*)name level:(NSInteger)level soldierId:(NSString *)soldierId andType:(NSString *)type;
{
    // !! important
    // set attributions in HIROhuman
    self = [super initWithName:name andLevel:level];
    if (self)
    {
        // set type and field
        _soldierId = [NSString stringWithFormat:@"00%@", soldierId];
        _type = type;
    }
    return self;
}

// show the result of the object I made
-(NSString *)description{
    return [NSString stringWithFormat:@"Name %@, Level %lu, Soldier Id %@, Type %@", self.name, self.level, self.soldierId, self.type];
}

@end
