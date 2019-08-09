package project.clock

import java.time.LocalDateTime
import java.time.format.DateTimeFormatter

object TwoDimensionalTime {
  val Stars: TwoDimensionalString =
    TwoDimensionalString(
      top =     "   ",
      middle =  " * ",
      bottom =  " * "
    )

  def showCurrent(pattern: String): Unit = {
    show(LocalDateTime.now, pattern)
  }

  private[this] def show(time: LocalDateTime, pattern:String): Unit = {
    formatted(time, pattern).show()
  }

  private[this] def formatted(time: LocalDateTime, pattern:String): TwoDimensionalString ={
    var result: TwoDimensionalString = TwoDimensionalString.Empty

    oneDimensional(time, pattern) foreach {timeDigit =>
      if(timeDigit == ':')
        result += Stars
      else
        result += TwoDimensionalDigit(timeDigit.toString.toInt)
    }
    result
  }

  private[this] def oneDimensional(time: LocalDateTime, pattern:String): String = {
    time.format(DateTimeFormatter.ofPattern(pattern))
  }

}
