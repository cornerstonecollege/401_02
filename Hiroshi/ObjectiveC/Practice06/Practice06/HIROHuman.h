//
//  HIROHuman.h
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HIROHuman : NSObject

@property (nonatomic) NSString* name;
@property (nonatomic) NSInteger level;

- (instancetype) initWithName:(NSString*)name andLevel:(NSInteger)level;

@end
