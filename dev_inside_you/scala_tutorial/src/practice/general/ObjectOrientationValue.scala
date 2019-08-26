package practice.general

object ObjectOrientationValue {
  def main(args: Array[String]): Unit = {
    println("*" * 50)

    code(args)

    println("*" * 50)
  }

  def code(args: Array[String]): Unit = {
    class F(g: Int => String, h: String => String, i: String => Char) {
      def doStuff(): Unit = {
        val resultOfG: String = g(1337)
        val resultOfH: String = h(resultOfG)
        val resultOgI: Char   = i(resultOfH)

        println(resultOgI)
      }
    }


    def g(number: Int): String = {
      number.toString.reverse
    }

    def h(string: String): String = {
      string
    }

    def i(string: String): Char = {
      if(string.nonEmpty)
        string(0)
      else
        '?'
    }

    val f = new F(g,h,i)
    f.doStuff()
  }

}
