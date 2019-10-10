package homegrown.collections

sealed trait Set[+Element] extends FoldableFactory[Element] {
  import Set._

  final def apply[Super >: Element](input: Super): Boolean =
    contains(input)

  @scala.annotation.tailrec
  final override def fold[Result](seed: Result)(function: (Result, Element) => Result): Result =
    if(isEmpty)
      (seed)
    else
      otherElementsOrThrowException.fold(function(seed, elementOrThrowException))(function)

  final def add[Super >: Element](input: Super): Set[Super] = {
    fold(NonEmpty(input, empty)) {(acc, current) =>
      if (current == input)
        acc
      else
        NonEmpty(current, acc)
    }
  }

  final def remove[Super >: Element](input: Super): Set[Super] =
    fold(empty[Element]) { (acc, current) =>
      if (current == input)
        acc
      else
        NonEmpty(current, acc)
    }

  final def union[Super >: Element](that: Set[Super]): Set[Super] =
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

  final def isSupersetOf[Super >: Element](that: Set[Super]): Boolean =
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
      "{}"
    else {
      val otherElementsSplitByCommaSpace =
        otherElementsOrThrowException.fold("") {(acc, current) =>
            s"$acc, $current" }

      "{" + elementOrThrowException + otherElementsSplitByCommaSpace + "}"
    }

  final  def isEmpty: Boolean =
    this.isInstanceOf[Empty.type]

  final def nonEmpty: Boolean =
    !isEmpty

  final def isSingleton: Boolean =
    nonEmpty && otherElementsOrThrowException.isEmpty

  def sample: Option[Element] =
    if(isEmpty)
      None
    else
      Some(elementOrThrowException)

//  final def map[Result](function: Element => Result): Set[Result] =
//    fold(empty[Result])(_ add function(_))

  final def flatMap[Result](function: Element => Set[Result]): Set[Result] = {
    fold(empty[Result]) {(acc, current) =>
      function(current).fold(acc) (_ add _)
    }
  }

  private[this] lazy val(elementOrThrowException, otherElementsOrThrowException) = {
    val nonEmptySet = this.asInstanceOf[NonEmpty[Element]]
    val element = nonEmptySet.element
    val otherElements = nonEmptySet.otherElements

    element -> otherElements
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

  private class Empty[Element] extends Set[Nothing] {
    private[this] def unapply(any:Any): Option[(String, Any)] =
      patterMatchingNotSupported
  }

  private[this] def unapply(any: Any): Option[(String, Any)] =
    patterMatchingNotSupported

  private[this] def patterMatchingNotSupported: Nothing =
    sys.error("pattern matching on Sets is expensive and therefore not supported")

  final override def empty: Set[Nothing] = Empty

  implicit def setCanBeUsedAsFunction1[Element](set: Set[Element]): Element => Boolean =
    set.apply


}
