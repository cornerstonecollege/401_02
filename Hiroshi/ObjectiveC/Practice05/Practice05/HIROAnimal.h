//
//  HIROAnimal.h
//  Practice05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROAnimal : NSObject

// property -> get and set
@property NSString* name;
@property NSString* country;
@property NSInteger food;
@property NSInteger foodCalculate;

+(NSInteger)monthlyFood:(NSInteger)food;

// - -> It's not static and I'm going to make object
- (instancetype) initWithName:(NSString*)name country:(NSString*)country andFood:(NSInteger)food;

@end
