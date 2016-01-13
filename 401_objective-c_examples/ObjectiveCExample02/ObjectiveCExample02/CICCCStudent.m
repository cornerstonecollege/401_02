//
//  CICCCStudent.m
//  ObjectiveCExamble02
//
//  Created by Luiz Fernando Peres on 2016-01-12.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import "CICCCStudent.h"

@interface CICCCStudent ()

@end

@implementation CICCCStudent

- (instancetype)initStudentWithAge:(NSInteger)age
{
    self = [super init];
    
    if (self)
    {
        _age = age;
    }
    
    return self;
}

- (instancetype)initStudentWithAge:(NSInteger)theAge name:(NSString *)theName andGrade:(char)theGrade
{
    self = [super init];
    
    if (self)
    {
        _age = theAge;
        _name = theName;
        _grade = theGrade;
    }
    
    return self;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"The student name is %@, the age is %lu and the grade is %c", self.name, self.age, self.grade];
}

@end