package collections

object ArraysPractise extends App{
  def fillArray(arr: Array[Int], value: Int, index: Int): Unit ={
    if(index < arr.length){
      arr(index) = value
      fillArray(arr, value, index + 1)
    }
  }

  def printArray(arr: Array[Int], index: Int): Unit ={
    if(index < arr.length) {
      print(arr(index) + " ")
      printArray(arr, index+1)
    } else {
      println()
    }
  }

  def readArray(arr: Array[Int], index: Int): Unit ={
    if (index < arr.length){
      arr(index) = readInt()
      readArray(arr, index+1)
    }
  }

  def sumArray(arr: Array[Int], index: Int): Int = {
    if (index >= arr.length) 0
    else arr(index) + sumArray(arr, index+1)
  }

  val nums = new Array[Int](100)
  fillArray(nums,5,0)
  println(nums)
  printArray(nums, 5)
  val smallNums = new Array[Int](5)
  readArray(smallNums, 0)
  printArray(smallNums, 0)
  println(sumArray(nums,0))
  println(sumArray(smallNums,0))




}
