//
//  CICCCTimerHelper.m
//  ObjectiveCExample07
//
//  Created by Luiz Fernando Peres on 2016-01-21.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCTimerHelper.h"

@implementation CICCCTimerHelper

- (void) print:(NSTimer *)timer
{
    NSLog(@"It is executed.");
}

- (void)connection:(NSURLConnection *)connection didFailWithError:(NSError *)error
{
    NSLog(@"Did fail");
}

- (void)connection:(NSURLConnection *)connection didReceiveData:(NSData *)data
{
    NSLog(@"Did receive data");
}

- (void)connectionDidFinishLoading:(NSURLConnection *)connection
{
    NSLog(@"Did finish loading");
}

@end
