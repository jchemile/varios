package algorithms.sortandsearch

import algorithms.sortandsearch.Sorting._

object AlgorithmsTests {

  def main(args: Array[String]): Unit = {

    val arr = Array.fill(25000)(math.random)

    println("Sorted Testing:")
    println("")
    println("Bubble sort    "  + PerformanceEvaluation.testSort(bubbleSort))
    println("Min sort       "  + PerformanceEvaluation.testSort(minSort))
    println("Insertion Sort "  + PerformanceEvaluation.testSort(insertionSort))
    println("Shell Sort     "  + PerformanceEvaluation.testSort(shellSort))
    println("Bucket Sort    "  + PerformanceEvaluation.testSort(bubbleSort))

    println("*****************************")
    println("Performance Testing:")
    println("")
    println("Bucket sort    " + PerformanceEvaluation.timeFunc(bubbleSort, arr))
    println("Bubble sort    " + PerformanceEvaluation.timeFunc(bubbleSort, arr))
    println("Min sort       " + PerformanceEvaluation.timeFunc(minSort, arr))
    println("Insertion Sort " + PerformanceEvaluation.timeFunc(insertionSort, arr))
    println("Shell Sort     "  + PerformanceEvaluation.timeFunc(shellSort, arr))
    println("*****************************")
    println("Merge Sort:")

    val nums = List.fill(10)(math.random)
    println(mergeSort(nums))
    println(quickSort(nums))



  }

}
