//
//  CICCCAnimal.h
//  ObjectiveCExample04
//
//  Created by CICCC1 on 2016-01-14.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CICCCAnimal : NSObject

typedef struct
{
    float height;
    float length;
    float width;
}AnimalSize;

@property (readonly) BOOL isWild;
@property (readonly) AnimalSize size;

- initWithSize:(AnimalSize)size andIsWild:(BOOL)isWild;

@end
