//
//  main.m
//  objectiveCexample02
//
//  Created by Sreekanth Vazhappully on 2016-01-12.
//  Copyright © 2016 Sreekanth Jagadeesan Vazhappully. All rights reserved.
//

#import <Foundation/Foundation.h>



int main(int argc, const char * argv[])
{
    
    @autoreleasepool {
        
        
        NSFileHandle *handle = [NSFileHandle fileHandleWithStandardInput];
        NSData *data = [handle readDataToEndOfFile];
        NSString *string = [NSString alloc] initWithData
        
        char cstring [10]= {0};
        char i = 0;
        NSLog(@"Enter the Name: ");
        scanf("%s",cstring);
        
        while(cstring[i] != 0)
        {
            putchar(cstring[i]);
            i++;
        }
        
        putchar('\n');
        
       NSString *sree = [NSString stringWithCString:cstring encoding:1];

        
    
       
    }
    return 0;
}
