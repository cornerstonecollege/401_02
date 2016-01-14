//
//  main.m
//  NSarrayExample01
//
//  Created by Sreekanth Vazhappully on 2016-01-14.
//  Copyright © 2016 Sreekanth Jagadeesan Vazhappully. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        //Create three NSDate objects
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0 * 60.0 * 60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24.0 * 60.0 * 60.0];
        
        //Createan array containing all three
        NSArray *dateList = @[now, tomorrow, yesterday];
        
        // Print a couple of dates
        NSLog(@"The first date is %@ ", dateList[0]);
        NSLog(@"The third date is %@ ", dateList[2]);
        
        //How many dates are in the array
        
        NSLog(@"There are %lu dates ", [dateList count]);
        
        
        
    }
    return 0;
}
