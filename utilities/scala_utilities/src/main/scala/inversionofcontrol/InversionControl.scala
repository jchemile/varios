package inversionofcontrol

object InversionControl {

  def main(args: Array[String]): Unit = {
    println("*" * 50)

    code(args)

    println("*" * 50)
  }

  def code(args: Array[String]): Unit = {
    ATeam.a(protocol = BTeam.b)
  }

}
