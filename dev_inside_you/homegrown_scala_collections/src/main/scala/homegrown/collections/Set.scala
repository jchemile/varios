package homegrown.collections

sealed abstract class Set[+Element] extends FoldableFactory[Element, Set] {

  import Set._

  final override protected def factory: Factory[Set] =
    Set

  final def apply[Super >: Element](input: Super): Boolean =
    contains(input)

  final override def contains[Super >: Element](input: Super): Boolean = {
    @scala.annotation.tailrec
    def loop(stack: Stack[Set[Element]]): Boolean = stack match {
      case Stack.Empty =>
        false

      case Stack.NonEmpty(set, otherSetsOnTheStack) => set match {
        case Set.Empty() =>
          loop(otherSetsOnTheStack)

        case Set.NonEmpty(left, element, right) =>
          if (input == element)
            true
          else if (input.hashCode <= element.hashCode)
            loop(otherSetsOnTheStack.push(left))
          else
            loop(otherSetsOnTheStack.push(right))
      }
    }
    loop(Stack.empty.push(this))
  }

  final override def fold[Result](seed: Result)(function: (Result, Element) => Result): Result = {
    @scala.annotation.tailrec
    def loop(stack: Stack[Set[Element]], acc: Result): Result = stack match {
      case Stack.Empty =>
        acc

      case Stack.NonEmpty(set, otherSetsOnTheStack) => set match {
        case Set.Empty() =>
          loop(otherSetsOnTheStack, acc)

        case Set.NonEmpty(left, element, right) =>
          loop(otherSetsOnTheStack.push(right).push(left), function(acc, element))
      }
    }
    loop(Stack.empty.push(this), seed)
  }


  final override def add[Super >: Element](input: Super): Set[Super] = {
    def path(set: Set[Element]): Path[Element] = {
      @scala.annotation.tailrec
      def loop(s: Set[Element], path: Path[Element]): Path[Element] = s match {
        case Set.Empty() =>
          path // JVM pop

        case nonEmpty @ Set.NonEmpty(left, element, right) =>
          if (input == element)
            path.push(Center(nonEmpty)) // push + JVM (push & pop)
          else if (input.hashCode <= element.hashCode)
            loop(left, path.push(Left(nonEmpty))) // push + JVM (push & pop)
          else
            loop(right, path.push(Right(nonEmpty))) // push + JVM (push & pop)
      }

      loop(set, Stack.empty)
    }

    def rebuild(path: Path[Element]): Set[Super] = {
      @scala.annotation.tailrec
      def loop(p: Path[Element], acc: Set[Super]): Set[Super] = p match {
        case Stack.Empty =>
          acc // JVM pop

        case Stack.NonEmpty(direction, otherDirectionsOnTheStack) =>
          loop(
            p   = otherDirectionsOnTheStack, // pop
            acc = direction match {
              case Left(nonEmpty)   => nonEmpty.copy(left = acc) // JVM (push & pop)
              case Center(nonEmpty) => nonEmpty // JVM pop
              case Right(nonEmpty)  => nonEmpty.copy(right = acc) // JVM (push & pop)
            }
          )
      }

      loop(path, NonEmpty(empty, input, empty))
    }

    rebuild(path(this))
  }

  final override def remove[Super >: Element](input: Super): Set[Super] = {
    def path(set: Set[Element]): Path[Element] = {
      @scala.annotation.tailrec
      def loop(s: Set[Element], path: Path[Element]): Path[Element] = s match {
        case Set.Empty() =>
          path

        case nonEmpty @ Set.NonEmpty(left, element, right) =>
          if(input == element)
            path.push(Center(nonEmpty))
          else if (input.hashCode <= element.hashCode)
            loop(left, path.push(Left(nonEmpty)))
          else
            loop(right, path.push(Right(nonEmpty)))
      }
      loop(set, Stack.empty)
    }

    def rebuild(path: Path[Element]): Set[Super] = {
      @scala.annotation.tailrec
      def loop(p: Path[Element], acc: Set[Super]): Set[Super] = p match {
        case Stack.Empty =>
          acc

        case Stack.NonEmpty(direction, otherDirectionsOnTheStack) =>
          loop(
            p   = otherDirectionsOnTheStack,
            acc = direction match {
              case Left(nonEmpty)                       => nonEmpty.copy(left = acc)
              case Center(Set.NonEmpty(left, _, right)) => left.union(right)
              case Right(nonEmpty)                      => nonEmpty.copy(right = acc)
            }
          )
      }
      loop(path, empty)
    }
    rebuild(path(this))
  }

