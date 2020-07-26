package homegrown.collections

import org.scalatest._

class FoldableSuite extends FunSuite with Matchers {
  test("pretending to test contains") {
    new FakeFoldable(1).contains(123) shouldBe false
  }
}

case class FakeFoldable(input: Int) extends Foldable[Int] {
  final override def fold[Result](seed: Result)(function: (Result, Int) => Result): Result =
    function(seed, input)
}
