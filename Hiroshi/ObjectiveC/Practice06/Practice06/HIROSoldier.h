//
//  HIROSoldier.h
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import "HIROHuman.h"

@interface HIROSoldier : HIROHuman

// nonatomic
// if commands are sent simultaneously, computer gets one attribution rundamly
@property (nonatomic, readonly) NSString* type;
@property (nonatomic, readonly) NSString* soldierId;

- (instancetype) initWithName:(NSString*)name level:(NSInteger)level soldierId:(NSString *)soldierId andType:(NSString *)type;

@end
