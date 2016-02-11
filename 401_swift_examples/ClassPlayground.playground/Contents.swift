protocol Power
{
    mutating func fly()
}

class Person
{
    var name:String
    var age:Int
    var gender:String
    
    init(name:String, age:Int, gender:String)
    {
        self.name = name
        self.age = age
        self.gender = gender
    }
}

protocol StudentDelegate
{
    mutating func cry() -> String;
}

class Student: Person, StudentDelegate
{
    var grade:String = ""
    
    init(name:String, age:Int, gender:String, grade:String)
    {
        super.init(name:name, age:age, gender:gender)
        self.grade = grade
    }
    
    override init(name:String, age:Int, gender:String)
    {
        super.init(name: name, age: age, gender: gender)
    }
    
    func description() -> String
    {
        return "Name: \(self.name) Age: \(self.age) Gender: \(self.gender) Grade: \(self.grade) ";
    }
    
    func cry() -> String
    {
        return "Buuaaaaaah"
    }
}

class SuperHuman: Person, Power
{
    override init(name:String, age:Int, gender:String)
    {
        super.init(name: name, age: age, gender: gender)
    }
    
    func fly()
    {
        print("I'm flying")
    }
}

var student = Student(name: "Sreekanth", age: 30, gender: "male", grade: "A")
print(student.description())

var student2 = Student(name: "Shawn", age: 19, gender: "male")
print(student.description())

var superMan:SuperHuman = SuperHuman(name: "Clark Kent", age: 30, gender: "male")

superMan.fly()

print(student.cry())

print(7.description)

extension Int:Power
{
    func fly()
    {
        print("That is a \(self) flying")
    }
}

7.fly()

var x:Int = 1000 + 3
x.fly()


