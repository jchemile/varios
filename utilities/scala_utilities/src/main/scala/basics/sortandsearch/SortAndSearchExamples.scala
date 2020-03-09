package basics.sortandsearch
import Sorting._
import Searching._

object SortAndSearchExamples extends App{

  //val arr = Array.fill(10)(math.random)

  //arr.foreach(println)
  //println("")
  //bubbleSort(arr)
  //minSort(arr)
  //insertionSort(arr)
  //shellSort(arr)
  //println("")
  //arr.foreach(println)

  //val nums = Array(8,5,9,1,6,3,2)

  //println(indexOf(nums, 1))
  //println(find(nums, i => i % 3 == 0 && i % 2 == 0))
  //println(binarySearch2(Array(8,5,9,1,6,3,2), 9))

/*
  val students = Array(Student("Doe", "Jane", 99), Student("Smith", "Sam", 83), Student("Long", "Pat", 90))
  students.foreach(println)
  println
  bubbleSortStudent(students, _.lname > _.lname)
  students.foreach(println)
*/

  insertionSortList(List.fill(10)(math.random)).foreach(println)



}
