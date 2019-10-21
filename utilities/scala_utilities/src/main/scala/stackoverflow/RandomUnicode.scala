package stackoverflow

import java.lang.Character
import util.Random

object RandomUnicode {

  def randomUnicodeString(length: Int) =
    LazyList.continually(Random.nextInt(0xFFFF))
            .collect{case c if Character.isDefined(c) => c.toChar}
            .take(length)
            .mkString

  def main(args: Array[String]): Unit = {
    val x = randomUnicodeString(3)

    print(x)
  }

}
