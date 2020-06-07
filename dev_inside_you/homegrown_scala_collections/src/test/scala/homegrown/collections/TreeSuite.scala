package homegrown.collections

import org.scalatest._

class TreeSuite extends FunSuite with Matchers{
  test("rendered") {

    testRendering(Set.empty)("")
  }

  private def testRendering(set: Set[_])(expected: String) = {
    val actual = set.rendered

    println(Console.YELLOW + actual + Console.RESET)
    println("-" * 50)
    println(Console.GREEN + expected + Console.RESET)
    println("-" * 50)

    actual shouldBe expected
  }
}
