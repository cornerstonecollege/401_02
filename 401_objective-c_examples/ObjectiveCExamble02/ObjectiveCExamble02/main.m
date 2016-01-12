//
//  main.m
//  ObjectiveCExamble02
//
//  Created by Luiz Fernando Peres on 2016-01-12.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CICCCStudent.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool
    {
        CICCCStudent *student1 = [[CICCCStudent alloc] init];
        student1.name = @"Luiz";
        student1.age = 26;
        student1.grade = 'F';
        
        CICCCStudent *student2 = [CICCCStudent new];
        student2.name = @"Sreekanth";
        student2.age = 30;
        student2.grade = 'A';
        
        CICCCStudent *student3 = [[CICCCStudent alloc] initStudentWithAge:25 name:@"Hiroshi" andGrade:'A'];
        
        NSLog(@"%@", student1);
        NSLog(@"%@", student2);
        NSLog(@"%@", student3);

    }
    return 0;
}
