package basics.sortandsearch

import basics.sortandsearch.Sorting._

object PerformanceTest {

  def main(args: Array[String]): Unit = {

    val arr = Array.fill(10000)(math.random)

    def timeFunc(sortFunc: Array[Double] => Unit, a:Array[Double]):Double={
      val copy  = a.map(x => x)
      val start = System.nanoTime()
      sortFunc(copy)
      val end = System.nanoTime()
      (end-start)/1e9
    }

    println("Performance Testing")
    println("Bubble sort    " + timeFunc(bubbleSort, arr))
    println("Min sort       " + timeFunc(minSort, arr))
    println("Insertion Sort " + timeFunc(insertionSort, arr))
    println("Shell Sor t     " + timeFunc(shellSort, arr))
    println("Bucket Sort    " + timeFunc(bubbleSort, arr))
  }

}
