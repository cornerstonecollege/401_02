//
//  main.m
//  ObjectCExample03
//
//  Created by Hiroshi Tokutomi on 2016-01-13.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // Array
        NSArray *myFruit = @[@"apple", @"banana"];
        NSLog(@"\n## Array ##\n%@", myFruit);
        
        NSArray *myAnimal = [NSArray arrayWithObjects:@"lion", @"monkey", nil];
        NSLog(@"\n## Array ##\n%@", myAnimal);
        
        // Dictionary
        NSDictionary *students = [[NSDictionary alloc] initWithObjectsAndKeys:
                                  @"1", @"shawn", @"2", @"tomoko", nil];
        
        NSLog(@"\n## Dictionaty ##%@", students);
        
        NSDictionary *inventory = @{
                                    @1 : @"Luiz",
                                    @"Hiroshi": @"Hiroshi",
                                    };
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
