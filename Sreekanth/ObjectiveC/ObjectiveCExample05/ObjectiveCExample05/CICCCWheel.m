//
//  CICCCWheel.m
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCWheel.h"

@implementation CICCCWheel

- (instancetype)init
{
    NSLog(@"Don't use the method init");
    return nil;
}

- (instancetype)initWhithColorName:(NSString *)colorName sizeInInches:(NSInteger)size andBelongsTo:(CICCCVehicle *)belongsTo
{
    self = [super init];
    
    if (self)
    {
        _colorName = colorName;
        _sizeInInches = size;
        _belongsTo = belongsTo;
    }
    
    return self;
}

-(NSString *)description
{
    return [NSString stringWithFormat:@"Wheel - color of wheel: %@ size of wheels: %lu and belongs to %@", self.colorName, self.sizeInInches, self.belongsTo];
}

@end
