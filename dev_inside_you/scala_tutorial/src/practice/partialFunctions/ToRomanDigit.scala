package practice.partialFunctions

object ToRomanDigit {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    type ~> [-Input, +Output] =
      PartialFunction[Input, Output]

    def toRomanNumeralDigit(number: Int): String = {
      val partialFunction: Int ~> String = {
        case 0 => "0: N"
        case 1 => "1: I"
        case 2 => "2: II"
        case 3 => "3: III"
        case 4 => "4: IV"
        case 5 => "5: V"
        case 6 => "6: VI"
        case 7 => "7: VII"
        case 8 => "8: VIII"
        case 9 => "9: IX"
      }

      partialFunction(number)
    }

    0 to 9 map toRomanNumeralDigit foreach println
  }
}
