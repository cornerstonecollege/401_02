var thatIsAVar:Int = 0;
var thatIsMySecondVar = 2
var 🖖 = 2
var 🖖😈🖖 = 3
let 🙏🖖 = 🖖😈🖖 + 🖖

let sum = thatIsAVar + thatIsMySecondVar;

if (sum > 4)
{
    print("Hello Sreekanth and Tomoko")
}
else
{
    print("Oh oh")
}

func printMyString()
{
    print("That is my string")
    func secondString()
    {
        print("Hello")
    }
    
    secondString()
}

printMyString()

func U😎U (😡: String, 😴: Bool) -> String
{
    if 😴
    {
        return "I am \(😡) and \(thatIsAVar)"
    }
    else
    {
        return "I am not \(😡)"
    }
}

let resultFromFunction:String = U😎U("Angry", 😴: false)

print(resultFromFunction)

func add(x:Float, y:Float) -> Float
{
    return x + y;
}

let summation:Float = add(3, y:2)

for var i in 0 ..< 3
{
    print("Hello \(i)")
}

var array = ["orange", "lime", "banana"]

for var fruit in array
{
    print(fruit)
}

var dictionary = ["fruit 1" : "orange", "fruit 2" : "lime", "fruit 3": "banana"]

for var (key, value) in dictionary
{
    print("The key is \(key) and the value is \(value)")
}

var i = 0
while i < 3
{
    print("While \(i)")
    i++
}

i = 4
repeat
{
    print("Repeat \(i)")
    i++
}while i < 3

let type = "My Type"

switch type
{
    case "1": print("1")
    case "2", "3", "4": print("2, 3 and 4")
    case let x where x.hasPrefix("My"): print("start with my")
    default: print("Default Type")
}

switch i
{
    case (-2...3): print("From -2 to 3")
    case (3...10): print("From 3 to 10")
    default: print("Non computable value")
}