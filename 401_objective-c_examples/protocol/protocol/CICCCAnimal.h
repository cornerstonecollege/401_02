//
//  CICCCAnimal.h
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CICCCAnimalProtocol <NSObject>

@required
- (void) run;

@optional
- (void) roar:(NSString *)sound;

@end

@interface CICCCAnimal : NSObject

@property (nonatomic, weak) CICCCAnimal<CICCCAnimalProtocol> *delegate;

@property (nonatomic) double size;
@property (nonatomic, strong) NSString *color;

- (void) scared;
- (void) scaredWithRoar:(NSString *)sound;

@end
