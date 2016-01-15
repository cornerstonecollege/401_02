//
//  main.m
//  Example03
//
//  Created by Hiroshi Tokutomi on 2016-01-14.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>   // framework

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // Array 1
        NSArray *myFruit = @[@"apple", @"banana"];
        NSLog(@"\n## Array 1 ##\n%@", myFruit);
        
        // Array 2
        NSArray *myAnimal = [NSArray arrayWithObjects:@"lion", @"monkey", nil];
        NSLog(@"\n## Array 2 ##\n%@", myAnimal);
        
        // Dictionary 1
        NSDictionary *students = [[NSDictionary alloc] initWithObjectsAndKeys:
                                  @"1", @"shawn", @"2", @"tomoko", nil];
        NSLog(@"\n## Dictionaty 1 ##%@", students);
        
        // Dictionary 2
        NSDictionary *inventory = @{
                                    @1 : @"Luiz",
                                    @"Hiroshi": @"ABC",
                                    };
        NSLog(@"## Dictionary 2 ##");
        NSLog(@"%@", inventory[@1]);
        NSLog(@"%@", [inventory objectForKey:@"Hiroshi"]);
        
        // Mutable Dictionaty
        NSMutableDictionary *dictinary = [[NSMutableDictionary alloc] init];
        [dictinary setObject:@"Hiroshi" forKey:@1];
        
        NSLog(@"\n## Mutable Dictionary ##\n%@", dictinary);
        NSLog(@"%@", [dictinary objectForKey:@1]);
        
    }
    return 0;
}

