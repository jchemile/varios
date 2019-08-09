package project.clock

object clock {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    val eight =
      TwoDimensionalString(
        top    = " _ ",
        middle = "|_|",
        bottom = "|_|"
      )

    val seven =
      TwoDimensionalString(
        top    = " _ ",
        middle = "  |",
        bottom = "  |"
      )

    val result = seven + eight

    result.show()

    TwoDimensionalString.QuestionMarks.show()
  }

}
