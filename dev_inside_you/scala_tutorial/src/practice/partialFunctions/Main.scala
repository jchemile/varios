package practice.partialFunctions

object Main {

  def main(args: Array[String]): Unit = {
    println("-" * 150)

    code(args)

    println("-" * 150)
  }

  def code(args: Array[String]): Unit = {
    val totalFunction: Int => String =
      argument => "*" + argument + "*"

    type ~>[-Input, +Output] = PartialFunction[Input, Output]

    val partialFunction: Int ~> String = {
      case argument @ 4 => "*" + argument + "*"
    }

    val totalFunctionWithoutSyntacticSugar: Function1[Int, String] = new Function1[Int, String] {
      override def apply(argument: Int): String =
        "*" + argument + "*"
    }

    val partialFunctionWithoutSyntacticSugar: PartialFunction[Int, String] = new PartialFunction[Int, String] {
      override def apply(argument: Int): String =
        if(argument == 4)
          "*" + argument + "*"
        else
          throw new MatchError(argument)

      override def isDefinedAt(argument: Int): Boolean =
        if(argument == 4)
          true
        else
          false
    }

    val randomNumber = scala.util.Random.nextInt

    println(" " + 4)
    println(totalFunction(4))
    println(totalFunctionWithoutSyntacticSugar(4))

    println()

    println(" " + 4)
    println(partialFunction(4))
    println(partialFunctionWithoutSyntacticSugar(4))

  }

}
