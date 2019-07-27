object Factorial {

  def main(args: Array[String]): Unit = {

    def factorial(n: Int): Int = {
      var iterations = 0

      @scala.annotation.tailrec
      def loop(x: Int, accu: Int): Int = {
        iterations += 1

        if (x == 0)
          accu
        else
          loop(x = x - 1, accu = accu * x)
      }

      val result = loop(n,1)
      println("iterations: " + iterations)

      result
    }

    def fibonacci(n: Int): Int = {

      @scala.annotation.tailrec
      def loop(x: Int, accu1: Int, accu2: Int): Int = {
        if(x == 0)
          accu1
        else if (x == 1)
          accu2
        else
          loop(x = x-1, accu1 = accu2, accu2 = accu1)
      }

      val result = loop(n,0,1)

      result
    }

    println("0 => " + fibonacci(0))
    println("1 => " + fibonacci(1))
    println("2 => " + fibonacci(2))
    println("3 => " + fibonacci(3))
    println("4 => " + fibonacci(4))
    println("5 => " + fibonacci(5))
    println("6 => " + fibonacci(6))
    println("7 => " + fibonacci(7))
    println("8 => " + fibonacci(8))
  }

}
