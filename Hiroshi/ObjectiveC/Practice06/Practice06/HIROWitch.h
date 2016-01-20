//
//  HIROWitch.h
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROHuman.h"

@interface HIROWitch : HIROHuman

@property (nonatomic, readonly) NSString* witchId;
@property (nonatomic, readonly) NSString* stone;

- (instancetype) initWithName:(NSString *)name level:(NSInteger)level witchId:(NSString *)witchId andStone:(NSString *)stone;

@end
