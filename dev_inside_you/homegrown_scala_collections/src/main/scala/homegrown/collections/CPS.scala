package homegrown.collections

import java.util.concurrent.locks.Condition

object CPS extends App {
  println("\u2500" * 50)

  {
    val five = 5
    val fifteen = five + 10

    println(fifteen)
  }

  println("\u2500" * 25)

  {
    val five = identity(5)
    val fifteen = five + identity(10)

    println(fifteen)
  }

  println("\u2500" * 25)

  def cps[Input, ContinuationResult](input: Input)(continuation: Input => ContinuationResult): ContinuationResult =
    continuation(input)

  {
    val five = cps(5)(identity[Int])
    val fifteen = five + identity(10)

    println(fifteen)
  }

  println("\u2500" * 25)

  {
    cps(5) { five =>
      val fifteen = five + identity(10)

      println(fifteen)
    }
  }

  println("\u2500" * 25)

  {
    cps(5) { five =>
      val fifteen = five + cps(10)(identity[Int])

      println(fifteen)
    }
  }

  println("\u2500" * 25)

  {
    cps[Int, Unit](5) { five =>
      cps[Int, Unit](five + 10) { fifteen =>
        cps(fifteen)(println)
      }
    }
  }

  import scala.util.continuations._
  println("\u2500" * 25)

  {
    reset {
      val five = shift(cps[Int, Unit](5))
      val fifteen = five + shift(cps[Int, Unit](10))
      println(fifteen)
    }
  }

  println("\u2500" * 25)

  {
    reset {
      def shiftCps(input: Int): Int @cpsParam[Unit, Unit] =
        shift(cps[Int, Unit](input))

      val five = shiftCps(5)
      val fifteen = five + shiftCps(10)
      println(fifteen)
    }
  }

  println("\u2500" * 25)

  {
    val string = reset {
      def shiftCps(input: Int): Int @cpsParam[String, String] =
        shift(cps[Int, String](input))

      val five = shiftCps(5)
      val fifteen = five + shiftCps(10)
      fifteen.toString
    }

    println(string)
  }

  def when[I, E](condition: Boolean)(ifCase: => I)(elseCase: => E): Any =
    if (condition)
      ifCase
    else
      elseCase

  println("\u2500" * 25)

  val x = 5

  println {
    if (x > 3)
      "good"
    else
      "bad"
  }

  println("\u2500" * 25)

  @scala.annotation.tailrec
  def loop[Input](condition: => Boolean)(body: => Unit): Unit = {
    if (condition) {
      body

      loop(condition)(body)
    }
  }

  var acc = 0

  loop(acc < 10) {
    acc += 1
  }

  println(acc)

  println("\u2500" * 50)

}
