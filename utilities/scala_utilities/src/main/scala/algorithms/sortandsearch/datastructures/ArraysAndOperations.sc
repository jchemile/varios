println("Start")

def getAndClear(arr: Array[Int], index:Int):Int = {
  val ret = arr(index)
  arr(index) = 0
  ret
}

val a = Array(1,2,3,4,5)

getAndClear(a, 3)
