//
//  HIROCar.h
//  Example04
//
//  Created by Hiroshi Tokutomi on 2016-01-14.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROCar : NSObject

// property -> get and set
// (readonly) -> Setting value is not allowed. Users can only get value.
@property (readonly) NSString *color;
@property (readonly) float height;


- initWithColor:(NSString *)color andHeight:(float)height;

@end
