//
//  main.m
//  ObjectiveCExample06
//
//  Created by Luiz Fernando Peres on 2016-01-20.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCBlock.h"
#import "CICCCSecondBlock.h"
#import "CICCCThirdBlock.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        //[CICCCBlock print];
        //[[[CICCCSecondBlock alloc] init] print];
        [CICCCThirdBlock print];
    }
    return 0;
}
