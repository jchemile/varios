package homegrown.collections

import org.scalatest._

class TreeSuite extends FunSuite with Matchers{
  test("rendered") {
    println("-" * 50)

    testRendering(Set.empty)("")

    testRendering(Set("*4*")){
      s"""|*4*
          |""".stripMargin
    }

  }

  private def testRendering(set: Set[_])(expected: String) = {
    val actual = set.rendered

    println(Console.YELLOW + actual + Console.RESET)
    println("-" * 25)
    println(Console.GREEN + expected + Console.RESET)
    println("-" * 50)

    actual shouldBe expected
  }
}
