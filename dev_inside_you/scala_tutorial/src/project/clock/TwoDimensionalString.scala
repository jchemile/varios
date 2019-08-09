package project.clock

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
    require(
      requirement = doAllRowsHaveSameLength,
      message = "All rows must have the same lenght!"
    )

    private[this] def doAllRowsHaveSameLength: Boolean =
      top.length == middle.length && middle.length == bottom.length

    def show(): Unit = {
      println(rendered)
    }

    private[this] def rendered: String =
      top    + "\n" +
        middle + "\n" +
        bottom
}

object TwoDimensionalString {
  val QuestionMarks: TwoDimensionalString =
    TwoDimensionalString(
      top    = "   ",
      middle = " ? ",
      bottom = " ? "
    )
  val Empty: TwoDimensionalString =
    TwoDimensionalString(
      top    = "   ",
      middle = " ? ",
      bottom = " ? "
    )
}

