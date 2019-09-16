package homegrown.collections

trait Set extends (String => Boolean) {
  def add(input: String): Set

  def remove(input: String): Set

  //  final def union(that: Set): Set = element =>
  //    this(element) || that(element)

  //  final def intersection(that: Set): Set = element =>
  //    this(element) && that(element)

  //  final def difference(that: Set): Set = element =>
  //    this(element) && !that(element)

  //  final def isSubsetOf(that: Set): Boolean = ???

}

object Set {
  private final case class NonEmpty(element: String, otherElements: Set) extends Set {
    final override def apply(input: String): Boolean =
      input == element || otherElements(input)

    final override def add(input: String): Set =
      NonEmpty(input, otherElements.add(element))

    final override def remove(input: String): Set =
      if (input == element)
        otherElements
      else
        NonEmpty(element, otherElements.remove(input))
  }

  private object Empty extends Set {
    def apply(input: String): Boolean =
      false

    final override def add(input: String): Set =
      NonEmpty(input, Empty)

    final override def remove(input: String): Set =
      this

  }

  val empty: Set = Empty
}
