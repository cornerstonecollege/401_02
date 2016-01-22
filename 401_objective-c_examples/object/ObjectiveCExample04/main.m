//
//  main.m
//  ObjectiveCExample04
//
//  Created by CICCC1 on 2016-01-14.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCAnimal.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        AnimalSize size;
        size.height = 1;
        size.length = 1;
        size.width = 1;
        CICCCAnimal *animal = [[CICCCAnimal alloc] initWithSize:size andIsWild:true];
        CICCCAnimal *animal2 = animal;
        animal = nil;
        animal2 = nil;
        
    }
    return 0;
}
