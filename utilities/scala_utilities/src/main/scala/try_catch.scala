object try_catch {

  def division(numerator : Int, denumerator:Int): Double = {
    val result = numerator/denumerator
    result
  }

  def main(args: Array[String]): Unit = {
    val test = division(10,5)
    println(test)

    try
      {
        val test = division(10,0)
      }catch {
        case x: ArithmeticException => println("Zero divition ERROR")
      }


  }

}
