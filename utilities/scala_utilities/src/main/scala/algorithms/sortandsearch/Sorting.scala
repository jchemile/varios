package algorithms.sortandsearch

import scala.annotation.tailrec

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

  case class Student(lname: String, fname:String, age: Int)

  def bubbleSortStudent(a:Array[Student], gt: (Student, Student) => Boolean): Unit = {
    for(i <- 0 until a.length-1){
      for(j <- 0 until a.length-1-i){
        if(gt(a(j), a(j+1))){
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
      if(min != i){
        val tmp = a(i)
        a(i) = a(min)
        a(min) = tmp
      }
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

  def insertionSortBis(arr: Array[Double]):Unit = {
    for (i <- 1 until arr.length){
      val tmp = arr(i)
      var j = i - 1
      while(j>1 && arr(j) > tmp){
        arr(j+1) = arr(j)
        j -= 1
      }
      arr(j+1) = tmp
    }
  }

  def insertionSortList(lst:List[Double]):List[Double] = {
    def insert(x: Double, sorted:List[Double]): List[Double] = sorted match {
      case Nil => x:: Nil
      case h::t => if(x < h) x::sorted else h::insert(x,t)
    }

    def helper(sorted:List[Double], unsorted:List[Double]):List[Double] =
      unsorted match {
        case Nil => sorted
        case h::t => helper(insert(h,sorted), t)
      }
    helper(Nil,lst)
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

  def bucketSort(a:Array[Double]): Unit = {
    val min = a.min
    val max = a.max
    val buckets = Array.fill(a.length)(List[Double]())
    for(x <- a){
      val b = ((x-min)*(buckets.length-1)/(max-min)).toInt
      buckets(b) ::= x
    }
    var i = 0
    for(bucket <- buckets; x <- bucket){
      a(i) = x
      i += 1
    }
    insertionSort(a)
  }

  //This implementation make crash for larger imputs
  def merge(a:List[Double], b:List[Double]):List[Double] = (a,b) match {
    case (Nil, _) => b
    case (_, Nil) => a
    case (x::xs, y::ys) =>
      if(x<=y) x :: merge(xs,b)
      else y :: merge(a,ys)
  }

  def mergeSort(lst:List[Double]): List[Double] = {
    if(lst.length < 2) lst
    else {
      val (first, second) = lst.splitAt(lst.length/2)
      merge(mergeSort(first),mergeSort(second))
    }
  }

  def quickSort(lst: List[Double]): List[Double] = lst match {
    case Nil => Nil
    case x:: Nil => lst
    case _ =>
      val p = lst.head
      val (before, after) = lst.tail.partition(_<p)
      quickSort(before) ++ (p :: quickSort(after))
  }

}
