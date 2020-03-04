package basics.sortandsearch

object Sorting {

  def bubbleSort(a: Array[Double]):Unit = {
    for(i <- 0 until a.length-1){
      for(j <- 0 until a.length-1-i) {
        if(a(j) > a(j+1)){
          val tmp = a(j)
          a(j) = a(j+1)
          a(j+1) = tmp
        }
      }
    }
  }

  def minSort(a: Array[Double]):Unit = {
    for(i <- 0 until a.length -1){
      var min = i
      for(j <- i +1 until a.length){
        if(a(j) < a(min)) min = j
      }
      val tmp = a(i)
      a(i) = a(min)
      a(min) = tmp
    }
  }

  def insertionSort(a: Array[Double]): Unit = {
    for(i <- 1 until a.length) {
      var j = i - 1
      var tmp = a(i)
      while(j >= 0 && tmp < a(j)){
        a(j+1) = a(j)
        j -= 1
      }
      a(j+1) = tmp
    }
  }

  def shellSort(a: Array[Double]): Unit = {
    var gap = a.length/2
    while(gap >= 1){
      for(i <- gap until a.length){
        var j = i - gap
        var tmp = a(i)
        while(j >= 0 && tmp < a(j)){
          a(j+gap) = a(j)
          j -= gap
        }
        a(j+gap) = tmp
      }
      gap = (gap/2.2).round.toInt
    }
  }

  def isSorted(a: Array[Double]): Boolean = {
    //a.zip(a.tail).forall(t => t._1 <= t._2)
    (a, a.tail).zipped.forall(_ <= _)
  }


}
