object Strings {

  val num1 = 75
  val num2 = 100.25
  val str1: String = "Hello World"
  val str2: String = " Max"
  def main(args: Array[String]): Unit = {

    //Some Methods
    println(str1.length())
    println(str1.concat(str2))
    println(str1.concat(str2))
    println(str1 + str2)

    // Format Wildcars
    val result = printf("(%d -- %f -- %s)", num1, num2, str1)
    println(result)
    println("(%d -- %f -- %s)".format(num1, num2, str1))
  }

}
