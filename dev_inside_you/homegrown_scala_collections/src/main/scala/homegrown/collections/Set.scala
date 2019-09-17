package homegrown.collections

trait Set extends (String => Boolean) {
  def add(input: String): Set
  def remove(input: String): Set
  def union(that: Set): Set
  def intersection(that: Set): Set
  def difference(that: Set): Set
  def isSubsetOf(that: Set): Boolean

  final def isSupersetOf(that: Set): Boolean =
    that.isSubsetOf(this)

  final override def equals(other:Any): Boolean = other
    match {
    case that: Set => this.isSubsetOf(that) && that.isSubsetOf(this)
    case _         => false

  }
}

object Set {
  private final case class NonEmpty(element: String, otherElements: Set) extends Set {
    final override def apply(input: String): Boolean =
      input == element || otherElements(input)

    final override def add(input: String): Set =
      if(input == element)
        this
      else
        NonEmpty(input, otherElements.add(element))

    final override def remove(input: String): Set =
      if (input == element)
        otherElements
      else
        NonEmpty(element, otherElements.remove(input))

    final override def union(that: Set): Set =
      otherElements.union(that.add(element))

    final override def intersection(that: Set): Set = {
      val intersectionOfOthers = otherElements.intersection(that)
      if(that(element))
        intersectionOfOthers.add(element)
      else
        intersectionOfOthers
    }

    final override def difference(that: Set): Set = {
      val differenceOfOthers = otherElements.difference(that)

      if(that(element))
        differenceOfOthers
      else
        differenceOfOthers.add(element)
    }

    final override def isSubsetOf(that: Set): Boolean =
      that(element) && otherElements.isSubsetOf(that)
  }

  private object Empty extends Set {
    def apply(input: String): Boolean =
      false

    final override def add(input: String): Set =
      NonEmpty(input, Empty)

    final override def remove(input: String): Set =
      this

    final override def union(that: Set): Set =
      that

    final override def intersection(that: Set): Set =
      this

    final override def difference(that: Set): Set =
      this

    final override def isSubsetOf(that: Set): Boolean =
      true
  }

  val empty: Set = Empty
}
