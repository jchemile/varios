object HighOrderFunction {
  def main(args: Array[String]): Unit = {
    println("*" * 131)

    code(args)

    println("*" * 131)
  }

  def code(args:Array[String]): Unit = {
    def show(functionName: String, argument: Int, function: Int => Int): Unit =
      println(higherOrderRendered(functionName, argument, function))

    def higherOrderRendered(functionName: String, argument: Int, function: Int => Int): String =
      lowerOrderRendered(functionName, argument, result = function(argument))

    def lowerOrderRendered(functionName: String, argument: Int, result: Int): String =
      s"Function: $functionName Argument: $argument Result: $result"

    val mod : Int => Int = _ % 2

    show("+ 5", 10, _ + 5)
    show("/ 2", 20, _ / 2)
    show("* 3", 9, _ * 3)
    show("mod 2", 9,  mod)
    show("mod 2", 10,  mod)


  }

}
