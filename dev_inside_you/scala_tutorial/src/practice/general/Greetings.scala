package practice.general

object Greetings {
  def main(args: Array[String]): Unit = {
    println("*" * 30)
    code(args)
    println("*" * 30)
  }

  def code(args: Array[String]): Unit = {

    def loopOld(code: () => Unit): Unit =
      1 to 10 foreach { _ =>
        code()
      }

    loopOld {() =>
       println("hi")
    }

    println()

    def loop10(code: => Unit): Unit =
      1 to 10 foreach{_ =>
        code
      }

    loop10{
      println("hi")
    }

  }
}
