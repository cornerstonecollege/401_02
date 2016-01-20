//
//  CICCCWheel.h
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CICCCVehicle;

@interface CICCCWheel : NSObject

@property (nonatomic, readonly) NSString *colorName;
@property (nonatomic, readonly) NSInteger sizeInInches;
@property (nonatomic, weak, readonly) CICCCVehicle *belongsTo;

- (instancetype) initWhithColorName:(NSString *)colorName sizeInInches:(NSInteger)size andBelongsTo:(CICCCVehicle *)belongsTo;

@end
