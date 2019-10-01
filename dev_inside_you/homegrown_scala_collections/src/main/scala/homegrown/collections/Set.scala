package homegrown.collections

import homegrown.collections.Set.NonEmpty

sealed trait Set[Element] extends (Element => Boolean) {
  import Set._

  final override def apply(input: Element): Boolean =
    contains(input)

  final def doesNotContains(input: Element): Boolean =
    !contains(input)

  final def contains(input: Element): Boolean =
    exists(_ == input)

  final def doesNotExists(predicate: Element => Boolean): Boolean =
    !exists(predicate)

  final def exists(predicate: Element => Boolean): Boolean =
    fold(false)(_ || predicate(_))

  final def notForall(predicate: Element => Boolean): Boolean =
    !forall(predicate)

  final def forall(predicate: Element => Boolean): Boolean =
    fold(true)(_ && predicate(_))

  final def add(input: Element): Set[Element] = {
    fold(NonEmpty(input, empty)) {(acc, current) =>
      if (current == input)
        acc
      else
        NonEmpty(current, acc)
    }
  }

  final def remove(input: Element): Set[Element] =
    fold(empty[Element]) { (acc, current) =>
      if (current == input)
        acc
      else
        NonEmpty(current, acc)
    }

  final def union(that: Set[Element]): Set[Element] =
    fold(that) (_ add _)


  final def intersection(predicate: Element => Boolean): Set[Element] =
    fold(empty[Element]) {(acc, current) =>
      if(predicate(current))
        acc.add(current)
      else
        acc
    }

  final def filter(predicate: Element => Boolean): Set[Element] =
    fold(empty[Element]) { (acc, current) =>
      if (predicate(current))
        acc.add(current)
      else
        acc
    }

  final def difference(predicate: Element => Boolean): Set[Element] =
    fold(empty[Element]) { (acc, current) =>
      if (predicate(current))
        acc
      else
        acc.add(current)
    }

  final def isSubsetOf(predicate: Element => Boolean): Boolean = {
    forall(predicate)
  }

  final def isSupersetOf(that: Set[Element]): Boolean =
    that.isSubsetOf(this)

  final override def equals(other:Any): Boolean = other
    match {
    case that: Set[Element] => this.isSubsetOf(that) && that.isSubsetOf(this)
    case _         => false
  }

  final override def hashCode: Int =
    fold(41)(_ + _.hashCode())

  final override def toString: String =
    if (isEmpty)
      "Set()"
    else
      ???

  final def size: Int =
    fold(0) { (acc, _) =>
      acc + 1
    }

  final def isEmpty: Boolean =
    this.isInstanceOf[Empty[Element]]

  final def nonEmpty: Boolean =
    !isEmpty

  final def isSingleton: Boolean =
    if(isEmpty)
      false
    else{
      val nonEmptySet = this.asInstanceOf[NonEmpty[Element]]
      val otherElements = nonEmptySet.otherElements

      otherElements.isEmpty
    }

  def sample: Option[Element] =
    if(isEmpty)
      None
    else {
      val nonEmptySet = this.asInstanceOf[NonEmpty[Element]]
      val element = nonEmptySet.element

      Some(element)
    }

  final def foreach[Result](function: Element => Result): Unit = {
    fold(()) {(_, current) =>
      function(current)
    }
  }

  final def map[Result](function: Element => Result): Set[Result] =
    fold(empty[Result])(_ add function(_))

  final def flatMap[Result](function: Element => Set[Result]): Set[Result] = {
    fold(empty[Result]) {(acc, current) =>
      function(current).fold(acc) (_ add _)
    }
  }

  @scala.annotation.tailrec
  final def fold[Result](seed: Result)(function: (Result, Element) => Result): Result = {
    if(isEmpty)
      (seed)
    else {
      val nonEmptySet = this.asInstanceOf[NonEmpty[Element]]
      val element = nonEmptySet.element
      val otherElements = nonEmptySet.otherElements

      otherElements.fold(function(seed, element))(function)
    }
  }

}

object Set {
  def apply[Element](element: Element, otherElement: Element*): Set[Element] =
    otherElement.foldLeft(empty[Element].add(element))(_ add _)

  private final case class NonEmpty[Element](element: Element, otherElements: Set[Element]) extends Set[Element]

  private object NonEmpty{
    private[this] def unapply(any: Any): Option[(String, Any)] =
      patterMatchingNotSupported
  }

  private class Empty[Element] extends Set[Element] {
    private[this] def unapply(any:Any): Option[(String, Any)] =
      patterMatchingNotSupported
  }

  private[this] def unapply(any: Any): Option[(String, Any)] =
    patterMatchingNotSupported

  private[this] def patterMatchingNotSupported: Nothing =
    sys.error("pattern matching on Sets is expensive and therefore not supported")

  def empty[Element]: Set[Element] = new Empty[Element]
}
