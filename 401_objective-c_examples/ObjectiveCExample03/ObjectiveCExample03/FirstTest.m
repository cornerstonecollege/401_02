//
//  FirstTest.m
//  ObjectiveCExample03
//
//  Created by CICCC1 on 2016-01-14.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "FirstTest.h"

@implementation FirstTest

+ (void) print
{
    char *myCString = "Sreekanth";
    NSString *str1 = [NSString stringWithCString:myCString encoding:NSASCIIStringEncoding];
    NSLog(@"%@", str1);
    
    NSString *str2 = @"Hiroshi";
    NSLog(@"%@", str2);
    
    str2 = @"Luiz";
    NSLog(@"%@", str2);
    
    NSMutableString *str3 = [[NSMutableString alloc] init];
    [str3 appendString:[NSString stringWithFormat:@"%@ ", str1]];
    
    [str3 appendString:str2];
    
    NSLog(@"%@", str3);
    
    NSArray *myarray1 = @[@"Luiz", @"Hiroshi", @1];
    NSLog(@"%@", myarray1);
    
    NSArray *myarray2 = @[str1, str2];
    NSLog(@"%@", myarray2);
    NSLog(@"%@", myarray2[0]);
    
    NSArray *myarray3 = [NSArray arrayWithObjects:@[str1, str2, @1, @"four"], nil];
    
    NSLog(@"%@", myarray3);
    
    NSMutableArray *myarray4 = [[NSMutableArray alloc] init];
    NSNumber *number = @1;
    [myarray4 addObject:number];
    [myarray4 addObject:@"Luiz"];
    [myarray4 insertObject:@"Hiroshi" atIndex:0];
    [myarray4 addObject:@100];
    [myarray4 removeObject:number];
    
    NSLog(@"%@", myarray4);
    
    NSDictionary *dict = [[NSDictionary alloc] initWithObjectsAndKeys:
                          @"value1", @"key1", @"value2", @"key2", nil];
    
    NSLog(@"%@", dict);
    
    NSMutableDictionary *dictinary = [[NSMutableDictionary alloc] init];
    [dictinary setObject:@"Hiroshi" forKey:@1];
    
    NSLog(@"%@", dictinary);
    NSLog(@"%@", [dictinary objectForKey:@1]);
    
    NSDictionary *inventory = @{
                                @1 : @"Luiz",
                                @"Hiroshi": @"Hiroshi",
                                };
    NSLog(@"%@", inventory[@1]);
    NSLog(@"%@",
          [inventory objectForKey:@"Hiroshi"]);
}

@end
