//
//  CICCCProtocol.h
//  ObjectiveCExample07
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CICCCProtocolDelegate <NSObject>

@required
- (void) onClick;

@optional
- (NSInteger) sumWithA:(NSInteger)a andB:(NSInteger)b;

@end

@interface CICCCProtocol : NSObject

@property (nonatomic, weak) id<CICCCProtocolDelegate> delegate;

- (void) doAction;

@end
