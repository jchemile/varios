package homegrown.collections

trait Foldable[+Element] {
  def fold[Result](seed: Result)(function: (Result, Element) => Result): Result

  def size: Int =
    fold(0) { (acc, _) =>
      acc + 1
    }

  def doesNotContains[Super >: Element](input: Super): Boolean =
    !contains(input)

  def contains[Super >: Element](input: Super): Boolean =
    exists(_ == input)

  def doesNotExists(predicate: Element => Boolean): Boolean =
    !exists(predicate)

  def exists(predicate: Element => Boolean): Boolean =
    fold(false)(_ || predicate(_))

  def notForall(predicate: Element => Boolean): Boolean =
    !forall(predicate)

  def forall(predicate: Element => Boolean): Boolean =
    fold(true)(_ && predicate(_))

  def foreach[Result](function: Element => Result): Unit = {
    fold(()) { (_, current) =>
      function(current)
    }
  }

}
