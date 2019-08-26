package practice.general

object TupplesPractice {

  final case class StringWithLength(string: String){
        val length: Int = string.length

        def +(that: StringWithLength): StringWithLength =
          new StringWithLength(
            this.string + that.string
          )
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

    val result: StringWithLength =
      new StringWithLength("hello") + (new StringWithLength("world"))

    println()
    println(result)
    println(result.string)
    println(result.length)


  }
}
