//
//  SecondTest.m
//  ObjectiveCExample03
//
//  Created by CICCC1 on 2016-01-14.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "SecondTest.h"

@implementation SecondTest

+ (void)print
{
    NSArray *arr = @[@"Vancouver", @2, [NSDate date]];
    NSArray<NSString *> *stringArr = @[@"a", @"b", @1];
    NSArray *objectArr = [NSArray arrayWithObjects:arr,stringArr, nil];
    
    //NSLog(@"%@", arr);
    //NSLog(@"%@", stringArr);
    NSLog(@"%@", objectArr);
    
    NSMutableArray *mutArr = [NSMutableArray arrayWithArray:@[arr, stringArr]];
    [mutArr removeObjectAtIndex:0];
    NSLog(@"%@", mutArr);
    
    NSDictionary *dic = @{
                          @"fruits" : @[@"apple", @"orange", @"banana"],
                          @1 : @"Hiroshi",
                          @"Sreekanth" : @2,
                          @"secDic" : @{ @"id" : @1223132, },
                        };
    
    NSLog(@"%@", dic);
    
    NSDictionary *dicTwo = [NSDictionary dictionaryWithObjects:@[@"Hiroshi", @"Luiz", @"Sreekanth"] forKeys:@[@0, @1, @2]];
    NSLog(@"%@", dicTwo);
    
    NSLog(@"%@", dic[@"fruits"]);
    
    NSMutableDictionary *mutDic = [[NSMutableDictionary alloc] init];
    [mutDic setObject:@[@"Giraffe", @"Lion"] forKey:@"otherAnimals"];
    [mutDic removeObjectForKey:@"otherAnimals"];
    
    NSLog(@"%@", mutDic[@"otherAnimals"]);
    
}

@end
