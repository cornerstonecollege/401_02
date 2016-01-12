//
//  CICCCStudent.h
//  ObjectiveCExamble02
//
//  Created by Luiz Fernando Peres on 2016-01-12.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CICCCStudent : NSObject

@property (nonatomic) NSInteger age;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) char grade;

- (instancetype) initStudentWithAge:(NSInteger)age;
- (instancetype) initStudentWithAge:(NSInteger)theAge name:(NSString *)theName andGrade:(char)theGrade;

@end
