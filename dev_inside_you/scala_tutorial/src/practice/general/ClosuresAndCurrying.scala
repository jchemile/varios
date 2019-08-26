package practice.general

object ClosuresAndCurrying {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {

    def closeTerm(freeVariable: Int)(boundVariable: Int): Int =
      freeVariable + boundVariable

    def uncurriedClosedTerm(freeVariable: Int, boundVariable: Int): Int =
      freeVariable + boundVariable

    println(uncurriedClosedTerm(freeVariable =   7, 1))
    println(uncurriedClosedTerm(freeVariable =  10, 2))
    println(uncurriedClosedTerm(freeVariable =  20, 3))
    println(uncurriedClosedTerm(freeVariable =  30, 4))

    println()

    println(closeTerm(freeVariable =  7)(0))
    println(closeTerm(freeVariable = 10)(1))
    println(closeTerm(freeVariable = 20)(2))
    println(closeTerm(freeVariable = 30)(3))

  }

}
