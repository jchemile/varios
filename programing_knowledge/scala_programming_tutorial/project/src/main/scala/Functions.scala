object Functions {

  object Math {
    def add(x: Int, y: Int): Int = x + y

    def square(x: Int) = x *x
  }

  def subtract(x: Int, y: Int): Int = x - y

  def multiply(x: Int, y: Int): Int = x * y

  def divide(x: Int, y: Int): Double = x / y

  def main(args: Array[String]): Unit = {

    println(Math.add(4,5))
    println(Math.square(15))
    println(subtract(4,5))
    println(multiply(4,5))
    println(divide(4,5))

  }

}
