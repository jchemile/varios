package basics.sortandsearch
import Sorting._
import Searching._

object SortAndSearchExamples{

  def main(args: Array[String]): Unit = {

    val nums = Array(1,6,3,8,4,7,8,9,6,4,33,56,7,8,65,43)

    println(nums.indexOf(4))
    println(nums.indexOf(7))
    println(sequentialSearch(nums,4))
    println(sequentialSearch(nums,7))
    println(sequentialSearch(nums,2))
  }


}
