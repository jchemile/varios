package project.clock

object clock {

  def main(args: Array[String]): Unit = {
    println("*" * 150)

    code(args)

    println("*" * 150)
  }

  def code(args: Array[String]): Unit = {
    TwoDimensionalTime.showCurrent(pattern = "HH:mm:ss")
  }

}
