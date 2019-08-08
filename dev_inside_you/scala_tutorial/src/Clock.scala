object Clock {

  class StringWithLength(val string: String){
    val length: Int = string.length
  }

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    val tuple1 = new Tuple1("sth")
    println(tuple1._1)

    println()

    val tuple2 = 1337 -> "one three three seven"
    println(tuple2._1)
    println(tuple2._2)

    val swapped = tuple2.swap
    println(swapped._1)
    println(swapped._2)

    println()

    val tuple3 = (1337, "one three three seven", 'c')
    println(tuple3._1)
    println(tuple3._2)
    println(tuple3._3)

    def addTuples(first: StringWithLength, second: StringWithLength): StringWithLength =
      new StringWithLength(
        first.string + second.string
      )

    val result: StringWithLength =
      addTuples(
        first = new StringWithLength("hello"),
        second = new StringWithLength("World")
      )

    println()
    println(result)
    println(result.string)
    println(result.length)


  }
}
