//
//  main.m
//  protocol
//
//  Created by Luiz Fernando Peres on 2016-01-22.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCDeer.h"
#import "CICCCLion.h"
#import "CICCCSnake.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        CICCCLion *lion = [[CICCCLion alloc] init];
        CICCCDeer *deer = [[CICCCDeer alloc] init];
        CICCCSnake *snake = [[CICCCSnake alloc] init];
        
        [lion scaredWithRoar:@"raaaaaawr"];
        [deer scaredWithRoar:@"Anything"];
        [snake scaredWithRoar:@"dddsdssd"];
        [snake scaredWithRoar:@""];
        [snake scared];
    }
    return 0;
}
