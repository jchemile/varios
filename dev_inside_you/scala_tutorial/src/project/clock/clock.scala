package project.clock

object clock {

  final case class TwoDimensionalString(
                                       top:    String,
                                       middle: String,
                                       bottom: String
                                       ){
    def +(that: TwoDimensionalString): TwoDimensionalString =
      TwoDimensionalString(
        top = this.top       + that.top,
        middle = this.middle + that.middle,
        bottom = this.bottom + that.bottom
      )
  }

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    println("Hello World")
  }

}
