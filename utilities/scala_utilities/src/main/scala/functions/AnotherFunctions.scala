package functions

object AnotherFunctions {

  def main(args: Array[String]): Unit = {

    def square(x:Double) = x * x //call by value

    def sumOfSquares(x: Double, y:Double) = square(x) + square(y)

    def square_name(x: => Double) = {} //call by name

    def myFct_varArg(bindings: Int*) = {} // Bindings is a sequences of int, containing a  varying # of arguments

    def factorial(n: Int): Int =
      if (n == 1) n
      else factorial(n - 1) * n

    factorial(3)

    factorial(4)
  }

}
