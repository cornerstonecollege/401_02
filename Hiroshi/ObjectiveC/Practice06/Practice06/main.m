//
//  main.m
//  Practice06
//
//  Created by Hiroshi Tokutomi on 2016-01-19.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROHuman.h"
#import "HIROSoldier.h"
#import "HIROWitch.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        HIROSoldier *player1 = [HIROSoldier alloc];
        player1 = [player1 initWithName:@"ZELDA" level:50 soldierId:@"01" andType:@"green"];
        
        HIROSoldier *player2 = [HIROSoldier alloc];
        player2 = [player2 initWithName:@"Marco" level:30 soldierId:@"02" andType:@"blue"];
        
        NSLog(@"%@\n", player1);
        NSLog(@"--------------------------\n");
        NSLog(@"%@\n", player2);
        NSLog(@"--------------------------\n");
        
        HIROWitch *player3 = [HIROWitch alloc];
        player3 = [player3 initWithName:@"Jane" level:3 witchId:@"01" andStone:@"diamond"];
        NSLog(@"%@\n", player3);

        
    }
    return 0;
}
