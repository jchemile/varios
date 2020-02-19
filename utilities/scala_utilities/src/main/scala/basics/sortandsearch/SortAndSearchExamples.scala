package basics.sortandsearch
import sorting._

object SortAndSearchExamples extends App{

  val arr = Array.fill(10)(math.random)

  arr.foreach(println)
  println("")
  //bubbleSort(arr)
  minSort(arr)
  println("")
  arr.foreach(println)

}