  final def union[Super >: Element](that: Set[Super]): Set[Super] =
    fold(that)(_ add _)

  final def intersection(predicate: Element => Boolean): Set[Element] =
    filter(predicate)

  final def difference(predicate: Element => Boolean): Set[Element] =
    fold[Set[Element]](empty) { (acc, current) =>
      if (predicate(current))
        acc
      else
        acc.add(current)
    }

  final def isSubsetOf(predicate: Element => Boolean): Boolean =
    forall(predicate)

  final def isSupersetOf[Super >: Element](that: Set[Super]): Boolean =
    that.isSubsetOf(this)

  final override def equals(other: Any): Boolean =
    other match {
      case that: Set[Element] => this.isSubsetOf(that) && that.isSubsetOf(this)
      case _                  => false
    }

  final override def hashCode: Int =
    fold(41)(_ + _.hashCode)

  final def isEmpty: Boolean =
    this.isInstanceOf[Empty.type]

  final def nonEmpty: Boolean =
    !isEmpty

  def isSingleton: Boolean

  def sample: Option[Element]

  final def rendered: String = {
    def leftOrRight(isLeft: Boolean, isFirst: Boolean): String =
      if (isFirst)
        ""
      else if (isLeft)
        "└── "
      else
        "├── "

    def leftOrRightParent(isLeft: Boolean, isFirst: Boolean): String =
      if (isFirst)
        ""
      else if (isLeft)
        "    "
      else
        "│    "

    def loop(prefix: String, isLeft: Boolean, isFirst: Boolean, set: Set[Element]): String = {
      set match {
        case Empty() =>
          ""
        case NonEmpty(left, element, right) =>
          prefix + leftOrRight(isLeft, isFirst) + element + "\n" +
            loop(prefix + leftOrRightParent(isLeft, isFirst), isLeft  = false, isFirst = false, right) +
            loop(prefix + leftOrRightParent(isLeft, isFirst), isLeft  = true, isFirst = false, left)
      }
    }

    loop(
      prefix  = "",
      isLeft  = true,
      isFirst = true,
      set     = this
    )
  }

}

object Set extends Factory[Set] {
  private final case class NonEmpty[+Element](left: Set[Element], element: Element, right: Set[Element]) extends Set[Element] {
    final def isSingleton: Boolean =
      left.isEmpty && right.isEmpty

    final override def sample: Option[Element] =
      Some(element)

    final override def toString: String =
      "{ " + element + otherElementsSplitByCommaSpace(left) + otherElementsSplitByCommaSpace(right) + " }"

    private[this] def otherElementsSplitByCommaSpace(input: Set[Element]) =
      input.fold("") { (acc, current) =>
        s"$acc, $current"
      }
  }

  private object Empty extends Set[Nothing] {
    def unapply[Element](set: Set[Element]): Boolean =
      set.isInstanceOf[Empty.type]

    final override def isSingleton: Boolean =
      false

    final override def sample: Option[Nothing] =
      None

    final override def toString: String =
      "{}"
  }

  final override def empty: Set[Nothing] = Empty

  private type Path[Element] = Stack[Direction[Element]]

  private sealed trait Direction[Element] extends Any
  private final case class Left[Element](nonEmpty: NonEmpty[Element]) extends AnyVal with Direction[Element]
  private final case class Center[Element](nonEmpty: NonEmpty[Element]) extends AnyVal with Direction[Element]
  private final case class Right[Element](nonEmpty: NonEmpty[Element]) extends AnyVal with Direction[Element]

  implicit def SetCanBeUsedAsFunction1[Element](set: Set[Element]): Element => Boolean =
    set.apply
}
