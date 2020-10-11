package algorithms.sortandsearch

object PerformanceEvaluation {
  def timeFunc(sortFunc: Array[Double] => Unit, a:Array[Double]):Double={
    val copy  = a.map(x => x)
    val start = System.nanoTime()
    sortFunc(copy)
    val end = System.nanoTime()
    (end-start)/1e9
  }
  def testSorted(arr: Array[Double]):Boolean = {
    var ret = true
    for(i<- 0 until arr.length-1){
      if(arr(i)>arr(i+1)) ret = false
    }
    ret
  }
  def testSorted2(arr:Array[Double]): Boolean = {
    var i = 0
    while(i < arr.length-1 && arr(i)<= arr(i+1)) i += 1
    i >= arr.length - 1
  }
  def testSorted3(arr:Array[Double]):Boolean = {
    (arr.zip(arr.tail)).forall(t => t._1 <= t._2)
  }
  def testSort(sortFunc: Array[Double] => Unit): Boolean = {
    val nums = Array.fill(2000)(math.random)
    sortFunc(nums)
    testSorted(nums)
    testSorted3(nums)
  }

  def isSorted(a: Array[Double]): Boolean = {
    //a.zip(a.tail).forall(t => t._1 <= t._2)
    (a, a.tail).zipped.forall(_ <= _)
  }



}
