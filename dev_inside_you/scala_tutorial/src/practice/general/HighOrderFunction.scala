package practice.general

object HighOrderFunction {
  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args:Array[String]): Unit = {
    def showRange(functionName: String, arguments: Range, function: Int => Int): Unit =
      arguments foreach { argument =>
        show(functionName, argument, function)
      }

    def show(functionName: String, argument: Int, function: Int => Int): Unit =
      println(higherOrderRendered(functionName, argument, function))

    def higherOrderRendered(functionName: String, argument: Int, function: Int => Int): String =
      lowerOrderRendered(functionName, argument, result = function(argument))

    def lowerOrderRendered(functionName: String, argument: Int, result: Int): String =
      s"Function: $functionName Argument: $argument Result: $result"

    def factorial(n: Int): Int = {
      @scala.annotation.tailrec
      def loop(x: Int, accu:Int): Int = {
        if(x == 0)
          accu
        else
          loop(
            x = x - 1,
            accu = accu * x
          )
      }
      loop(n,1)
    }

    def fibonacci(n: Int): Int = {
      @scala.annotation.tailrec
      def loop(x: Int, accu1: Int, accu2: Int): Int = {
        if(x == 0)
          accu1
        else if(x == 1)
          accu2
        else
          loop(
            x = x -1,
            accu1 = accu2,
            accu2 = accu1 + accu2
          )
      }
      loop(n,0,1)
    }

    val mod : Int => Int = _ % 2

    show("+ 5", 10, _ + 5)
    show("/ 2", 20, _ / 2)
    show("* 3", 9, _ * 3)
    show("mod 2", 9,  mod)
    show("mod 2", 10,  mod)

    showRange("factorial", 0 to 10, factorial)

    showRange("fibonacci", 0 to 10, fibonacci)

  }

}
