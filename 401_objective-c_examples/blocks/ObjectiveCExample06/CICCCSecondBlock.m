//
//  CICCCSecondBlock.m
//  ObjectiveCExample06
//
//  Created by Luiz Fernando Peres on 2016-01-20.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCSecondBlock.h"

@implementation CICCCSecondBlock

- (void) print
{
    NSArray *array = @[@"Apple", @"Banana", @"Lemon"];
    [array enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop)
    {
        NSLog(@"%@", obj);
    }];
    
    void (^myBlock)(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop);
    myBlock = ^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop)
    {
        NSString *myString = (NSString *)obj;
        if ([myString isEqualToString:@"Banana"])
            NSLog(@"%@", myString);
    };
    
    [array enumerateObjectsUsingBlock:myBlock];
    
    __weak CICCCSecondBlock *weakSelf = self;
    [array enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop)
    {
        NSLog(@"%@", weakSelf);
    }];
    
    __block NSInteger count = 0;
    [array enumerateObjectsUsingBlock:^(id  _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop)
    {
        count++;
    }];
    
    NSLog(@"There are %lu objects", count);
}

- (NSString *)description
{
   return @"You called the description of the class";
}

@end
