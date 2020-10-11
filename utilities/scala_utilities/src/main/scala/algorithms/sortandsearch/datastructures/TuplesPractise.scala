package algorithms.sortandsearch.datastructures

object TuplesPractise{

  def main(args: Array[String]): Unit = {
    //val myTuple: (Int, String) = ???
    val myValue: (String, String) = ("This is part1", "This is part2")

    val myTuple_acc: (Int, String) = (12, "a string")
    val twelve: Int = myTuple_acc._1
    val aString: String = myTuple_acc._2

    def sumAll(a: Int, b: Int, c: Int): Int = a + b + c
    val input = (12, 5, 6)

    println(twelve)
    println(aString)
    println(sumAll(input._1,input._2,input._3))
  }
}
