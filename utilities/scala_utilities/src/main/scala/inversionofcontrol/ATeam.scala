package inversionofcontrol

object ATeam {
  def a(protocol: String => String): Unit = {
    println(protocol("""Hello "b". My name is "a" and I depend of you """))
  }
}
