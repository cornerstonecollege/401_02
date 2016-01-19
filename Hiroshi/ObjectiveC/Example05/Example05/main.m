//
//  main.m
//  Example05
//
//  Created by Hiroshi Tokutomi on 2016-01-18.
//  Copyright © 2016 Hiroshi Tokutomi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HIROStudent.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        /*HIROPerson *person = [HIROPerson alloc];
        person = [person initWithName:@"hiroshi" sinNumber:@"01234" andAge:25];*/
        
        HIROStudent *noRealStudent = [HIROStudent personWithName:@"Luiz"];
        
        HIROStudent *student = [HIROStudent alloc];
        student = [student initWithName:@"Hiroshi" sinNumber:@"212121" andAge:25];
        
        [student setClassName:@"401"];
                
        NSLog(@"[noRepeatStudent] %@ \n[student]%@", noRealStudent, student);
        
//        NSString *hiroshiString;
//        hiroshiString = [NSString alloc];
//        NSLog(@"%@", hiroshiString);
        
    }
    return 0;
}
