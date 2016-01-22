//
//  OBJStudent.h
//  ObjectiveCExample01
//
//  Created by Luiz Fernando Peres on 2016-01-11.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OBJStudent : NSObject

- (instancetype) initWithName:(NSString *)name andAge:(int)age;
- (NSString *) getName;
- (int) getAge;

@end
