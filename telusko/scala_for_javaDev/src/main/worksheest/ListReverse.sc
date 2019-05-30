var nums = List(4,7,2,3,8,6)

nums.foreach{i:Int => print(i + " ")}

var reverseNums = nums.reverse

reverseNums.foreach{i:Int => print(i + " ")}

var deletedNums = nums.drop(2).take(3)
var deletedNumsSugar = nums drop 2 // Sintactic Sugar

deletedNums.foreach{i:Int => print(i + " ")}

