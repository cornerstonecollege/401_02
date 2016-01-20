//
//  CICCCVehicle.h
//  ObjectiveCExample05
//
//  Created by Luiz Fernando Peres on 2016-01-19.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CICCCWheel;

@interface CICCCVehicle : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray<CICCCWheel *> *wheels;
@property (nonatomic) NSInteger numberOfGears;

- (void) goForward;
- (void) doBreak;

@end
