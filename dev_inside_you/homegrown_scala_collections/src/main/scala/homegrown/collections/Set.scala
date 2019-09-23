package homegrown.collections

import homegrown.collections.Set.NonEmpty

sealed trait Set extends (String => Boolean) {
  import Set._
  final override def apply(input: String): Boolean = {
    var result = false

    foreach { current =>
      result = result || current == input
    }

    result
  }

  final def add(input: String): Set = {
    var result = NonEmpty(input, Empty)

    foreach { current =>
      if (current != input)
        result = NonEmpty(current, result)
    }
    result
  }

  final def remove(input: String): Set = {
      var result = empty

      foreach { current =>
        if (current != input)
          result = NonEmpty(current, result)
      }
      result
    }

  final def union(that: Set): Set = {
    var result = this

    that.foreach { current =>
      result = result.add(current)
    }

    result
  }

  final def intersection(that: Set): Set = {
    var result = empty

    foreach { current =>
      if (that(current))
        result = result.add(current)
    }

    result
  }

  final def difference(that: Set): Set = {
    var result = empty

    foreach { current =>
      if (!that(current))
        result = result.add(current)
    }

    result
  }

  final def isSubsetOf(that: Set): Boolean = {
    var result = true

    foreach{ current =>
      result = result && that(current)
    }

    result
  }

  final def isSupersetOf(that: Set): Boolean =
    that.isSubsetOf(this)

  final override def equals(other:Any): Boolean = other
    match {
    case that: Set => this.isSubsetOf(that) && that.isSubsetOf(this)
    case _         => false
  }

  final override def hashCode: Int =
    if(isEmpty)
      41
    else{
      val nonEmptySet = this.asInstanceOf[NonEmpty]
      val element = nonEmptySet.element
      val otherElements = nonEmptySet.otherElements

      element.hashCode + otherElements.hashCode
    }

  final def size: Int = {
    var result = 0

    foreach { _ =>
      result = result + 1
    }

    result
  }

  final def isEmpty: Boolean =
    this eq Set.empty

  final def nonEmpty: Boolean =
    !isEmpty

  final def isSingleton: Boolean =
    if(isEmpty)
      false
    else{
      val nonEmptySet = this.asInstanceOf[NonEmpty]
      val otherElements = nonEmptySet.otherElements

      otherElements.isEmpty
    }

  def sample: Option[String] =
    if(isEmpty)
      None
    else {
      val nonEmptySet = this.asInstanceOf[NonEmpty]
      val element = nonEmptySet.element

      Some(element)
    }

  final def foreach[Result](function: String => Result): Unit = {
      if(nonEmpty){
        val nonEmptySet = this.asInstanceOf[NonEmpty]
        val element = nonEmptySet.element
        val otherElements = nonEmptySet.otherElements

        function(element)
        otherElements.foreach(function)
      }
    }

  final def map[Result](function: String => String): Set = {
    var result = empty

    foreach { current =>
      result = result.add(function(current))
    }

    result
  }

}

object Set {
  def apply(element: String, otherElement: String*): Set = {
    var result: Set = empty.add(element)

    otherElement.foreach { current =>
      result = result.add(current)
    }

    result
  }

  private final case class NonEmpty(element: String, otherElements: Set) extends Set

  private object NonEmpty{
    private[this] def unapply(any: Any): Option[(String, Set)] =
      patterMatchingNotSupported
  }

  private object Empty extends Set {
    private[this] def unapply(any:Any): Option[(String, Set)] =
      patterMatchingNotSupported
  }

  private[this] def unapply(any: Any): Option[(String,Set)] =
    patterMatchingNotSupported

  private[this] def patterMatchingNotSupported: Nothing =
    sys.error("pattern matching on Sets is expensive and therefore not supported")

  val empty: Set = Empty
}
