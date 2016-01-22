//
//  main.m
//  ObjectiveCExample07
//
//  Created by Luiz Fernando Peres on 2016-01-21.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCTimerHelper.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        CICCCTimerHelper *helper = [[CICCCTimerHelper alloc] init];
        
        
        NSURL *url = [NSURL URLWithString:@"http://www.menucool.com/slider/jsImgSlider/images/image-slider-2.jpg"];
        
        [NSURLConnection connectionWithRequest:[NSURLRequest requestWithURL:url] delegate:helper];
        
        __unused NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:1 target:helper selector:@selector(print:) userInfo:nil repeats:YES];
        
        [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:1]];
        
    }
    
    return 0;
}
