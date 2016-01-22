//
//  CICCCTimerHelper.h
//  ObjectiveCExample07
//
//  Created by Luiz Fernando Peres on 2016-01-21.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCProtocol.h"

@interface CICCCTimerHelper : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, CICCCProtocolDelegate>

- (void) print:(NSTimer *)timer;
- (void) doOnClick;

@end
